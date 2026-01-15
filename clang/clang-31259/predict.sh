#!/bin/bash
# allow docker to access current directory
chmod 777 .
run_in_docker="docker run --rm -v $(realpath .):/tmp/clang-31259 -w /tmp/clang-31259 cnsun/perses:perses_part_54_name_clang_trunk"
clang_3_8_0="$run_in_docker clang-3.8.0 -w"
clang_7_1_0="$run_in_docker clang-7.1.0 -w"
gcc_4_8_0="$run_in_docker gcc-4.8.0 -w"
gcc_7_1_0="$run_in_docker gcc-7.1.0 -w"

BADCC1=()
BADCC2=()
BADCC3=("$clang_3_8_0 -Os")
MODE=("-m32")

# need to configure this part
#BADCC1=("clang-7.1.0 -O3")  # compilation failures
#BADCC2=() # exec failures
#BADCC3=() # wrong results
#MODE=-m64

readonly GOODCC=("$gcc_4_8_0 -O0" "$gcc_7_1_0 -m32 -O1")
readonly TIMEOUTCC=20
readonly TIMEOUTEXE=2
readonly TIMEOUTCCOMP=10
# flag to control whether to use CompCert to validate the test program.
readonly USE_COMPCERT=true
readonly CFILE=small.c
readonly CFLAG="-o t"
readonly CLANGFC="$gcc_7_1_0 -w -m64 -O0 -Wall -fwrapv -ftrapv -fsanitize=undefined,address"
readonly CLANG_MEM_SANITIZER="$gcc_7_1_0 -w -O0 -m64 -fsanitize=memory"

#################################################################################

### check for undefined behaviors first (from creduce scripts)

rm -f out*.txt

#############################
# iterate over the good ones
#############################

EXEC_T="$run_in_docker timeout -s 9 $TIMEOUTEXE ./t"

#for cc in "${GOODCC[@]}" ; do
for ((i = 0; i < ${#GOODCC[@]}; ++i)); do
  cc=${GOODCC[$i]}
  rm -f ./t ./out1.txt

  timeout -s 9 $TIMEOUTCC $cc $CFLAG $CFILE >&/dev/null
  ret=$?
  if [ $ret != 0 ]; then
    exit 1
  fi

  # execute
  (timeout -s 9 $TIMEOUTEXE $EXEC_T > out1.txt 2>&1) >&/dev/null
  ret=$?
  if [ $ret != 0 ]; then
    exit 1
  fi

  if [[ "$i" == 0 ]]; then
    mv out1.txt out0.txt
    continue
  fi

  # compare with reference: out0.txt
  if ! diff -q out0.txt out1.txt > /dev/null; then
    exit 1
  fi
done

#############################
# iterate over the bad ones
#############################

for cc in "${BADCC3[@]}"; do
  for mode in "${MODE[@]}"; do
    rm -f ./t ./out2.txt

    # compile
    timeout -s 9 $TIMEOUTCC $cc $CFLAG $mode $CFILE >&/dev/null
    ret=$?
    if [ $ret != 0 ]; then
      exit 1
    fi

    # execute
    (timeout -s 9 $TIMEOUTEXE $EXEC_T > out2.txt 2>&1) >&/dev/null
    ret=$?
    if [ $ret != 0 ]; then
      exit 1
    fi

    # compare with reference: out0.txt
    if diff -q out0.txt out2.txt > /dev/null; then
      exit 1
    fi
  done
done

# now we have passed everything, return 0
exit 0
