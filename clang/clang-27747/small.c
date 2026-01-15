typedef unsigned int size_t;
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
int printf (const char *, ...);
void __assert_fail (const char *__assertion, const char *__file, unsigned int __line, const char *__function);
static void
platform_main_end(uint32_t crc, int flag)
{
 printf ("checksum = %X\n", crc);
}
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{
  return
    -si;
}
static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 + si2);
}
static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    (si1 - si2);
}
static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    si1 * si2;
}
static int8_t
(safe_mod_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
(safe_div_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
(safe_lshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
(safe_unary_minus_func_int16_t_s)(int16_t si )
{
  return
    -si;
}
static int16_t
(safe_add_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 + si2);
}
static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    (si1 - si2);
}
static int16_t
(safe_mul_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    si1 * si2;
}
static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
(safe_div_func_int16_t_s_s)(int16_t si1, int16_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
(safe_lshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_s)(int16_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
(safe_unary_minus_func_int32_t_s)(int32_t si )
{
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
(safe_mul_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
(safe_div_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
(safe_lshift_func_int32_t_s_s)(int32_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
(safe_lshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
(safe_rshift_func_int32_t_s_s)(int32_t left, int right )
{
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
(safe_rshift_func_int32_t_s_u)(int32_t left, unsigned int right )
{
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
(safe_unary_minus_func_uint8_t_u)(uint8_t ui )
{
  return -ui;
}
static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 + ui2;
}
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ui1 - ui2;
}
static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
(safe_div_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
(safe_lshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
(safe_unary_minus_func_uint16_t_u)(uint16_t ui )
{
  return -ui;
}
static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 + ui2;
}
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ui1 - ui2;
}
static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
(safe_div_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
(safe_unary_minus_func_uint32_t_u)(uint32_t ui )
{
  return -ui;
}
static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 + ui2;
}
static uint32_t
(safe_sub_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ui1 - ui2;
}
static uint32_t
(safe_mul_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
(safe_div_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
(safe_lshift_func_uint32_t_u_s)(uint32_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
(safe_lshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
(safe_rshift_func_uint32_t_u_s)(uint32_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
(safe_rshift_func_uint32_t_u_u)(uint32_t left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
(safe_add_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
(safe_sub_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * 3.40282347e+38F)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
(safe_mul_func_float_f_f)(float sf1, float sf2 )
{
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * 3.40282347e+38F))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
(safe_div_func_float_f_f)(float sf1, float sf2 )
{
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * 3.40282347e+38F))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
(safe_add_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
(safe_sub_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * 1.7976931348623157e+308)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
(safe_mul_func_double_f_f)(double sf1, double sf2 )
{
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * 1.7976931348623157e+308))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
(safe_div_func_double_f_f)(double sf1, double sf2 )
{
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * 1.7976931348623157e+308))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
(safe_convert_func_float_to_int32_t)(float sf1 )
{
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void
crc32_gentab (void)
{
 uint32_t crc;
 const uint32_t poly = 0xEDB88320UL;
 int i, j;
 for (i = 0; i < 256; i++) {
  crc = i;
  for (j = 8; j > 0; j--) {
   if (crc & 1) {
    crc = (crc >> 1) ^ poly;
   } else {
    crc >>= 1;
   }
  }
  crc32_tab[i] = crc;
 }
}
static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
static void
crc32_8bytes (uint32_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
}
static void
transparent_crc (uint32_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %X\n", vname, crc32_context ^ 0xFFFFFFFFU);
 }
}
static void
transparent_crc_bytes (char *ptr, int nbytes, char* vname, int flag)
{
    int i;
    for (i=0; i<nbytes; i++) {
        crc32_byte(ptr[i]);
    }
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}
void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);void __profile__dump_on_exit();void __profile__unsigned_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, unsigned long long value);void __profile__signed_var(unsigned program_point, const char *var_name, int is_const, unsigned byte_width, long long value);static long __undefined;
struct S0 {
   unsigned f0 : 20;
   unsigned f1 : 27;
   signed f2 : 18;
   unsigned f3 : 21;
   unsigned f4 : 18;
   signed f5 : 3;
   signed f6 : 22;
   unsigned f7 : 17;
   int8_t f8;
};
static int16_t g_4 = 0xF0BC;
static int32_t g_11[1] = {3};
static int32_t g_21 = 0xF0A0CD95;
static struct S0 g_27 = {331,6943,151,1108,188,-1,1793,352,0x83};
static int32_t g_33[5] = {0,0,0,0,0};
static int32_t *g_32[3] = {&g_33[2],&g_33[2],&g_33[2]};
static int32_t g_80 = 0;
static int32_t *g_148 = &g_11[0];
static struct S0 g_210 = {62,11457,186,46,227,-1,-603,351,0xA8};
static int32_t **g_297 = (void*)0;
static int32_t ***g_296 = &g_297;
static struct S0 *g_466 = &g_210;
static struct S0 **g_465 = &g_466;
static uint8_t g_784[4] = {0x84,0x84,0x84,0x84};
static int32_t *g_944[7][4][9] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static int32_t *g_986[5][6][4] = {{{&g_11[0],&g_11[0],&g_21,&g_11[0]},{&g_11[0],&g_11[0],&g_33[2],&g_11[0]},{&g_33[2],&g_11[0],&g_33[2],&g_11[0]},{&g_11[0],&g_11[0],&g_21,&g_11[0]},{&g_11[0],&g_11[0],&g_33[2],&g_11[0]},{&g_33[2],&g_11[0],&g_33[2],&g_11[0]}},{{&g_11[0],&g_11[0],&g_21,&g_11[0]},{&g_11[0],&g_11[0],&g_33[2],&g_11[0]},{&g_33[2],&g_11[0],&g_33[2],&g_11[0]},{&g_11[0],&g_11[0],&g_21,&g_11[0]},{&g_11[0],&g_11[0],&g_33[2],&g_11[0]},{&g_33[2],&g_11[0],&g_33[2],&g_11[0]}},{{&g_11[0],&g_11[0],&g_21,&g_11[0]},{&g_11[0],&g_11[0],&g_33[2],&g_11[0]},{&g_33[2],&g_11[0],&g_33[2],&g_11[0]},{&g_11[0],&g_11[0],&g_21,&g_11[0]},{&g_11[0],&g_11[0],&g_33[2],&g_11[0]},{&g_33[2],&g_11[0],&g_33[2],&g_11[0]}},{{&g_11[0],&g_11[0],&g_21,&g_11[0]},{&g_11[0],&g_11[0],&g_33[2],&g_11[0]},{&g_33[2],&g_11[0],&g_33[2],&g_11[0]},{&g_11[0],&g_11[0],&g_21,&g_11[0]},{&g_11[0],&g_11[0],&g_33[2],&g_11[0]},{&g_33[2],&g_11[0],&g_33[2],&g_11[0]}},{{&g_11[0],&g_11[0],&g_21,&g_11[0]},{&g_11[0],&g_11[0],&g_33[2],&g_11[0]},{&g_33[2],&g_11[0],&g_33[2],&g_11[0]},{&g_11[0],&g_11[0],&g_21,&g_11[0]},{&g_11[0],&g_11[0],&g_33[2],&g_11[0]},{&g_33[2],&g_11[0],&g_33[2],&g_11[0]}}};
static uint32_t g_1031[5] = {4294967290U,4294967290U,4294967290U,4294967290U,4294967290U};
static uint32_t g_1094 = 0x1A48B120;
static int32_t g_1240 = (-4);
static uint32_t g_1271[3][6] = {{1U,4294967290U,0xD681EDCC,0xD681EDCC,4294967290U,1U},{0x99BFD6CB,1U,0x5736E71B,4294967290U,0x5736E71B,1U},{0x5736E71B,0x99BFD6CB,0xD681EDCC,0xD41561A5,0xD41561A5,0xD681EDCC}};
static uint16_t g_1484 = 65535U;
static int16_t g_2054[9][2][2] = {{{0x873A,0x8E43},{0x8E43,0xA2DC}},{{1,(-8)},{0x873A,1}},{{(-8),0xA2DC},{(-8),1}},{{0x873A,(-8)},{1,0xA2DC}},{{0x8E43,0x8E43},{0x873A,0x873A}},{{0x873A,0xACB4},{0xA2DC,3}},{{1,0xA2DC},{3,0xACB4}},{{3,0xA2DC},{1,3}},{{0xA2DC,0xACB4},{0x873A,0x873A}}};
static int32_t *g_2221 = &g_11[0];
static uint32_t g_2318 = 4294967287U;
static uint16_t g_2351 = 65532U;
static struct S0 **g_2531[2][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0}};
static int16_t g_2619 = 6;
static uint32_t g_2647 = 4294967291U;
static int32_t ***g_2770 = &g_297;
static int32_t g_2803 = 0x84F8D1EF;
static uint8_t g_2805 = 5U;
static int32_t g_2956 = 0x042F7866;
static int8_t func_1(void);
static int32_t * func_2(uint16_t p_3);
static int16_t func_5(int32_t p_6, int32_t * p_7, uint32_t p_8);
static uint16_t func_12(uint8_t p_13, uint8_t p_14, uint32_t p_15, int32_t * p_16, int32_t p_17);
static int32_t * func_19(int32_t * p_20);
static uint16_t func_38(uint8_t p_39, struct S0 * p_40, uint8_t p_41, int32_t p_42);
static int32_t * func_49(int32_t * p_50, int32_t ** p_51, int32_t ** p_52, struct S0 * p_53, uint8_t p_54);
static int8_t func_1(void)
{
    int32_t l_9 = 0xDCD16652;
    int32_t *l_10[8][2][10] = {{{&g_11[0],(void*)0,&g_11[0],&g_11[0],&g_11[0],&g_11[0],(void*)0,&g_11[0],&g_11[0],(void*)0},{&g_11[0],&g_11[0],(void*)0,(void*)0,&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0]}},{{&g_11[0],(void*)0,(void*)0,&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0],(void*)0},{&g_11[0],&g_11[0],&g_11[0],(void*)0,&g_11[0],&g_11[0],(void*)0,&g_11[0],&g_11[0],&g_11[0]}},{{&g_11[0],(void*)0,&g_11[0],&g_11[0],&g_11[0],&g_11[0],(void*)0,&g_11[0],&g_11[0],(void*)0},{&g_11[0],&g_11[0],(void*)0,(void*)0,&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0]}},{{&g_11[0],(void*)0,(void*)0,&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0],(void*)0},{&g_11[0],&g_11[0],&g_11[0],(void*)0,&g_11[0],&g_11[0],(void*)0,&g_11[0],&g_11[0],&g_11[0]}},{{&g_11[0],(void*)0,&g_11[0],&g_11[0],&g_11[0],&g_11[0],(void*)0,&g_11[0],&g_11[0],(void*)0},{&g_11[0],&g_11[0],(void*)0,(void*)0,&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0]}},{{&g_11[0],(void*)0,(void*)0,&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0],(void*)0},{&g_11[0],&g_11[0],&g_11[0],(void*)0,&g_11[0],&g_11[0],(void*)0,&g_11[0],&g_11[0],&g_11[0]}},{{&g_11[0],(void*)0,&g_11[0],&g_11[0],&g_11[0],&g_11[0],(void*)0,&g_11[0],&g_11[0],(void*)0},{&g_11[0],&g_11[0],(void*)0,(void*)0,&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0]}},{{&g_11[0],(void*)0,(void*)0,&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0],&g_11[0],(void*)0},{&g_11[0],&g_11[0],&g_11[0],(void*)0,&g_11[0],&g_11[0],(void*)0,&g_11[0],&g_11[0],&g_11[0]}}};
    uint32_t l_18 = 4294967291U;
    uint8_t l_31 = 254U;
    int32_t **l_2926 = &g_944[6][0][7];
    struct S0 *l_2933 = &g_210;
    int i, j, k;
    (*l_2926) = func_2(((g_4 > func_5(l_9, l_10[2][1][5], (g_11[0] & g_11[0]))) , func_12(((l_18 < func_5(g_4, func_19(l_10[3][0][8]), g_4)) != l_31), g_4, g_4, g_32[1], g_33[2])));
    for (l_31 = 2; (l_31 >= 51); l_31 = safe_add_func_int32_t_s_s(l_31, 1))
    {
        uint16_t l_2940[8] = {0U,0U,0U,0U,0U,0U,0U,0U};
        int i;
for (g_4 = 4; (g_4 >= 0); g_4 -= 1)
                {
                    int32_t *l_197 = &g_33[g_4];
                    int i;
                    g_33[g_4] = (safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((&g_33[g_4] != (*(*g_296))), ((safe_sub_func_int8_t_s_s(0x77, (safe_div_func_int8_t_s_s(((g_33[g_4] || g_11[0]) <= ((void*)0 == g_466)), (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((**(*g_296)), (((((((*(*g_296)) != (void*)0) , g_4) != 0x4492) , g_4) == (*g_148)) == g_210.f6))), 6)), (*g_2221))), 1U)), g_210.f0)))))) >= (*g_2221)))), 13));
                    g_2647 = (safe_mod_func_int16_t_s_s(0, g_4));
                    g_148 = (*(*g_296));
                    (((g_148 >= &g_33[0] && g_148 <= &g_33[4])) ? (void) (0) : __assert_fail ("(g_148 >= &g_33[0] && g_148 <= &g_33[4])", "t.c", 130, __PRETTY_FUNCTION__));
                    l_197 = (*(*g_296));
                }
if ((**(*g_2770)))
                        break;
                  ;
                  for (g_21 = 0; (g_21 > (-15)); g_21 = safe_sub_func_int32_t_s_s(g_21, 1))
        {
            uint16_t l_2954 = 0xBB7C;
            struct S0 **l_2955 = (void*)0;
{
            transparent_crc(g_1271[g_2956][l_9], "g_1271[g_2956][l_9]", g_2803);
            if (g_2803) printf("index = [%d][%d]\n", g_2956, l_9);
        }
                    (*g_148) = 0x64EAFE29;
            for (g_2805 = 0; (g_2805 <= 3); g_2805 += 1)
            {
                struct S0 ***l_2957 = &g_2531[1][1];
                int16_t l_2958 = 0x8258;
                int i, j, k;
            }
        }
    }
    return g_11[0];
}
static int32_t * func_2(uint16_t p_3)
{
    int32_t *l_2742 = &g_33[2];
    int32_t **l_2743 = &g_986[0][5][1];
    struct S0 ***l_2771 = &g_2531[0][0];
    uint32_t l_2842[8] = {4294967288U,4294967288U,4294967288U,0x2C0253A1,0x2C0253A1,4294967288U,0x2C0253A1,0x2C0253A1};
    int i;
                                        if ((g_27.f5>-1) )
{
{
{
        struct S0 l_989 = {907,8858,-498,755,59,1,-1185,276,0};
        (*(&g_27)) = l_989;
    }
            (*l_2743) = &(*g_2221);
            (((*l_2743) == &(*g_2221)) ? (void) (0) : __assert_fail ("(*l_2743) == &(*g_2221)", "t.c", 187, __PRETTY_FUNCTION__));
        }
}
            (*l_2743) = l_2742;
                                        while ((!g_210.f3) )
{
{
    int32_t *l_2742 = &g_33[2];
    int32_t **l_2743 = &g_986[0][5][1];
    struct S0 ***l_2771 = &g_2531[0][0];
    uint32_t l_2842[8] = {4294967288U,4294967288U,4294967288U,0x2C0253A1,0x2C0253A1,4294967288U,0x2C0253A1,0x2C0253A1};
    int i;
    (*l_2743) = l_2742;
    for ((*l_2742) = 0; ((*l_2742) <= 2); (*l_2742) += 1)
    {
        int32_t ***l_2774 = &g_297;
        struct S0 l_2818 = {24,6738,-426,165,390,-0,1153,115,0xEA};
        struct S0 ***l_2865[3];
        int i;
{
                (**(*l_2771)) = (*g_466);
            }
                    for (i = 0; i < 3; i++)
            l_2865[i] = &(*l_2771);
        g_32[(*l_2742)] = g_32[(*l_2742)];
        (*(&i)) = ((safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_int32_t_s(((+((((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((((((safe_sub_func_uint8_t_u_u((p_3 , (*(*g_465)).f5), ((0xE948A20E < (0x51576ED4 < (safe_rshift_func_uint8_t_u_u((((safe_div_func_int32_t_s_s(((p_3 , (0 > ((safe_div_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((&g_32[(*l_2742)] == &g_32[(*l_2742)]), 6)) != (0x3A76E62F < (*l_2742))) , 0x6C), p_3)) , &l_2743) != (&l_2743)) | p_3) <= p_3), 1)), (*(*g_465)).f3)), p_3)) | 0x23CC) != g_33[3]) | 0x0B28), p_3)) , (*(*g_465)).f7))) && 0x38), p_3)) && (*(*g_465)).f6) | 1), (*l_2742))))) == p_3))) , (*(*g_465)).f1) , 0x7D5F7640) || (-1)) , (void*)0) != l_2771))), 0xEA)) | (-7)) < 0x54EA) || (*l_2742))) , 3))))) | 65535U);
        for (p_3 = (-12); (p_3 == 60); p_3 = safe_add_func_int32_t_s_s(p_3, 6))
        {
            uint16_t l_2775 = 0xE2FA;
            int16_t l_2804 = 8;
            struct S0 **l_2817[2][8][4] = {{{&(*g_465),&(*g_465),&(*g_465),&(*g_465)},{&(*g_465),&(*g_465),(void*)0,&(*g_465)},{&(*g_465),&(*g_465),&(*g_465),(void*)0},{&(*g_465),(void*)0,(void*)0,(void*)0},{&(*g_465),&(*g_465),&(*g_465),&(*g_465)},{(void*)0,&(*g_465),&(*g_465),(void*)0},{&(*g_465),&(*g_465),(void*)0,&(*g_465)},{&(*g_465),&(*g_465),&(*g_465),(void*)0}},{{(void*)0,&(*g_465),&(*g_465),&(*g_465)},{&(*g_465),&(*g_465),(void*)0,(void*)0},{&(*g_465),&(*g_465),&(*g_465),&(*g_465)},{&(*g_465),&(*g_465),(void*)0,&(*g_465)},{&(*g_465),&(*g_465),&(*g_465),(void*)0},{&(*g_465),&(*g_465),(void*)0,&(*g_465)},{&(*g_465),&(*g_465),&(*g_465),&(*g_465)},{&(*g_465),&(*g_465),(void*)0,(void*)0}}};
            int32_t l_2882 = (-4);
            int32_t *l_2884[4][4][8] = {{{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]},{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]},{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]},{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]}},{{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]},{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]},{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]},{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]}},{{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]},{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]},{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]},{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]}},{{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]},{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]},{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]},{&g_33[2],&(*l_2742),&g_33[1],&g_33[2],&g_33[2],&g_33[1],&(*l_2742),&g_33[2]}}};
            int i, j, k;
        }
        for (l_2818.f8 = 1; (l_2818.f8 <= 7); l_2818.f8 += 1)
        {
            uint16_t l_2912[10][5] = {{65535U,65531U,0x8995,65531U,65535U},{1U,0xB873,0x1C2D,0xB873,1U},{65535U,65531U,0x8995,65531U,65535U},{1U,0xB873,0x1C2D,0xB873,1U},{65535U,65531U,0x8995,65531U,65535U},{1U,0xB873,0x1C2D,0xB873,1U},{65535U,65531U,0x8995,65531U,65535U},{1U,0xB873,0x1C2D,0xB873,1U},{65535U,65531U,0x8995,65531U,65535U},{1U,0xB873,0x1C2D,0xB873,1U}};
            int32_t *l_2923 = (void*)0;
            int i, j;
        }
    }
    (*l_2743) = (*l_2743);
    (*l_2743) = (*l_2743);
    return (*l_2743);
}
}
            for (g_80 = 0; (g_80 <= 2); g_80 += 1)
    {
        int32_t ***l_2774 = &g_297;
        struct S0 l_2818 = {24,6738,-426,165,390,-0,1153,115,0xEA};
        struct S0 ***l_2865[3];
        int i;
                                            if ((l_2818.f0>24) )
{
{
            int i;
            if (g_2318)
                break;
        }
}
                    for (i = 0; i < 3; i++)
            l_2865[i] = &g_465;
                                           if (l_2818.f4)
                    g_32[g_80] = g_32[g_80];
        (*g_148) = ((safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_int32_t_s(((+((((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(((((((safe_sub_func_uint8_t_u_u((p_3 , g_27.f5), ((0xE948A20E < (0x51576ED4 < (safe_rshift_func_uint8_t_u_u((((safe_div_func_int32_t_s_s(((p_3 , (0 > ((safe_div_func_int8_t_s_s(((((safe_mul_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_s((&g_32[g_80] == &g_32[g_80]), 6)) != (0x3A76E62F < (*l_2742))) , 0x6C), p_3)) , &l_2743) != g_2770) | p_3) <= p_3), 1)), g_210.f3)), p_3)) | 0x23CC) != g_33[3]) | 0x0B28), p_3)) , g_27.f7))) && 0x38), p_3)) && g_210.f6) | 1), (*l_2742))))) == p_3))) , g_27.f1) , 0x7D5F7640) || (-1)) , (void*)0) != l_2771))), 0xEA)) | (-7)) < 0x54EA) || (*l_2742))) , 3))))) | 65535U);
        for (p_3 = (-12); (p_3 == 60); p_3 = safe_add_func_int32_t_s_s(p_3, 6))
        {
            uint16_t l_2775 = 0xE2FA;
            int16_t l_2804 = 8;
            struct S0 **l_2817[2][8][4] = {{{&g_466,&g_466,&g_466,&g_466},{&g_466,&g_466,(void*)0,&g_466},{&g_466,&g_466,&g_466,(void*)0},{&g_466,(void*)0,(void*)0,(void*)0},{&g_466,&g_466,&g_466,&g_466},{(void*)0,&g_466,&g_466,(void*)0},{&g_466,&g_466,(void*)0,&g_466},{&g_466,&g_466,&g_466,(void*)0}},{{(void*)0,&g_466,&g_466,&g_466},{&g_466,&g_466,(void*)0,(void*)0},{&g_466,&g_466,&g_466,&g_466},{&g_466,&g_466,(void*)0,&g_466},{&g_466,&g_466,&g_466,(void*)0},{&g_466,&g_466,(void*)0,&g_466},{&g_466,&g_466,&g_466,&g_466},{&g_466,&g_466,(void*)0,(void*)0}}};
            int32_t l_2882 = (-4);
            int32_t *l_2884[4][4][8] = {{{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]},{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]},{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]},{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]}},{{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]},{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]},{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]},{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]}},{{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]},{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]},{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]},{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]}},{{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]},{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]},{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]},{&g_33[2],&g_2803,&g_33[1],&g_33[2],&g_33[2],&g_33[1],&g_2803,&g_33[2]}}};
            int i, j, k;
        }
                                       int32_t BHbHbl_2818_f6 = (~(((~(((~(l_2818.f3)) | ((l_2818.f2 / l_2818.f0) / (l_2818.f1 | l_2818.f5))))) & (((-(l_2818.f6)) * ((-((g_27.f7 & g_210.f3))) * (~(g_80)))) / (~(g_210.f6))))));
uint32_t BHbHbbl_2818_f0 = (~(((((~(l_2818.f2)) & ((-(l_2818.f6)) * g_210.f3)) / (~((g_210.f6 * g_27.f7)))) * (((-((l_2818.f1 | l_2818.f3))) & g_80) | (~((l_2818.f0 ^ l_2818.f5)))))));
uint32_t BHbHbcg_27_f7 = (-((((g_210.f6 * (g_27.f7 / BHbHbl_2818_f6)) ^ (l_2818.f1 * (~((-((((~(g_210.f3)) | ((l_2818.f5 * l_2818.f3) / l_2818.f6)) ^ (~(l_2818.f2))))))))) & (~((~(g_80)))))));
int32_t BHbHbdl_2818_f2 = (~((((((~((BHbHbbl_2818_f0 / l_2818.f1))) * (-(l_2818.f2))) << (-((~(l_2818.f0))))) * (((~(((~(g_27.f7)) ^ (~(g_80))))) * l_2818.f3) / g_210.f3)) ^ (~((~((~((-((BHbHbl_2818_f6 & l_2818.f5))))))))))));
                               uint32_t B2b2bg_27_f1 = (~((((((~(l_2818.f8)) & ((-(g_27.f1)) ^ ((l_2818.f0 & (~(l_2818.f6))) | (~(g_80))))) ^ (~(l_2818.f1))) | (l_2818.f5 & (~(l_2818.f7)))) || (g_210.f6 % g_27.f5))));
int32_t B2b2bbg_80 = (~(((-((~(((~(g_80)) | l_2818.f7))))) & (~(((~(((~(l_2818.f6)) | ((-(g_27.f1)) / (~((l_2818.f5 ^ ((g_27.f5 + ((~(l_2818.f8)) >> l_2818.f0)) / l_2818.f1)))))))) || (~(g_210.f6))))))));
uint32_t B2b2bcl_2818_f7 = (~((g_210.f6 + (~((((l_2818.f6 % g_27.f5) ^ (-((~(l_2818.f5))))) + ((g_80 + B2b2bg_27_f1) & ((~((~(l_2818.f8)))) + (l_2818.f7 ^ (-((~((l_2818.f1 % B2b2bbg_80))))))))))))));
uint32_t B2b2bdl_2818_f1 = (~(((~((g_80 ^ (-(((~(l_2818.f7)) + g_27.f1)))))) ^ ((g_210.f6 ^ ((~(B2b2bg_27_f1)) | ((l_2818.f8 / B2b2bbg_80) || (~((l_2818.f0 % B2b2bcl_2818_f7)))))) << l_2818.f5))));
if(((g_27.f5>-1) || g_210.f6)){
B2b2bg_27_f1 = g_27.f1;
B2b2bbg_80 = g_80;
B2b2bcl_2818_f7 = l_2818.f7;
B2b2bdl_2818_f1 = l_2818.f1;
g_27.f1 = (~(((~((B2b2bdl_2818_f1 || ((B2b2bcl_2818_f7 + g_27.f1) >> (l_2818.f8 / (~(l_2818.f6))))))) || (~((((-((g_80 ^ (l_2818.f1 | B2b2bbg_80)))) & l_2818.f7) ^ l_2818.f5))))));
g_80 = (~(((~((~(((((g_27.f1 + l_2818.f8) | (l_2818.f1 & l_2818.f7)) & (g_80 / g_27.f5)) / (~(l_2818.f6))))))) + ((l_2818.f5 / l_2818.f0) >> (-((~(B2b2bbg_80))))))));
l_2818.f7 = (-(((-(((~(l_2818.f6)) || (~(B2b2bbg_80))))) & (-((~(((((-(l_2818.f7)) | g_80) & (B2b2bdl_2818_f1 & (~((g_27.f1 % l_2818.f8))))) & ((B2b2bcl_2818_f7 + (~(l_2818.f0))) || g_210.f6)))))))));
l_2818.f1 = (~(((~(B2b2bbg_80)) | (((l_2818.f1 ^ (-(g_27.f1))) || ((~(g_27.f5)) % B2b2bcl_2818_f7)) + ((B2b2bg_27_f1 & (-(g_210.f6))) % (-((~(((~((l_2818.f5 % l_2818.f8))) ^ l_2818.f7))))))))));
if(!((B2b2bg_27_f1 > B2b2bdl_2818_f1))){
printf("g_27.f1=%llu\n", (unsigned long long)g_27.f1);
continue;
}
if((g_27.f5>-1)){
printf("g_80=%lld\n", (long long)g_80);
continue;
}
                               int8_t Bececl_2818_f8 = (~((((~((~((~(l_2818.f2)))))) | (((~(g_27.f5)) & l_2818.f3) | (~(((l_2818.f4 && l_2818.f1) & (l_2818.f8 && (g_80 + g_210.f3))))))) * ((~((~(l_2818.f6)))) + l_2818.f0))));
uint32_t Bececbl_2818_f0 = (~(((~((((l_2818.f2 * l_2818.f6) && g_210.f3) + (Bececl_2818_f8 & (l_2818.f8 * (g_80 | l_2818.f1)))))) + (~((~(((l_2818.f3 ^ l_2818.f4) * g_27.f5))))))));
int8_t Bececcg_27_f5 = (~((((~((~(l_2818.f8)))) * (l_2818.f0 | ((~(g_80)) && (g_27.f5 + (l_2818.f3 && l_2818.f1))))) ^ ((Bececbl_2818_f0 + (g_210.f3 && l_2818.f6)) & Bececl_2818_f8))));
int32_t Bececdl_2818_f6 = (-(((-(((~(((l_2818.f1 + l_2818.f4) | Bececcg_27_f5))) + (~(((l_2818.f2 * (l_2818.f0 & Bececl_2818_f8)) ^ (-(l_2818.f6)))))))) * (~((g_80 + (g_27.f5 && l_2818.f8)))))));
if(((l_2818.f3>=165) || (!l_2818.f3))){
Bececl_2818_f8 = l_2818.f8;
Bececbl_2818_f0 = l_2818.f0;
LABEL_ecece: Bececcg_27_f5 = g_27.f5;
Bececdl_2818_f6 = l_2818.f6;
                                   if (l_2818.f6)
                    l_2818.f8 = (-((((~(((Bececbl_2818_f0 & l_2818.f0) & ((~(l_2818.f4)) * (~((-(g_80)))))))) ^ (~(g_27.f5))) * ((~(l_2818.f2)) && (-((Bececl_2818_f8 && (Bececcg_27_f5 ^ (-((l_2818.f3 ^ l_2818.f1)))))))))));
l_2818.f0 = (-((((-(Bececl_2818_f8)) * (g_27.f5 & g_210.f3)) + (((~(l_2818.f8)) * (~(Bececdl_2818_f6))) ^ ((((l_2818.f4 && (-(g_80))) && l_2818.f6) * l_2818.f1) | l_2818.f0)))));
g_27.f5 = (~((((((~(Bececdl_2818_f6)) + (l_2818.f8 * l_2818.f0)) << (-(Bececcg_27_f5))) + (-((~((~(g_210.f3))))))) & (~(((-((~(((l_2818.f2 ^ l_2818.f3) & (l_2818.f4 & g_27.f5)))))) >> l_2818.f1))))));
l_2818.f6 = (-((((~(((~((l_2818.f2 & Bececbl_2818_f0))) | g_80))) * ((~(l_2818.f6)) * g_210.f3)) & (~(((-((l_2818.f4 << l_2818.f1))) | ((g_27.f5 & l_2818.f8) | l_2818.f3)))))));
if((g_210.f3>46)){
printf("l_2818.f8=%lld\n", (long long)l_2818.f8);
goto LABEL_ecece;
}
if((Bececl_2818_f8>-22)){
printf("g_27.f5=%lld\n", (long long)g_27.f5);
break;
}
if((l_2818.f0<1026766)){
printf("l_2818.f6=%lld\n", (long long)l_2818.f6);
Bececcg_27_f5 = (-(((~(((((-(l_2818.f0)) << l_2818.f3) * (-((-(Bececl_2818_f8))))) + (Bececdl_2818_f6 >> Bececbl_2818_f0)))) >> (~((((~(l_2818.f4)) << ((~(g_27.f5)) << (g_210.f3 | l_2818.f2))) ^ (~(g_80))))))));
goto LABEL_ecece;
}
}
l_2818.f8 = Bececl_2818_f8;
l_2818.f0 = Bececbl_2818_f0;
g_27.f5 = Bececcg_27_f5;
l_2818.f6 = Bececdl_2818_f6;
                    if((B2b2bg_27_f1>6943U)){
printf("l_2818.f7=%llu\n", (unsigned long long)l_2818.f7);
break;
}
if((g_27.f1 && (B2b2bcl_2818_f7 < l_2818.f5))){
printf("l_2818.f1=%llu\n", (unsigned long long)l_2818.f1);
g_2619 += 1;
                    g_27.f1 = (~(((~((~((~(B2b2bg_27_f1)))))) + (((g_27.f5 / (-(B2b2bcl_2818_f7))) ^ (~((-((B2b2bdl_2818_f1 | B2b2bbg_80)))))) ^ (((l_2818.f0 | l_2818.f6) % g_210.f6) >> (~(((~(l_2818.f7)) << (~((~(g_80))))))))))));
l_2818.f1 = (-((((l_2818.f8 + (B2b2bcl_2818_f7 || (-(l_2818.f0)))) << (-(((l_2818.f1 / l_2818.f7) ^ (~((~((g_210.f6 >> l_2818.f5))))))))) >> (-(((-((~(l_2818.f6)))) || (~((g_27.f1 + (~(g_27.f5)))))))))));
break;
}
}
g_27.f1 = B2b2bg_27_f1;
g_80 = B2b2bbg_80;
l_2818.f7 = B2b2bcl_2818_f7;
l_2818.f1 = B2b2bdl_2818_f1;
                    if((g_210.f6 && (l_2818.f3 > l_2818.f0))){
BHbHbl_2818_f6 = l_2818.f6;
                                   if ((g_27.f5 > l_2818.f8))
                    BHbHbbl_2818_f0 = l_2818.f0;
BHbHbcg_27_f7 = g_27.f7;
BHbHbdl_2818_f2 = l_2818.f2;
l_2818.f6 = (~((((-((~(g_210.f3)))) * (~((-((((~(BHbHbl_2818_f6)) * (l_2818.f0 * BHbHbcg_27_f7)) * (l_2818.f2 & g_210.f6))))))) ^ (~(((~((BHbHbbl_2818_f0 & (l_2818.f5 & (~(g_27.f7)))))) & BHbHbdl_2818_f2))))));
l_2818.f0 = (~(((-((g_210.f6 | (~((l_2818.f1 & l_2818.f0)))))) / (~(((-((g_80 & (BHbHbl_2818_f6 ^ BHbHbcg_27_f7)))) & (~((((l_2818.f5 ^ g_27.f7) * g_210.f3) / BHbHbdl_2818_f2)))))))));
g_27.f7 = (~(((-(((~(l_2818.f0)) | l_2818.f6))) * (((~((~(((((BHbHbcg_27_f7 * BHbHbdl_2818_f2) | g_27.f7) ^ (~(g_210.f3))) * (l_2818.f3 | l_2818.f2)))))) & (-(l_2818.f1))) << BHbHbbl_2818_f0))));
l_2818.f2 = (-((((l_2818.f0 | (g_80 << BHbHbbl_2818_f0)) & l_2818.f2) & (~(((((~((g_210.f3 ^ (~(l_2818.f3))))) * (-(l_2818.f1))) / (-((~(g_210.f6))))) & (l_2818.f6 ^ (~(BHbHbdl_2818_f2)))))))));
if((BHbHbcg_27_f7<352U)){
printf("l_2818.f6=%lld\n", (long long)l_2818.f6);
l_2818.f0 = (~((((BHbHbdl_2818_f2 >> l_2818.f6) ^ (~((~((g_210.f3 * g_27.f7)))))) ^ ((((~(BHbHbbl_2818_f0)) * (g_80 / l_2818.f3)) << (-(BHbHbl_2818_f6))) & (~((l_2818.f2 * (-(g_210.f6)))))))));
if (BHbHbcg_27_f7)
                break;
                    BHbHbl_2818_f6 = (~((((~(((BHbHbbl_2818_f0 | (BHbHbdl_2818_f2 | BHbHbcg_27_f7)) / ((-(l_2818.f3)) & (~(((~(g_210.f6)) / (g_27.f7 << l_2818.f1)))))))) / (-(((-((~(l_2818.f0)))) * g_80)))) & (-((-(l_2818.f6)))))));
g_27.f7 = (~(((~(BHbHbcg_27_f7)) >> ((~((g_80 >> g_210.f6))) & (~(((l_2818.f3 << (((~((BHbHbbl_2818_f0 << l_2818.f0))) >> (~((g_27.f7 << l_2818.f5)))) * BHbHbl_2818_f6)) * (-((-(BHbHbdl_2818_f2)))))))))));
}
if((l_2818.f6 < BHbHbcg_27_f7)){
printf("l_2818.f0=%llu\n", (unsigned long long)l_2818.f0);
for (g_80 = 4; (g_80 >= 0); g_80 -= 1)
                    {
                        return (*(&g_2221));
                    };
                    BHbHbbl_2818_f0 = (~(((g_210.f6 & (l_2818.f2 >> (~((((-(l_2818.f1)) / g_80) >> (~((l_2818.f3 * BHbHbbl_2818_f0)))))))) / ((~(g_27.f7)) | ((~((BHbHbl_2818_f6 & BHbHbcg_27_f7))) << l_2818.f0)))));
continue;
}
if(!((l_2818.f6 > l_2818.f1))){
printf("g_27.f7=%llu\n", (unsigned long long)g_27.f7);
break;
}
if(!((l_2818.f3 && l_2818.f1))){
printf("l_2818.f2=%lld\n", (long long)l_2818.f2);
g_2805 += 1;
                    BHbHbcg_27_f7 = (-(((g_210.f6 * BHbHbdl_2818_f2) >> ((l_2818.f2 << l_2818.f6) / ((~(((-((BHbHbbl_2818_f0 / (g_210.f3 * l_2818.f0)))) >> (-(l_2818.f3))))) ^ (~((BHbHbcg_27_f7 * BHbHbl_2818_f6))))))));
}
}
l_2818.f6 = BHbHbl_2818_f6;
l_2818.f0 = BHbHbbl_2818_f0;
g_27.f7 = BHbHbcg_27_f7;
                                    while (((l_2818.f3 < l_2818.f6) && (l_2818.f4 < l_2818.f0)) )
{
g_4 -= 1;
}
                    l_2818.f2 = BHbHbdl_2818_f2;
                                                   int32_t Brcrcl_2818_f2 = (~(((~(((-((l_2818.f0 + (~(g_27.f7))))) >> l_2818.f5))) - (-(((~(l_2818.f6)) ^ (~(((((l_2818.f4 - g_210.f3) * l_2818.f3) + (g_210.f6 - g_27.f5)) && l_2818.f2)))))))));
int32_t Brcrcbl_2818_f6 = (~((((~((~((-((l_2818.f6 || l_2818.f0))))))) | (~(((~(l_2818.f4)) | (Brcrcl_2818_f2 ^ l_2818.f5))))) * (g_210.f3 * ((l_2818.f2 ^ (l_2818.f3 | g_27.f5)) * g_27.f7)))));
int8_t Brcrccg_27_f5 = (-(((((-(((g_210.f3 - (~(l_2818.f6))) + (g_27.f5 * l_2818.f5)))) && l_2818.f3) & Brcrcbl_2818_f6) | ((-(((l_2818.f4 || g_210.f6) && l_2818.f2))) - (~(Brcrcl_2818_f2))))));
uint32_t Brcrcdg_210_f3 = (-(((-(((~((-(l_2818.f4)))) && ((-((g_27.f7 ^ (-(((l_2818.f0 - (~(Brcrcl_2818_f2))) && l_2818.f3)))))) >> l_2818.f5)))) & (~(((~(Brcrccg_27_f5)) | (~(((~(g_27.f5)) && (~(((~(l_2818.f2)) && l_2818.f6))))))))))));
if((g_27.f5<=-1)){
Brcrcl_2818_f2 = l_2818.f2;
Brcrcbl_2818_f6 = l_2818.f6;
Brcrccg_27_f5 = g_27.f5;
Brcrcdg_210_f3 = g_210.f3;
l_2818.f2 = (-(((-((-(((g_210.f3 * (-(l_2818.f6))) && l_2818.f3))))) & (-((((((~(Brcrcl_2818_f2)) & l_2818.f4) + (-(Brcrcbl_2818_f6))) + l_2818.f2) + (-(((~((~(g_27.f5)))) || (l_2818.f0 + g_210.f6))))))))));
l_2818.f6 = (~(((((~((Brcrccg_27_f5 & (~((~(l_2818.f2))))))) && (-((g_27.f7 || g_210.f6)))) + (((-(Brcrcbl_2818_f6)) - (l_2818.f6 * Brcrcl_2818_f2)) ^ ((-(l_2818.f5)) || g_27.f5))) & (~((-(l_2818.f4)))))));
g_27.f5 = (-((((-(((~(l_2818.f6)) & (~((l_2818.f2 - (g_27.f7 - g_210.f3))))))) * ((l_2818.f3 * g_27.f5) + ((Brcrccg_27_f5 && (~(l_2818.f5))) && (~((-(l_2818.f4))))))) | g_210.f6)));
g_210.f3 = (-(((~((~(Brcrcbl_2818_f6)))) ^ ((~(((Brcrcl_2818_f2 || Brcrcdg_210_f3) && ((-((l_2818.f2 + (g_27.f7 ^ l_2818.f0)))) | (l_2818.f4 | g_27.f5))))) * (~((g_210.f3 - l_2818.f6)))))));
if((!l_2818.f6)){
printf("l_2818.f2=%lld\n", (long long)l_2818.f2);
break;
}
if((g_27.f7>352)){
printf("l_2818.f6=%lld\n", (long long)l_2818.f6);
g_27.f5 = (~((((~((Brcrccg_27_f5 + l_2818.f3))) * (-((~((~(((l_2818.f2 ^ l_2818.f4) ^ (~(g_210.f6)))))))))) & (((~(Brcrcl_2818_f2)) ^ l_2818.f6) || (~(((g_27.f7 | l_2818.f0) >> (-((~(Brcrcbl_2818_f6)))))))))));
Brcrcdg_210_f3 = (~(((((-((((~(Brcrcl_2818_f2)) + g_27.f5) & l_2818.f6))) || (((~(l_2818.f3)) && g_27.f7) * l_2818.f0)) - (-((g_210.f3 << (~((~(Brcrcbl_2818_f6)))))))) ^ (l_2818.f4 & (~(l_2818.f5))))));
break;
}
if((((l_2818.f2<=0) && (l_2818.f3 < l_2818.f5)) || !((l_2818.f0<=24)))){
printf("g_27.f5=%lld\n", (long long)g_27.f5);
g_210.f3 = (~((l_2818.f6 || ((~(((~(Brcrcl_2818_f2)) & (((-(Brcrccg_27_f5)) || Brcrcdg_210_f3) & (l_2818.f2 >> l_2818.f0))))) * ((~(l_2818.f3)) - (g_210.f3 * (l_2818.f4 && (~(g_210.f6)))))))));
continue;
}
if((((!g_210.f6) || (l_2818.f2<=0)) && (l_2818.f4 && (l_2818.f4>390)))){
printf("g_210.f3=%llu\n", (unsigned long long)g_210.f3);
continue;
}
}
l_2818.f2 = Brcrcl_2818_f2;
l_2818.f6 = Brcrcbl_2818_f6;
g_27.f5 = Brcrccg_27_f5;
g_210.f3 = Brcrcdg_210_f3;
                    for (l_2818.f8 = 1; (l_2818.f8 <= 7); l_2818.f8 += 1)
        {
            uint16_t l_2912[10][5] = {{65535U,65531U,0x8995,65531U,65535U},{1U,0xB873,0x1C2D,0xB873,1U},{65535U,65531U,0x8995,65531U,65535U},{1U,0xB873,0x1C2D,0xB873,1U},{65535U,65531U,0x8995,65531U,65535U},{1U,0xB873,0x1C2D,0xB873,1U},{65535U,65531U,0x8995,65531U,65535U},{1U,0xB873,0x1C2D,0xB873,1U},{65535U,65531U,0x8995,65531U,65535U},{1U,0xB873,0x1C2D,0xB873,1U}};
            int32_t *l_2923 = (void*)0;
            int i, j;
        }
    }
                                       if ((g_80 < g_27.f1))
            (*l_2743) = (*l_2743);
    (*l_2743) = (*l_2743);
                                        while (((!g_210.f3) || (g_210.f3 > g_27.f7)) )
{
(*g_148) += 1;
}
            return (*l_2743);
}
static int16_t func_5(int32_t p_6, int32_t * p_7, uint32_t p_8)
{
                                        if ((g_4<-3908) )
{
g_27.f8 += 1;
  for (g_1240 = 0; g_1240 < 6; g_1240++)
        {
            transparent_crc(g_1271[g_2803][g_1240], "g_1271[g_2803][g_1240]", g_2803);
            if (g_2803) {
{
                        uint8_t l_1841 = 0xAC;
                        (*(&g_2221)) = g_2221;
                        (**(&(*g_465))) = (*(*g_465));
                        (*(&g_2221)) = &g_11[0];
                        g_2221 = (&g_2956);
                        ((g_2221 == 0) ? (void) (0) : __assert_fail ("g_2221 == 0", "t.c", 495, __PRETTY_FUNCTION__));
                    }
  printf("index = [%d][%d]\n", g_2803, g_1240);}
        };
}
  return g_4;
}
static uint16_t func_12(uint8_t p_13, uint8_t p_14, uint32_t p_15, int32_t * p_16, int32_t p_17)
{
    int8_t l_43 = 0x32;
    struct S0 *l_61[3][4][8] = {{{&g_27,&g_27,&g_27,&g_27,(void*)0,(void*)0,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,(void*)0},{&g_27,(void*)0,&g_27,&g_27,&g_27,(void*)0,&g_27,(void*)0},{(void*)0,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27}},{{&g_27,(void*)0,&g_27,&g_27,(void*)0,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27},{(void*)0,(void*)0,&g_27,&g_27,&g_27,&g_27,(void*)0,&g_27}},{{&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27,&g_27},{(void*)0,&g_27,&g_27,&g_27,&g_27,&g_27,(void*)0,&g_27},{&g_27,&g_27,&g_27,(void*)0,&g_27,&g_27,&g_27,&g_27},{&g_27,&g_27,&g_27,&g_27,(void*)0,&g_27,&g_27,(void*)0}}};
    uint8_t l_62 = 0xC4;
    int32_t l_2566 = 0xB3E5C69E;
    int32_t ***l_2579[1];
    int8_t l_2582[2][3] = {{(-2),0,0},{(-2),0,0}};
    int32_t l_2617 = 4;
    struct S0 ***l_2658 = &g_465;
    int8_t l_2665[3];
    int8_t l_2722 = (-1);
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2579[i] = &g_297;
                                        if (((l_62<=196) && (l_2722 < g_27.f8)) )
{
{
                        uint8_t l_1841 = 0xAC;
                        (*(&g_2221)) = g_148;
                        (**g_465) = (*(&g_27));
                        (*(&g_2221)) = &g_11[0];
                        (*g_297) = (&g_2803);
                        (((*g_297) == 0) ? (void) (0) : __assert_fail ("(*g_297) == 0", "t.c", 538, __PRETTY_FUNCTION__));
                    }
}
            for (i = 0; i < 3; i++)
        l_2665[i] = (-1);
                                       if (!((g_27.f8 > l_2617)))
            for (g_27.f8 = 0; (g_27.f8 <= (-11)); g_27.f8 = safe_sub_func_uint32_t_u_u(g_27.f8, 9))
    {
        struct S0 *l_46 = &g_27;
        int32_t l_2567 = 5;
        struct S0 l_2635 = {146,1898,-222,140,56,-0,-298,38,0x28};
        int32_t l_2699[5] = {0x4100C087,0x4100C087,0x4100C087,0x4100C087,0x4100C087};
        int32_t ***l_2715 = &g_297;
        int32_t *l_2725 = (void*)0;
        struct S0 ***l_2735 = (void*)0;
        int i;
    }
                                        while (!(l_2566) )
{
{
                    int32_t **l_2560[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2560[i] = &g_944[3][3][1];
for (g_210.f8 = 0; (g_210.f8 <= (-11)); g_210.f8 = safe_sub_func_uint32_t_u_u(g_210.f8, 9))
    {
        struct S0 *l_46 = &g_210;
        int32_t l_2567 = 5;
        struct S0 l_2635 = {146,1898,-222,140,56,-0,-298,38,0x28};
        int32_t l_2699[5] = {0x4100C087,0x4100C087,0x4100C087,0x4100C087,0x4100C087};
        int32_t ***l_2715 = &g_297;
        int32_t *l_2725 = (void*)0;
        struct S0 ***l_2735 = (void*)0;
        int i;
    };
            g_148 = &i;
                    ((g_148 == &i) ? (void) (0) : __assert_fail ("g_148 == &i", "t.c", 580, __PRETTY_FUNCTION__));
                }
}
            return p_13;
}
static int32_t * func_19(int32_t * p_20)
{
    int32_t *l_26 = &g_11[0];
    struct S0 *l_28 = &g_27;
    for (g_21 = (-7); (g_21 != (-23)); g_21--)
    {
        int32_t *l_25 = &g_21;
        int32_t **l_24[1][5] = {{&l_25,&l_25,&l_25,&l_25,&l_25}};
        int i, j;
        l_26 = &g_11[0];
    }
                                   int16_t B2b2beg_4 = (-((g_21 & g_4)));
int32_t B2b2bfg_21 = (~(((~((B2b2beg_4 & g_4))) + g_21)));
if(((g_4<=-3908) && (B2b2beg_4 > g_21))){
B2b2beg_4 = g_4;
B2b2bfg_21 = g_21;
g_4 = (~(((g_4 | (g_21 ^ B2b2bfg_21)) / (-((-(B2b2beg_4)))))));
g_21 = (~((((g_21 || B2b2beg_4) ^ (-(B2b2bfg_21))) | (~(g_4)))));
if(((B2b2bfg_21>=-23) && (B2b2bfg_21<-23))){
printf("g_4=%lld\n", (long long)g_4);
g_4 = (~((((-((-(B2b2bfg_21)))) || ((~(g_4)) % B2b2beg_4)) ^ g_21)));
g_21 = (-(((-(g_4)) || ((B2b2bfg_21 / (~(B2b2beg_4))) / g_21))));
B2b2beg_4 = (~(((B2b2bfg_21 + (g_4 | g_21)) / B2b2beg_4)));
}
if((g_21<-24)){
printf("g_21=%lld\n", (long long)g_21);
for (g_2803 = 0; (g_2803 > (-15)); g_2803 = safe_sub_func_int32_t_s_s(g_2803, 1))
        {
            uint16_t l_2954 = 0xBB7C;
            struct S0 **l_2955 = (void*)0;
            (*(&g_80)) = 0x64EAFE29;
            for (g_2805 = 0; (g_2805 <= 3); g_2805 += 1)
            {
                struct S0 ***l_2957 = &g_2531[1][1];
                int16_t l_2958 = 0x8258;
                int i, j, k;
            }
        };
    g_2318 += 1;
{
                    (**g_465) = (*(&g_27));
                }
    B2b2beg_4 = (-(((~((~(B2b2beg_4)))) % ((~(g_4)) % (B2b2bfg_21 & g_21)))));
B2b2bfg_21 = (-(((~((-((~((~((g_21 >> B2b2bfg_21))))))))) | (B2b2beg_4 | g_4))));
g_21 = (~(((B2b2beg_4 % (-((~(B2b2bfg_21))))) / (g_4 / g_21))));
}
}
g_4 = B2b2beg_4;
g_21 = B2b2bfg_21;
    (*l_28) = g_27;
                                        while ((g_4>-3908) )
{
{
        struct S0 l_989 = {907,8858,-498,755,59,1,-1185,276,0};
{
                l_26 = &g_11[0];
            }
                    (*(&g_210)) = l_989;
    }
}
    (*l_26) = func_5((safe_mul_func_uint16_t_u_u(0U, g_27.f7)), p_20, g_27.f5);
    return l_26;
}
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_11[i], "g_11[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_27.f0, "g_27.f0", print_hash_value);
    transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
    transparent_crc(g_27.f2, "g_27.f2", print_hash_value);
    transparent_crc(g_27.f3, "g_27.f3", print_hash_value);
    transparent_crc(g_27.f4, "g_27.f4", print_hash_value);
    transparent_crc(g_27.f5, "g_27.f5", print_hash_value);
    transparent_crc(g_27.f6, "g_27.f6", print_hash_value);
    transparent_crc(g_27.f7, "g_27.f7", print_hash_value);
    transparent_crc(g_27.f8, "g_27.f8", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_33[i], "g_33[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_210.f0, "g_210.f0", print_hash_value);
    transparent_crc(g_210.f1, "g_210.f1", print_hash_value);
    transparent_crc(g_210.f2, "g_210.f2", print_hash_value);
    transparent_crc(g_210.f3, "g_210.f3", print_hash_value);
    transparent_crc(g_210.f4, "g_210.f4", print_hash_value);
    transparent_crc(g_210.f5, "g_210.f5", print_hash_value);
    transparent_crc(g_210.f6, "g_210.f6", print_hash_value);
    transparent_crc(g_210.f7, "g_210.f7", print_hash_value);
    transparent_crc(g_210.f8, "g_210.f8", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_784[i], "g_784[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1031[i], "g_1031[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_1094, "g_1094", print_hash_value);
    transparent_crc(g_1240, "g_1240", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1271[i][j], "g_1271[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    transparent_crc(g_1484, "g_1484", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2054[i][j][k], "g_2054[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_2318, "g_2318", print_hash_value);
    transparent_crc(g_2351, "g_2351", print_hash_value);
    transparent_crc(g_2619, "g_2619", print_hash_value);
    transparent_crc(g_2647, "g_2647", print_hash_value);
    transparent_crc(g_2803, "g_2803", print_hash_value);
    transparent_crc(g_2805, "g_2805", print_hash_value);
    transparent_crc(g_2956, "g_2956", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}