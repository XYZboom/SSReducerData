typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
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
(safe_mod_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
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
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
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
(safe_mod_func_uint32_t_u_u)(uint32_t ui1, uint32_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
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
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>0) & 0xff);
 crc32_byte ((val>>8) & 0xff);
 crc32_byte ((val>>16) & 0xff);
 crc32_byte ((val>>24) & 0xff);
 crc32_byte ((val>>32) & 0xff);
 crc32_byte ((val>>40) & 0xff);
 crc32_byte ((val>>48) & 0xff);
 crc32_byte ((val>>56) & 0xff);
}
static void
transparent_crc (uint64_t val, char* vname, int flag)
{
 crc32_8bytes(val);
 if (flag) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}
struct S0 {
   int32_t f0;
   signed f1 : 22;
};
struct S1 {
   unsigned f0 : 16;
   signed f1 : 9;
   signed f2 : 28;
   signed f3 : 13;
   unsigned f4 : 15;
   unsigned f5 : 17;
};
static struct S1 g_2 = {34,-5,2681,8,80,143};
static int32_t g_40[3] = {0xD571E957L, 0xD571E957L, 0xD571E957L};
static uint32_t g_63 = 18446744073709551615UL;
static uint32_t g_69 = 0UL;
static int32_t g_75 = 9L;
static uint16_t g_112 = 0x21B9L;
static struct S0 g_130 = {-1L,-557};
static uint16_t g_163 = 1UL;
static uint32_t g_174 = 18446744073709551610UL;
static int32_t g_211 = 0L;
static struct S0 g_217[1] = {{0x4CA2719FL,-474}};
static int32_t g_224 = (-10L);
static int32_t g_237 = 0xA85C4E4FL;
static uint8_t g_264 = 0x9EL;
static struct S1 g_274 = {208,13,-3263,-71,45,346};
static int32_t g_310 = 6L;
static uint16_t g_415 = 0xC333L;
static uint8_t g_613 = 253UL;
static int32_t g_647 = (-1L);
static struct S1 g_656 = {57,14,-15572,48,3,68};
static struct S1 g_658 = {251,19,4643,-9,101,27};
static int32_t g_688 = 1L;
static uint8_t g_714 = 0UL;
static uint32_t g_740 = 0UL;
static int32_t g_759 = 0x96B2935EL;
static int32_t g_875 = 0xC04C2CACL;
static uint32_t g_900 = 0xBE201F5BL;
static int16_t g_959 = 0xA11EL;
static int16_t g_969 = 0xB7E4L;
static uint32_t g_971 = 0x40F4A1F2L;
static uint32_t g_1039 = 0x32AF807FL;
static uint16_t g_1056 = 65535UL;
static int32_t g_1058 = (-7L);
static uint16_t g_1106 = 0xEC2AL;
static uint8_t g_1135 = 250UL;
static int32_t g_1177[4][5][2] = {{{0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}}, {{0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}}, {{0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}}, {{0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}, {0x697C2A1DL, 9L}}};
static uint8_t g_1178 = 0x76L;
static int8_t g_1184 = 0x39L;
static int16_t g_1204 = 0x8491L;
static int32_t g_1568 = 0x092DBBDEL;
static struct S0 g_1895 = {3L,-1076};
static struct S0 g_1896 = {0x1C87E74FL,-816};
static uint8_t g_1897 = 3UL;
static int16_t g_2098 = 0x4C2BL;
static uint32_t g_2214 = 0UL;
static int32_t g_2317 = 0xC2407E48L;
static int32_t g_2569 = 1L;
static int8_t g_2667 = 0xB3L;
static uint32_t g_3242[5] = {0xBD33D456L, 0xBD33D456L, 0xBD33D456L, 0xBD33D456L, 0xBD33D456L};
static int32_t g_3324 = 0x90578E4BL;
static uint8_t g_3484 = 0xFEL;
static uint8_t g_3662 = 249UL;
static uint32_t g_3735[5][4] = {{0x463FF5CBL, 0xAE64BA3BL, 0x463FF5CBL, 0xAE64BA3BL}, {0x463FF5CBL, 0xAE64BA3BL, 0x463FF5CBL, 0xAE64BA3BL}, {0x463FF5CBL, 0xAE64BA3BL, 0x463FF5CBL, 0xAE64BA3BL}, {0x463FF5CBL, 0xAE64BA3BL, 0x463FF5CBL, 0xAE64BA3BL}, {0x463FF5CBL, 0xAE64BA3BL, 0x463FF5CBL, 0xAE64BA3BL}};
static int32_t func_3(uint16_t p_4, int32_t p_5, uint32_t p_6, uint32_t p_7);
static uint16_t func_8(int32_t p_9, uint32_t p_10);
static uint8_t func_14(uint16_t p_15, int8_t p_16, uint8_t p_17, uint32_t p_18, uint32_t p_19);
static int16_t func_25(int32_t p_26);
static uint8_t func_29(uint16_t p_30, int32_t p_31);
static uint16_t func_33(uint32_t p_34, uint32_t p_35, int8_t p_36, uint16_t p_37);
static int8_t func_45(int32_t p_46, int32_t p_47, uint8_t p_48, int8_t p_49, uint8_t p_50);
static uint8_t func_52(int16_t p_53, uint32_t p_54, int16_t p_55, int8_t p_56, int8_t p_57);
static uint16_t func_64(uint8_t p_65, uint16_t p_66, int32_t p_67);
static int8_t func_1(void)
{
    int32_t l_22[10][10][2] = {{{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}, {{0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}, {0x5D64F689L, (-1L)}}};
    int32_t l_957 = 0L;
    int32_t l_958 = 7L;
    uint16_t l_2367 = 0xCA60L;
    int32_t l_2368 = (-1L);
    int32_t l_3000 = 0x9F95F825L;
    int32_t l_3110 = 0xE827D082L;
    int32_t l_3111 = (-1L);
    int32_t l_3850 = 0xEEDF68D4L;
    int i, j, k;
    g_2 = g_2;
    l_3850 = (0x3D783989L | func_3((l_3110 = func_8((l_3000 = (safe_add_func_uint16_t_u_u(((safe_unary_minus_func_int16_t_s(((func_14((g_2.f0 & ((safe_lshift_func_uint8_t_u_s(g_2.f4, l_22[8][1][0])) < (((l_2368 = (safe_mod_func_int16_t_s_s((func_25((safe_rshift_func_int8_t_s_u(g_2.f5, func_29(l_22[4][2][0], (g_959 = (g_2.f1 < (safe_unary_minus_func_uint8_t_u((l_958 = (l_957 = (func_33(l_22[8][8][0], (((g_40[1] = (safe_lshift_func_uint8_t_u_s(l_22[5][1][1], l_22[7][7][1]))) <= g_2.f3) >= 65531UL), g_2.f2, g_2.f2) & l_22[5][7][0]))))))))))) ^ l_2367), l_22[9][4][0]))) <= (-1L)) & l_2367))), g_1177[3][2][1], l_22[2][3][0], g_2.f4, l_22[9][5][1]) || 0xA1L) != g_2569))) || g_2667), g_1177[2][3][1]))), g_2569)), l_22[8][1][0], l_2367, l_3111));
}
static int32_t func_3(uint16_t p_4, int32_t p_5, uint32_t p_6, uint32_t p_7)
{
    int8_t l_3150 = (-1L);
    int32_t l_3192 = (-1L);
    int16_t l_3215[1];
    int32_t l_3303 = 0x667F0CE7L;
    int16_t l_3361 = 9L;
    struct S1 l_3395 = {116,5,5933,-53,166,159};
    int32_t l_3465[8][7] = {{(-1L), (-1L), 0x107AA667L, (-1L), (-1L), (-1L), 0x107AA667L}, {(-1L), (-1L), 0x107AA667L, (-1L), (-1L), (-1L), 0x107AA667L}, {(-1L), (-1L), 0x107AA667L, (-1L), (-1L), (-1L), 0x107AA667L}, {(-1L), (-1L), 0x107AA667L, (-1L), (-1L), (-1L), 0x107AA667L}, {(-1L), (-1L), 0x107AA667L, (-1L), (-1L), (-1L), 0x107AA667L}, {(-1L), (-1L), 0x107AA667L, (-1L), (-1L), (-1L), 0x107AA667L}, {(-1L), (-1L), 0x107AA667L, (-1L), (-1L), (-1L), 0x107AA667L}, {(-1L), (-1L), 0x107AA667L, (-1L), (-1L), (-1L), 0x107AA667L}};
    int16_t l_3466[4];
    int16_t l_3663 = 0x7CDEL;
    uint8_t l_3714 = 0x78L;
    int16_t l_3763 = 0L;
    for (p_4 = 0; (p_4 < 42); p_4 = safe_add_func_uint32_t_u_u(p_4, 3))
    {
        uint8_t l_3121[10] = {4UL, 0x3EL, 255UL, 255UL, 0x3EL, 4UL, 0x3EL, 255UL, 255UL, 0x3EL};
        int32_t l_3128[3];
        uint32_t l_3149 = 1UL;
        int32_t l_3156[9][10][2] = {{{(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}}, {{(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}}, {{(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}}, {{(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}}, {{(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}}, {{(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}}, {{(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}}, {{(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}}, {{(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}, {(-4L), 0x2EF9F7F2L}}};
        int32_t l_3158 = 2L;
        int32_t l_3159 = 0L;
            {
                for (g_2667 = 0; (g_2667 < 17); ++g_2667)
                {
                    return g_658.f3;
                }
            }
    }
}
static uint16_t func_8(int32_t p_9, uint32_t p_10)
{
                                       if (!((g_69>0U)))
                    return g_264;
}
static uint8_t func_14(uint16_t p_15, int8_t p_16, uint8_t p_17, uint32_t p_18, uint32_t p_19)
{
    uint32_t l_2369 = 7UL;
    int32_t l_2370 = 0x7E58DDD0L;
    struct S0 l_2373 = {0xE06C78CEL,-371};
    int8_t l_2395 = (-2L);
    uint32_t l_2429[8];
    uint32_t l_2432[1];
    uint32_t l_2497[6];
    struct S1 l_2501 = {57,-8,-368,45,126,148};
    int32_t l_2566 = 0xC7039E54L;
    uint8_t l_2749 = 0x4BL;
    uint32_t l_2760 = 0xA126D742L;
    uint16_t l_2765 = 65535UL;
    uint32_t l_2793 = 0UL;
    int16_t l_2832 = (-2L);
    int16_t l_2946[4][8] = {{(-1L), 1L, 0x97B0L, (-8L), 0x97B0L, 1L, (-1L), 0L}, {(-1L), 1L, 0x97B0L, (-8L), 0x97B0L, 1L, (-1L), 0L}, {(-1L), 1L, 0x97B0L, (-8L), 0x97B0L, 1L, (-1L), 0L}, {(-1L), 1L, 0x97B0L, (-8L), 0x97B0L, 1L, (-1L), 0L}};
    uint32_t l_2958 = 0x2317CB77L;
    int i, j, k;
    for (i = 0; i < 8; i++)
        { while (((g_656.f1>14) || (!g_1895.f0)) )
{
{
        struct S0 l_2374 = {5L,1341};
        int32_t l_2443 = (-1L);
        l_2374 = g_1895;
        for (g_971 = 0; (g_971 == 32); ++g_971)
        {
            uint32_t l_2381 = 0x65E011A9L;
            int8_t l_2400 = (-5L);
            int32_t l_2401[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_2401[i][j] = 0x96776460L;
            }
            g_274.f3 = ((g_112 = (((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((l_2374.f0 != ((l_2381 < (l_2749 = g_274.f5)) == (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((g_112 & (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((0x69796EA6L <= ((safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((l_2374.f0 | g_971), 12)) ^ (0x40F3FEA6L | g_1184)), g_274.f0)) < 0x3BL), p_16)) >= 1L)))), 3))) && g_274.f3) != g_163), j)), 2)))) ^ 1UL), g_1177[1][2][0])), l_2381)) <= g_1895.f0) == (-1L))) | g_1895.f1);
            g_2569 = ((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(l_2400, ((g_1039 < l_2374.f1) & (l_2401[0][0] = 1L)))), ((l_2374.f1 > (safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s((+(safe_rshift_func_uint16_t_u_u(0x1327L, (g_163 = g_112)))), (((((g_1135 < (g_959 = 0x46F0L)) != 65535UL) | g_274.f2) != 0xA1A1L) <= 4294967288UL))), 0x7D85L))) && g_274.f5))) == p_16);
            for (g_971 = (-23); (g_971 >= 60); ++g_971)
            {
                int16_t l_2428 = 0L;
                int32_t l_2448 = 0x88594FAAL;
                for (g_1184 = 0; (g_1184 > 5); g_1184++)
                {
                    g_274 = (g_274 = g_274);
                }
                for (g_1039 = 0; (g_1039 >= 15); ++g_1039)
                {
                    uint8_t l_2417[8][2];
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_2417[i][j] = 0UL;
                    }
                    l_2374.f1 = (safe_sub_func_int8_t_s_s(l_2417[5][1], ((safe_mod_func_int32_t_s_s((-1L), (safe_lshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((l_2381 == 0x29L) && ((l_2566 = (safe_mod_func_int32_t_s_s(((l_2381 < ((g_2317 == ((((l_2749 < (3UL || (g_971 >= (-1L)))) <= l_2374.f1) || 1L) || l_2428)) == g_274.f1)) >= g_1039), p_16))) != g_40[1])), 3)), 3L)) < l_2429[5]), l_2374.f1)))) && g_1177[0][2][0])));
                }
                l_2448 = (safe_mod_func_uint16_t_u_u(l_2429[5], (((g_112 = ((l_2374.f0 && (((l_2432[0] | (safe_mod_func_uint32_t_u_u((((0x3F9B71A3L && (((((((((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(9L, 0)), 2)), (((l_2443 = (safe_rshift_func_uint16_t_u_u(0x40DFL, 7))) >= (((l_2374.f1 == l_2432[0]) <= (((((safe_mod_func_int8_t_s_s((g_1039 ^ 8L), l_2381)) != g_2317) ^ 0L) == g_274.f5) >= g_1039)) <= g_274.f4)) | 0xA6L))) == g_1895.f1) != l_2428) <= 4L) > 0xBDL) <= g_163) > 2L) & l_2374.f0) == g_971)) && l_2400) <= l_2374.f0), l_2428))) | 0x51EAL) <= g_274.f4)) < g_1177[2][3][1])) && l_2374.f0) | 0x09838561L)));
            }
        }
    }
}
                    if ((g_1568>153992158) )
{
{
                        g_658.f3 = (g_1568 = 8L);
                        g_658.f2 = g_1184;
                        g_1568 = 0x264ADA42L;
                        l_2501 = g_658;
                    }
}
                    l_2429[i] = 4294967295UL;}
    for (i = 0; i < 1; i++)
        l_2432[i] = 4294967287UL;
                                       if (l_2373.f1)
                    for (i = 0; i < 6; i++)
        { if (l_2501.f0)
                    l_2497[i] = 1UL;}
    l_2370 = (l_2369 = 0xE8A9B9C2L);
                                       if (((g_658.f0<251) || g_1895.f0))
                    for (g_310 = 25; (g_310 > (-26)); --g_310)
    {
        struct S0 l_2374 = {5L,1341};
        int32_t l_2443 = (-1L);
        l_2374 = l_2373;
        for (p_19 = 0; (p_19 == 32); ++p_19)
        {
            uint32_t l_2381 = 0x65E011A9L;
            int8_t l_2400 = (-5L);
            int32_t l_2401[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_2401[i][j] = 0x96776460L;
            }
            g_274.f3 = ((g_1056 = (((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((l_2374.f0 != ((l_2381 < (g_1897 = g_656.f5)) == (safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((g_1106 & (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((0x69796EA6L <= ((safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((l_2374.f0 | p_19), 12)) ^ (0x40F3FEA6L | l_2395)), g_658.f0)) < 0x3BL), p_16)) >= 1L)))), 3))) && g_658.f3) != p_15), g_688)), 2)))) ^ 1UL), g_1177[1][2][0])), l_2381)) <= l_2373.f0) == (-1L))) | g_1895.f1);
{
                        struct S1 l_3596 = {21,1,11767,18,12,308};
                        l_2501 = g_658;
                        g_658 = (g_274 = (l_3596 = g_658));
                    }
                    l_2370 = ((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(l_2400, ((p_18 < l_2374.f1) & (l_2401[0][0] = 1L)))), ((l_2374.f1 > (safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s((+(safe_rshift_func_uint16_t_u_u(0x1327L, (p_15 = g_1106)))), (((((p_17 < (g_1204 = 0x46F0L)) != 65535UL) | g_2.f2) != 0xA1A1L) <= 4294967288UL))), 0x7D85L))) && g_2.f5))) == p_16);
            for (g_971 = (-23); (g_971 >= 60); ++g_971)
            {
                int16_t l_2428 = 0L;
                int32_t l_2448 = 0x88594FAAL;
                for (g_1184 = 0; (g_1184 > 5); g_1184++)
                {
                    g_274 = (g_2 = g_2);
                }
                for (g_174 = 0; (g_174 >= 15); ++g_174)
                {
                    uint8_t l_2417[8][2];
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_2417[i][j] = 0UL;
                    }
                    l_2374.f1 = (safe_sub_func_int8_t_s_s(l_2417[5][1], ((safe_mod_func_int32_t_s_s((-1L), (safe_lshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((l_2381 == 0x29L) && ((g_759 = (safe_mod_func_int32_t_s_s(((l_2381 < ((g_647 == ((((g_1135 < (3UL || (g_971 >= (-1L)))) <= l_2374.f1) || 1L) || l_2428)) == g_2.f1)) >= p_18), p_16))) != g_40[1])), 3)), 3L)) < l_2429[5]), l_2374.f1)))) && g_1177[0][2][0])));
                }
                l_2448 = (safe_mod_func_uint16_t_u_u(l_2429[5], (((g_112 = ((l_2374.f0 && (((l_2432[0] | (safe_mod_func_uint32_t_u_u((((0x3F9B71A3L && (((((((((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(9L, 0)), 2)), (((l_2443 = (safe_rshift_func_uint16_t_u_u(0x40DFL, 7))) >= (((l_2374.f1 == l_2432[0]) <= (((((safe_mod_func_int8_t_s_s((p_18 ^ 8L), l_2381)) != g_75) ^ 0L) == g_274.f5) >= p_18)) <= g_658.f4)) | 0xA6L))) == g_1896.f1) != l_2428) <= 4L) > 0xBDL) <= p_15) > 2L) & l_2374.f0) == p_19)) && l_2400) <= l_2374.f0), l_2428))) | 0x51EAL) <= g_658.f4)) < g_1177[2][3][1])) && l_2374.f0) | 0x09838561L)));
            }
        }
    }
    for (g_900 = 0; (g_900 < 45); ++g_900)
    {
        int32_t l_2463 = 0x5133D18EL;
        struct S1 l_2476 = {214,10,10833,-7,32,40};
        uint32_t l_2494 = 4294967295UL;
        int8_t l_2498 = 0xCDL;
        uint16_t l_2499 = 65533UL;
        int8_t l_2568 = 1L;
        struct S0 l_2601 = {0xA95DA4A4L,-1799};
        struct S0 l_2620 = {-8L,666};
        uint32_t l_2794 = 0x9E89757CL;
        int32_t l_2833 = 3L;
        int8_t l_2930 = (-3L);
                    for (p_16 = 0; (p_16 >= 0); p_16 -= 1)
        {
            int8_t l_2474 = 0x67L;
            int32_t l_2475 = 0x81E3C5D9L;
            struct S1 l_2570 = {6,8,3950,-70,80,219};
            uint8_t l_2595 = 0x51L;
            struct S0 l_2618 = {0x368FB9A0L,1042};
            uint8_t l_2664 = 0x30L;
            for (g_174 = 0; (g_174 <= 1); g_174 += 1)
                {
                    int32_t l_2642 = 0xAC553B10L;
                    struct S0 l_2643 = {0xC5B0517CL,25};
                    for (g_1204 = 0; (g_1204 <= 0); g_1204 += 1)
                    {
                        struct S0 l_2619 = {1L,826};
                        int i;
                        l_2620 = (l_2619 = (l_2618 = (g_217[p_16] = g_1896)));
                        l_2570 = l_2476;
                    }
                    for (l_2499 = 0; (l_2499 <= 1); l_2499 += 1)
                    {
                        int32_t l_2627 = 0xA02FAE0FL;
                        int i;
                        g_40[g_174] = ((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((l_2475 = (((safe_lshift_func_int16_t_s_u(((l_2627 = l_2432[p_16]) > (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((((((0x52L || 0xC5L) <= (safe_lshift_func_uint16_t_u_u((((l_2497[(l_2499 + 2)] >= (g_1184 = 0x58L)) || ((safe_mod_func_int8_t_s_s((l_2432[p_16] && ((((((p_17 | (l_2570.f1 = ((safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((g_714 = (l_2370 = (safe_lshift_func_int8_t_s_u((l_2618.f1 == 0x95E8L), 7)))) | p_19), g_40[g_174])), 0x5655E761L)) >= 0x26L))) || g_658.f0) > l_2642) | 0UL) && g_415) >= l_2432[p_16])), 0xB3L)) && l_2463)) < 0L), p_19))) != g_2.f2) && p_18) >= (-7L)), p_15)), l_2476.f2))), 1)) & p_16) && l_2620.f1)) ^ 0UL), g_1177[2][3][1])), 0xB1L)) || 0x33D5B1B9L);
                        if (g_40[2])
                            continue;
                        g_217[p_16] = l_2643;
                        return p_18;
                    }
                    for (g_112 = 0; (g_112 <= 0); g_112 += 1)
                    {
                        int32_t l_2644 = 2L;
                        int32_t l_2656 = 0xA6B659ACL;
                        int i, j, k;
                        g_40[g_174] = ((((((l_2644 = l_2432[p_16]) >= g_40[(g_174 + 1)]) == (g_1896.f1 = (-8L))) >= (g_647 = (+((safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((0L | ((g_1177[(g_112 + 3)][(g_112 + 2)][g_112] >= l_2497[(g_174 + 4)]) == g_40[g_174])), (g_969 = (safe_add_func_int8_t_s_s(((((safe_lshift_func_int8_t_s_u(((l_2656 = (p_18 = (((safe_add_func_uint8_t_u_u(p_16, (p_16 > l_2476.f5))) & 4294967294UL) <= 0xC6L))) & p_17), 0)) || 65535UL) < p_16) | 0x28D3L), 255UL))))), 0)) >= p_15)))) == p_17) ^ 3UL);
                        l_2643 = (g_217[p_16] = l_2620);
                        if (g_274.f5)
                            continue;
                    }
                }
            for (p_17 = 0; (p_17 <= 1); p_17 += 1)
            {
                int32_t l_2691 = (-1L);
                for (g_1895.f0 = 0; (g_1895.f0 >= 0); g_1895.f0 -= 1)
                {
                    int32_t l_2689 = 0xC6940A15L;
                    struct S1 l_2690 = {139,4,-11389,19,59,277};
                    int i;
                    l_2501.f1 = (l_2432[g_1895.f0] <= (l_2689 = l_2432[g_1895.f0]));
                    l_2501 = l_2690;
                    return l_2691;
                }
            }
        }
    }
}
static int16_t func_25(int32_t p_26)
{
    uint32_t l_1786 = 18446744073709551610UL;
    int32_t l_1806 = (-5L);
    uint8_t l_1814 = 1UL;
    int32_t l_1815[2];
    int32_t l_1816 = (-3L);
    int32_t l_1817 = 0xED54E622L;
    struct S0 l_1894 = {1L,-315};
    struct S1 l_1927 = {136,-3,-16072,12,178,302};
    int8_t l_1930 = 0x14L;
    struct S1 l_1966[9][9][3]                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ;
    int8_t l_2016[6][9] = {{0xC6L, (-6L), 0x4FL, (-6L), 0xC6L, (-1L), 0xC6L, (-6L), 0x4FL}, {0xC6L, (-6L), 0x4FL, (-6L), 0xC6L, (-1L), 0xC6L, (-6L), 0x4FL}, {0xC6L, (-6L), 0x4FL, (-6L), 0xC6L, (-1L), 0xC6L, (-6L), 0x4FL}, {0xC6L, (-6L), 0x4FL, (-6L), 0xC6L, (-1L), 0xC6L, (-6L), 0x4FL}, {0xC6L, (-6L), 0x4FL, (-6L), 0xC6L, (-1L), 0xC6L, (-6L), 0x4FL}, {0xC6L, (-6L), 0x4FL, (-6L), 0xC6L, (-1L), 0xC6L, (-6L), 0x4FL}};
    uint32_t l_2081 = 18446744073709551614UL;
    int16_t l_2091 = (-1L);
    int32_t l_2199 = 0x18C64565L;
    uint32_t l_2212 = 4294967295UL;
    uint32_t l_2219 = 0x8A81A5DEL;
    uint16_t l_2262[8][5][2] = {{{0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}}, {{0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}}, {{0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}}, {{0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}}, {{0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}}, {{0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}}, {{0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}}, {{0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}, {0x9CBCL, 0x93C9L}}};
    uint32_t l_2338 = 4294967295UL;
    int i, j, k;
                    for (i = 0; i < 2; i++)
        { if ((g_1135 < g_274.f1) )
{
k -= 1;
}
                    l_1815[i] = 0xD7FE9604L;}
    {
        int8_t l_2008[4];
        int8_t l_2041[2][7] = {{(-10L), (-10L), 0xB3L, (-10L), (-10L), 0xB3L, (-10L)}, {(-10L), (-10L), 0xB3L, (-10L), (-10L), 0xB3L, (-10L)}};
        int32_t l_2043 = 0x95BE3990L;
        int32_t l_2143 = 0xD0E5BDAFL;
        struct S0 l_2181[4] = {{-2L,-1738}, {-2L,-1738}, {-2L,-1738}, {-2L,-1738}};
        int32_t l_2252 = 0x018285E7L;
        int32_t l_2297 = (-1L);
        int16_t l_2300 = 0x3230L;
        uint32_t l_2314 = 0xF5DB9CA0L;
        uint32_t l_2365 = 0xEF3406B2L;
                    for (i = 0; i < 4; i++)
            l_2008[i] = (-10L);
            int32_t l_2003 = 0x6FDBD163L;
            int32_t l_2011 = 0xDDDF1ED5L;
            int16_t l_2021 = (-5L);
            int16_t l_2179[3][9] = {{(-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L)}, {(-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L), 1L, (-1L)}};
                int32_t l_2054 = 9L;
                int32_t l_2055 = (-1L);
                struct S0 l_2057 = {0xA871BB6AL,369};
                int32_t l_2090[10][10][2] = {{{(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}}, {{(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}}, {{(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}}, {{(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}}, {{(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}}, {{(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}}, {{(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}}, {{(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}}, {{(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}}, {{(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}, {(-1L), 0xED845926L}}};
                uint16_t l_2144 = 65532UL;
                {
                    int32_t l_2157 = 6L;
                    struct S0 l_2166 = {0x1EE1138AL,-1097};
                    g_656.f3 = ((0x95FDL || l_2021) <= (((((((((g_2098 = l_2157) >= ((((l_2143 = ((g_2.f2 = l_2003) <= (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((g_613 >= (safe_add_func_int16_t_s_s(l_1817, (0xA0L < (safe_add_func_uint16_t_u_u(((l_2003 | 0xA63F201AL) ^ 0xCFF3DD30L), l_2157)))))), g_1135)) == g_130.f0), p_26)))) | 65535UL) & l_2157) | p_26)) < l_1814) >= g_264) > g_714) > (-1L)) < p_26) == g_274.f3) > 1L));
                    g_1896 = (l_1894 = l_2166);
                }
    }
                                       if (((g_264 && g_959) && ((g_959<=1) && (g_658.f1 > g_2.f2))))
                    return l_1815[1];
}
static uint8_t func_29(uint16_t p_30, int32_t p_31)
{
    int8_t l_962 = 0xABL;
    g_310 = (safe_rshift_func_int16_t_s_u((l_962 & 255UL), 11));
    return g_656.f1;
}
static uint16_t func_33(uint32_t p_34, uint32_t p_35, int8_t p_36, uint16_t p_37)
    {
        uint8_t l_648 = 1UL;
        return l_648;
    }
static int8_t func_45(int32_t p_46, int32_t p_47, uint8_t p_48, int8_t p_49, uint8_t p_50)
{
    uint32_t l_68 = 0x43CAE23FL;
    int32_t l_85 = 0x03EC6B4EL;
    int32_t l_86 = (-8L);
    uint32_t l_87 = 0UL;
    int32_t l_88 = 0x5644FE3DL;
    int32_t l_89 = 0xFE20FE05L;
    uint8_t l_110 = 0xE6L;
    int32_t l_111 = 0xD894E178L;
    int32_t l_113 = 0x59AB7399L;
{
                    l_113 = g_174;
                }
                    g_40[1] = func_52((g_40[2] != func_64(((((p_46 >= ((g_69 = l_68) <= ((l_89 = ((safe_rshift_func_int16_t_s_u(((l_88 = (0x9AL == ((~((safe_rshift_func_uint16_t_u_s((l_87 = (0xAB19L | ((g_75 = 0x249DL) ^ ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((l_86 = (+((l_85 = (safe_sub_func_int8_t_s_s((l_68 & (1L <= g_40[1])), g_2.f4))) && g_2.f1))), l_68)), p_50)) == 0x6341L)))), l_68)) | l_68)) ^ l_68))) != l_68), g_2.f5)) > g_2.f1)) || p_48))) && l_86) || l_87) >= 0xEEL), l_68, g_2.f4)), l_68, p_50, g_40[1], g_2.f1);
    l_89 = (p_49 & (g_40[1] = (g_75 ^ (safe_lshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u(p_50, (p_48 = p_46))), 2)))));
    l_113 = ((safe_lshift_func_uint16_t_u_u((l_85 = l_85), g_2.f4)) ^ (p_48 >= (g_112 = ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(((l_111 = (4294967287UL & (((l_86 = (safe_mod_func_int32_t_s_s(p_47, (safe_sub_func_int32_t_s_s(g_2.f3, g_2.f5))))) || (l_89 = ((safe_add_func_uint8_t_u_u(((l_88 = g_2.f2) & (g_75 <= g_40[1])), p_48)) > p_49))) & l_110))) < p_50))), 0)), p_48)) && g_2.f5))));
    return p_47;
}
static uint8_t func_52(int16_t p_53, uint32_t p_54, int16_t p_55, int8_t p_56, int8_t p_57)
{
    return p_56;
}
static uint16_t func_64(uint8_t p_65, uint16_t p_66, int32_t p_67)
{
    uint32_t l_92 = 4294967291UL;
g_1204 += 1;
        g_2.f2 = (p_67 = g_69);
{
                    g_3324 = g_900;
                }
for (g_75 = 0; g_75 < 3; g_75++)
            g_40[g_75] = 0x3A7C282BL;
        for (g_63 = (-8); (g_63 < 2); g_63 = safe_add_func_uint16_t_u_u(g_63, 5))
    {
if (g_688)
                            break;
        return g_69;
    }
    return l_92;
}
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    crc32_gentab();
    func_1();
    transparent_crc(g_2.f0, "g_2.f0", print_hash_value);
    transparent_crc(g_2.f1, "g_2.f1", print_hash_value);
    transparent_crc(g_2.f2, "g_2.f2", print_hash_value);
    transparent_crc(g_2.f3, "g_2.f3", print_hash_value);
    transparent_crc(g_2.f4, "g_2.f4", print_hash_value);
    transparent_crc(g_2.f5, "g_2.f5", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_40[i], "g_40[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_130.f0, "g_130.f0", print_hash_value);
    transparent_crc(g_130.f1, "g_130.f1", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_217[i].f0, "g_217[i].f0", print_hash_value);
        transparent_crc(g_217[i].f1, "g_217[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_264, "g_264", print_hash_value);
    transparent_crc(g_274.f0, "g_274.f0", print_hash_value);
    transparent_crc(g_274.f1, "g_274.f1", print_hash_value);
    transparent_crc(g_274.f2, "g_274.f2", print_hash_value);
    transparent_crc(g_274.f3, "g_274.f3", print_hash_value);
    transparent_crc(g_274.f4, "g_274.f4", print_hash_value);
    transparent_crc(g_274.f5, "g_274.f5", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_656.f0, "g_656.f0", print_hash_value);
    transparent_crc(g_656.f1, "g_656.f1", print_hash_value);
    transparent_crc(g_656.f2, "g_656.f2", print_hash_value);
    transparent_crc(g_656.f3, "g_656.f3", print_hash_value);
    transparent_crc(g_656.f4, "g_656.f4", print_hash_value);
    transparent_crc(g_656.f5, "g_656.f5", print_hash_value);
    transparent_crc(g_658.f0, "g_658.f0", print_hash_value);
    transparent_crc(g_658.f1, "g_658.f1", print_hash_value);
    transparent_crc(g_658.f2, "g_658.f2", print_hash_value);
    transparent_crc(g_658.f3, "g_658.f3", print_hash_value);
    transparent_crc(g_658.f4, "g_658.f4", print_hash_value);
    transparent_crc(g_658.f5, "g_658.f5", print_hash_value);
    transparent_crc(g_688, "g_688", print_hash_value);
    transparent_crc(g_714, "g_714", print_hash_value);
    transparent_crc(g_740, "g_740", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_875, "g_875", print_hash_value);
    transparent_crc(g_900, "g_900", print_hash_value);
    transparent_crc(g_959, "g_959", print_hash_value);
    transparent_crc(g_969, "g_969", print_hash_value);
    transparent_crc(g_971, "g_971", print_hash_value);
    transparent_crc(g_1039, "g_1039", print_hash_value);
    transparent_crc(g_1056, "g_1056", print_hash_value);
    transparent_crc(g_1058, "g_1058", print_hash_value);
    transparent_crc(g_1106, "g_1106", print_hash_value);
    transparent_crc(g_1135, "g_1135", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1177[i][j][k], "g_1177[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_1178, "g_1178", print_hash_value);
    transparent_crc(g_1184, "g_1184", print_hash_value);
    transparent_crc(g_1204, "g_1204", print_hash_value);
    transparent_crc(g_1568, "g_1568", print_hash_value);
    transparent_crc(g_1895.f0, "g_1895.f0", print_hash_value);
    transparent_crc(g_1895.f1, "g_1895.f1", print_hash_value);
    transparent_crc(g_1896.f0, "g_1896.f0", print_hash_value);
    transparent_crc(g_1896.f1, "g_1896.f1", print_hash_value);
    transparent_crc(g_1897, "g_1897", print_hash_value);
    transparent_crc(g_2098, "g_2098", print_hash_value);
    transparent_crc(g_2214, "g_2214", print_hash_value);
    transparent_crc(g_2317, "g_2317", print_hash_value);
    transparent_crc(g_2569, "g_2569", print_hash_value);
    transparent_crc(g_2667, "g_2667", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_3242[i], "g_3242[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_3324, "g_3324", print_hash_value);
    transparent_crc(g_3484, "g_3484", print_hash_value);
    transparent_crc(g_3662, "g_3662", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_3735[i][j], "g_3735[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}