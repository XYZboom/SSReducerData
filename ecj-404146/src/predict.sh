#!/usr/bin/env bash

src=$(realpath .)
out=$(realpath ../out)

rm $out/*.class

$CR_CLIENT_HOME/bin/client -l java -s ECJ -v 3.7 -- $src -d $out -bootclasspath $JDK6_RT -7
exec_out=$($JAVA_HOME/bin/java -cp $out JdtBugJavaSeven 2>&1)
exec_exit=$?
echo "$exec_out"
if [[ $exec_out == *"java.lang.VerifyError"* ]] && [[ $exec_exit -ne 0 ]]; then
  exit 0
else
  exit 1
fi