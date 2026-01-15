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
static volatile uint16_t g_13 = 65527UL;
static uint8_t g_21[3] = {0xA5L, 0xA5L, 0xA5L};
static uint32_t g_31 = 0x51978E60L;
static uint8_t g_66 = 0x31L;
static int16_t g_100 = 0x7EBAL;
static uint8_t g_104 = 0xCAL;
static int32_t g_115 = 0x167AC4CBL;
static uint16_t g_116 = 65528UL;
static uint16_t g_117 = 0UL;
static uint8_t g_175 = 1UL;
static int16_t g_221 = 0L;
static int32_t g_222[5][5] = {{1L, 0x6D986254L, 0xE6007DA6L, 0xE8731FA0L, 0x189EED15L}, {1L, 0x6D986254L, 0xE6007DA6L, 0xE8731FA0L, 0x189EED15L}, {1L, 0x6D986254L, 0xE6007DA6L, 0xE8731FA0L, 0x189EED15L}, {1L, 0x6D986254L, 0xE6007DA6L, 0xE8731FA0L, 0x189EED15L}, {1L, 0x6D986254L, 0xE6007DA6L, 0xE8731FA0L, 0x189EED15L}};
static int32_t g_269 = 0x3A494EFEL;
static uint32_t g_315 = 0x9CA97485L;
static uint8_t g_349 = 8UL;
static uint8_t g_351 = 0x4FL;
static uint32_t g_428 = 0x3AAD4235L;
static int32_t g_472 = (-3L);
static uint32_t g_654 = 0xAF7C65D6L;
static uint32_t g_662 = 4UL;
static uint8_t g_678 = 255UL;
static uint8_t g_763 = 247UL;
static int32_t g_810 = 1L;
static int32_t g_839 = 3L;
static int32_t g_847 = 0x4D16A0F4L;
static int16_t g_873 = 0x1E61L;
static uint32_t g_962[9][7] = {{0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}, {0UL, 0xB6F6E9DDL, 0x7632AEB2L, 0x7632AEB2L, 0xB6F6E9DDL, 0UL, 8UL}};
static int32_t g_1018[2][8][10] = {{{0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}}, {{0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}, {0x0A1E539EL, 0x5531D9A5L, 0x7F4CFEECL, 0xB31332C5L, 0xF9DCAFE2L, 6L, (-5L), 5L, 4L, 0x08CA5FADL}}};
static int32_t g_1087 = 0x19674FE7L;
static uint8_t g_1089[5] = {0x85L, 0x85L, 0x85L, 0x85L, 0x85L};
static int32_t g_1090 = 0x67CE7E3FL;
static uint32_t g_1100 = 0x77FCAF7DL;
static int8_t g_1105 = (-1L);
static uint32_t g_1231 = 4294967295UL;
static uint16_t g_1247 = 0x38A5L;
static int32_t g_1391 = 0L;
static uint8_t g_1603 = 0x44L;
static volatile uint8_t g_1671 = 1UL;
static uint32_t g_1832 = 18446744073709551606UL;
static uint32_t g_2244[9][2][3] = {{{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}, {{4294967286UL, 4294967286UL, 0UL}, {4294967286UL, 4294967286UL, 0UL}}};
static uint16_t g_2405 = 0x3F4CL;
static uint8_t g_2440 = 0x31L;
static volatile int32_t g_2684 = 4L;
static uint32_t func_4(int16_t p_5);
static uint8_t func_6(int8_t p_7, int16_t p_8, int32_t p_9, int8_t p_10);
static int8_t func_11(int32_t p_12);
static uint32_t func_17(int32_t p_18);
static int8_t func_22(uint32_t p_23, uint8_t p_24);
static uint8_t func_27(int16_t p_28, uint32_t p_29, uint8_t p_30);
static uint32_t func_1(void)
{
    uint16_t l_16[4][3] = {{65531UL, 0x14A9L, 65531UL}, {65531UL, 0x14A9L, 65531UL}, {65531UL, 0x14A9L, 65531UL}, {65531UL, 0x14A9L, 65531UL}};
    int32_t l_32 = 0x34ADC6F7L;
    uint32_t l_1393[8][6] = {{1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}, {1UL, 1UL, 0xEE693CDAL, 1UL, 1UL, 0x7ADCF7E5L}};
    uint8_t l_2409[10][9] = {{0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}, {0x33L, 0x61L, 0xA4L, 0x61L, 0x33L, 0x61L, 0xA4L, 0x61L, 0x33L}};
    int16_t l_2722 = 1L;
    int i, j;
    g_1018[0][7][6] = (safe_rshift_func_int8_t_s_s((func_4(((((0x7CL < func_6(func_11((g_13 & (safe_sub_func_int32_t_s_s(l_16[0][2], func_17(((safe_mod_func_int16_t_s_s(((g_21[2] ^ func_22(((safe_mod_func_uint32_t_u_u((g_21[2] , (g_1090 = (((g_21[1] , func_27((l_16[0][2] <= (l_32 = ((g_31 = (l_16[1][1] != ((-9L) | g_21[2]))) ^ g_21[2]))), g_21[2], g_21[2])) | g_1089[4]) < g_1089[4]))), g_1089[1])) <= g_763), g_21[1])) && 0L), g_21[0])) <= l_1393[1][1])))))), l_1393[7][5], l_2409[7][2], l_16[0][2])) | l_1393[1][1]) ^ l_1393[1][3]) , 0xDC89L)) <= g_2440), 1));
    g_839 = ((l_1393[5][4] < (safe_lshift_func_uint16_t_u_s((l_1393[1][1] , (g_1247 = ((safe_unary_minus_func_uint32_t_u((safe_add_func_int32_t_s_s((8L != (l_1393[5][2] || (safe_mod_func_int16_t_s_s(0xDC47L, g_66)))), (((l_16[0][2] || 0x7B800C23L) != l_16[0][1]) < g_1391))))) | l_1393[1][5]))), 5))) , 0L);
    if (g_13)
    {
        for (g_654 = 0; (g_654 != 54); g_654++)
        {
            uint8_t l_2721 = 8UL;
            if (l_2721)
                break;
        }
        l_32 = g_2405;
    }
    else
    {
        int32_t l_2725 = 0x248214CCL;
    }
    return g_2684;
}
static uint32_t func_4(int16_t p_5)
{
    int32_t l_2710[1];
    uint32_t l_2711[5][1][2] = {{{0x5CBAE672L, 4294967295UL}}, {{0x5CBAE672L, 4294967295UL}}, {{0x5CBAE672L, 4294967295UL}}, {{0x5CBAE672L, 4294967295UL}}, {{0x5CBAE672L, 4294967295UL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_2710[i] = 0xA1D1EC0CL;
    l_2710[0] = 0x3829DCF8L;
    return l_2711[3][0][1];
}
static uint8_t func_6(int8_t p_7, int16_t p_8, int32_t p_9, int8_t p_10)
{
    int8_t l_2412 = 0xDDL;
    int32_t l_2429[8] = {0x428E3B66L, 1L, 0x428E3B66L, 1L, 0x428E3B66L, 1L, 0x428E3B66L, 1L};
    int32_t l_2430 = 0xF4BE388BL;
    int32_t l_2431 = 0x54BB2FAFL;
    uint16_t l_2432 = 0UL;
    int32_t l_2443 = (-4L);
    uint16_t l_2445 = 0UL;
    uint8_t l_2513 = 248UL;
    uint32_t l_2514[5];
    uint32_t l_2515 = 0x7CADC7B7L;
    uint32_t l_2651[3];
    int i;
    for (i = 0; i < 5; i++)
        l_2514[i] = 7UL;
    for (i = 0; i < 3; i++)
        l_2651[i] = 4294967295UL;
    if (((((((+(((!((((l_2412 > (l_2430 = (((safe_add_func_uint8_t_u_u(g_1089[4], p_8)) <= (l_2429[2] = (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((g_763 , (safe_mod_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(l_2412, ((safe_mod_func_uint32_t_u_u(0xB9682E2AL, 9UL)) || ((+(safe_sub_func_int16_t_s_s(((!p_10) < g_175), p_7))) ^ l_2412)))) & 255UL), 0xCEL))), 2)), l_2412)))) <= g_1231))) || l_2431) , g_1018[0][7][2]) < l_2412)) , g_1087) == l_2432)) <= 0x5CC1L) , p_9) && p_7) , p_7) == g_1105))
    {
        int32_t l_2433 = 0x96836310L;
        int32_t l_2444 = 1L;
        l_2445 = ((l_2433 < (l_2430 = g_115)) != (l_2429[1] > (safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(g_810, (g_221 = ((l_2444 = (((l_2443 = (((g_2440 && ((safe_rshift_func_uint16_t_u_u(0x48ADL, 12)) == g_1231)) == ((p_7 || (g_2244[1][0][1] = ((1L >= p_7) <= p_7))) > g_1089[1])) || 0xE7L)) != l_2429[0]) || g_1832)) , g_1018[0][7][2])))), g_428)), p_7))));
    }
    else
    {
        int8_t l_2450 = 0xA9L;
        int8_t l_2452 = 0x86L;
        uint8_t l_2473 = 0x0CL;
        int32_t l_2506 = 0xB45C1BD2L;
        int32_t l_2516[1];
        int8_t l_2671 = 9L;
        int32_t l_2705 = 0xD3148A1CL;
        int i;
{
safe_mul_func_int8_t_s_s(1L, 254UL);
                }
{
                        int i, j, k;
                    }
{
                }
{
                }
for (i = 0; i < 5; i++)
        {
}
    }
    return l_2429[2];
}
static int8_t func_11(int32_t p_12)
{
    uint32_t l_1412 = 4294967295UL;
    int32_t l_1438 = 0x6834C3DBL;
    int8_t l_1439[10] = {0x7FL, 0xADL, 0x0AL, 0x0AL, 0xADL, 0x7FL, 0xADL, 0x0AL, 0x0AL, 0xADL};
    uint8_t l_1440 = 1UL;
    int8_t l_1483 = 0xC8L;
    int32_t l_1490 = 0L;
    int32_t l_1501 = 0xE8C2FA0BL;
    int32_t l_1502[5][9][5] = {{{0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}}, {{0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}}, {{0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}}, {{0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}}, {{0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}, {0x823F3DF2L, 0x4E8D33F2L, 0x419D923BL, 0xF41F2B60L, 0x419D923BL}}};
    uint16_t l_1560 = 0xEAF6L;
    uint32_t l_1624[6][3][2] = {{{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}, {{0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}, {0x953F2DF7L, 0xB3153AEDL}}};
    uint32_t l_1646 = 3UL;
    int16_t l_1851 = (-5L);
    uint32_t l_1861 = 18446744073709551615UL;
    uint16_t l_1877 = 65527UL;
    int32_t l_1883 = 0x709BFC8AL;
    int8_t l_1941 = 0x86L;
    uint32_t l_1984[7] = {0xF317D1A8L, 0xF317D1A8L, 0xF4FC79C4L, 0xF317D1A8L, 0xF317D1A8L, 0xF4FC79C4L, 0xF317D1A8L};
    uint32_t l_2057 = 0xFC352A53L;
    uint32_t l_2082 = 0xFE0C84B1L;
    uint32_t l_2117 = 0x412705E7L;
    uint32_t l_2162 = 0xDAEEC409L;
    int16_t l_2195[1][6][8] = {{{0x83C5L, (-3L), 0x5F3AL, (-3L), 0x83C5L, (-3L), 0x5F3AL, (-3L)}, {0x83C5L, (-3L), 0x5F3AL, (-3L), 0x83C5L, (-3L), 0x5F3AL, (-3L)}, {0x83C5L, (-3L), 0x5F3AL, (-3L), 0x83C5L, (-3L), 0x5F3AL, (-3L)}, {0x83C5L, (-3L), 0x5F3AL, (-3L), 0x83C5L, (-3L), 0x5F3AL, (-3L)}, {0x83C5L, (-3L), 0x5F3AL, (-3L), 0x83C5L, (-3L), 0x5F3AL, (-3L)}, {0x83C5L, (-3L), 0x5F3AL, (-3L), 0x83C5L, (-3L), 0x5F3AL, (-3L)}}};
    int32_t l_2254 = 0xA936334BL;
    uint32_t l_2279[5][10] = {{0xA5721A0EL, 0xAA99F6DCL, 0xA5721A0EL, 1UL, 0x923F942BL, 4294967294UL, 0UL, 4294967295UL, 0xCCD40BB6L, 1UL}, {0xA5721A0EL, 0xAA99F6DCL, 0xA5721A0EL, 1UL, 0x923F942BL, 4294967294UL, 0UL, 4294967295UL, 0xCCD40BB6L, 1UL}, {0xA5721A0EL, 0xAA99F6DCL, 0xA5721A0EL, 1UL, 0x923F942BL, 4294967294UL, 0UL, 4294967295UL, 0xCCD40BB6L, 1UL}, {0xA5721A0EL, 0xAA99F6DCL, 0xA5721A0EL, 1UL, 0x923F942BL, 4294967294UL, 0UL, 4294967295UL, 0xCCD40BB6L, 1UL}, {0xA5721A0EL, 0xAA99F6DCL, 0xA5721A0EL, 1UL, 0x923F942BL, 4294967294UL, 0UL, 4294967295UL, 0xCCD40BB6L, 1UL}};
    uint8_t l_2372 = 0UL;
    int i, j, k;
    for (g_117 = 0; (g_117 <= 6); g_117 += 1)
    {
        if (g_654)
            break;
{
                        int i, j, k;
                        return l_1624[(g_100 + 1)][(g_1603 + 1)][g_1603];
                    }
printf("index = [%d][%d][%d]\n", i, j, k);
{
        uint32_t l_1529[2][6][6] = {{{1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}}, {{1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}}};
        int32_t l_1530 = (-8L);
        int32_t l_1531 = (-1L);
        int i, j, k;
safe_rshift_func_uint8_t_u_u(1UL, l_1984[2]);
    }
safe_add_func_int8_t_s_s((g_1391 , ((0xF91224B8L == g_1089[p_12]) && g_1089[3])), 0x18L);
safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((252UL || p_12) & p_12), g_1671)), 5);
safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((l_1439[0] <= ((((((((safe_mod_func_int16_t_s_s(l_2279[3][7], 65531UL)) >= g_175) >= g_1087) | g_810) == 0xFD5156D3L) == g_810) <= 1L) || g_662)) , 0x0D86L), g_847)), g_472);
safe_lshift_func_uint16_t_u_u(65535UL, 6);
{
        uint32_t l_1529[2][6][6] = {{{1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}}, {{1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}, {1UL, 18446744073709551615UL, 0xCE4F931DL, 0x0D972AC3L, 0x1FD4B272L, 0x5AEB1EE1L}}};
        int32_t l_1530 = (-8L);
        int32_t l_1531 = (-1L);
        int i, j, k;
g_1100 += 1;
safe_mul_func_uint16_t_u_u(65527UL, (g_349 , (-7L)));
{
                        g_839 = g_222[4][1];
                    }
g_1100 += 1;
g_1603 += 1;
for (g_269 = 0; (g_269 > (-28)); --g_269)
                    {
                        g_839 = g_222[4][1];
                    };
printf("index = [%d][%d][%d]\n", i, j, k);
g_117 += 1;
if (g_962[(g_117 + 2)][g_117])
                    continue;
safe_lshift_func_uint8_t_u_u((((p_12 == (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((l_1941 && g_21[g_1832]) > p_12), 4L)), g_31))) < g_1671) , p_12), g_115);
safe_lshift_func_uint8_t_u_u((((p_12 == (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((l_1941 && g_21[g_1832]) > p_12), 4L)), g_31))) < g_1671) , p_12), g_115);
safe_lshift_func_uint8_t_u_u(g_21[2], 5);
safe_lshift_func_uint16_t_u_u(0UL, 4);
safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((l_1439[0] <= ((((((((safe_mod_func_int16_t_s_s(l_2279[3][7], 65531UL)) >= g_175) >= g_1087) | g_810) == 0xFD5156D3L) == g_810) <= 1L) || g_662)) , 0x0D86L), g_847)), g_472);
safe_rshift_func_uint16_t_u_u(0x48ADL, 12);
safe_rshift_func_uint16_t_u_u(0x48ADL, 12);
printf("index = [%d][%d][%d]\n", i, j, k);
g_839 -= 1;
printf("index = [%d][%d][%d]\n", i, j, k);
safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((~((((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((((((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u(0xD4L, (l_1412 | (l_1438 = l_1412)))) >= l_1412) < 0xD429L), l_1412)) , l_1438) <= g_810) && l_1439[8]) || 0x85L), 1L)) || g_763), 5)) || p_12) <= 0x7F443D8EL) && 1UL)), g_315)), 2)), 1)) | p_12), l_1439[8]);
safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((l_1502[g_66][(g_472 + 2)][g_66] = g_654), ((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((p_12 == (g_1100 = (((safe_sub_func_int16_t_s_s(p_12, g_1090)) , 0L) > g_115))), g_66)), 1UL)) && 1L))), p_12)), p_12);
safe_rshift_func_int8_t_s_s(g_104, g_349);
{
            if (g_654)
                goto lbl_1833;
        }
{
            if (g_654)
                goto lbl_1833;
        }
    }
safe_mod_func_uint32_t_u_u(1UL, 0xB4FEE1EEL);
safe_lshift_func_int16_t_s_u((-10L), 13);
safe_mod_func_uint32_t_u_u(1UL, 0xB4FEE1EEL);
safe_lshift_func_uint16_t_u_s(9UL, 8);
safe_sub_func_int32_t_s_s(1L, g_428);
safe_sub_func_uint16_t_u_u((0x48DE31ACL || g_351), (+(0x7CL && p_12)));
safe_lshift_func_uint8_t_u_u((((p_12 == (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((l_1941 && g_21[g_1832]) > p_12), 4L)), g_31))) < g_1671) , p_12), g_115);
if (p_12)
                            break;
g_428 += 1;
safe_lshift_func_uint16_t_u_s(9UL, 8);
safe_lshift_func_int16_t_s_u(g_662, 9);
safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(p_12, (safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s((p_12 & g_315), 0x885FL)), g_1018[1][6][9])))), 0xBC2FL)), 3)), 0xAAL);
safe_add_func_int32_t_s_s(g_31, 6);
printf("index = [%d]\n", i);
safe_lshift_func_uint16_t_u_s(((0xB054L < 0x8C4BL) || p_12), 1);
safe_add_func_int32_t_s_s(g_31, 6);
safe_add_func_int32_t_s_s(g_31, 6);
safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(0x80L, 5)), 1);
safe_rshift_func_int8_t_s_u(p_12, 6);
safe_lshift_func_int8_t_s_u(0xD4L, (l_1412 | (l_1438 = l_1412)));
g_315 += 1;
g_1247 += 1;
safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((p_12 == (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((l_1941 && g_21[g_1832]) > p_12), 4L)), g_31))) < g_1671) , p_12), g_115)), p_12)), g_1018[0][7][2]);
if (g_222[2][3])
                            break;
safe_lshift_func_uint8_t_u_u((((p_12 == (safe_rshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(((l_1941 && g_21[g_1832]) > p_12), 4L)), g_31))) < g_1671) , p_12), g_115);
safe_mul_func_int8_t_s_s(1L, 254UL);
g_1603 += 1;
safe_mod_func_int16_t_s_s(0x9AF1L, g_763);
safe_lshift_func_int16_t_s_u(g_662, 9);
safe_rshift_func_int8_t_s_u((-1L), 6);
safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((l_1439[0] <= ((((((((safe_mod_func_int16_t_s_s(l_2279[3][7], 65531UL)) >= g_175) >= g_1087) | g_810) == 0xFD5156D3L) == g_810) <= 1L) || g_662)) , 0x0D86L), g_847)), g_472);
safe_rshift_func_int8_t_s_u((-1L), 6);
safe_mul_func_int8_t_s_s(p_12, g_1018[1][5][4]);
safe_lshift_func_int16_t_s_u(g_662, 9);
safe_lshift_func_int16_t_s_u(g_662, 9);
{
            for (g_1247 = 0; (g_1247 <= 6); g_1247 += 1)
            {
                int i, j;
                g_1018[0][1][4] = g_962[g_1247][g_117];
                if (g_962[(g_117 + 2)][g_117])
                    continue;
            }
        }
safe_lshift_func_int16_t_s_u(0xF172L, 12);
{
            for (g_1247 = 0; (g_1247 <= 6); g_1247 += 1)
            {
                int i, j;
                g_1018[0][1][4] = g_962[g_1247][g_117];
                if (g_962[(g_117 + 2)][g_117])
                    continue;
            }
        }
    }
lbl_1833:
    if ((l_1412 || (((safe_mul_func_uint8_t_u_u((p_12 && ((safe_lshift_func_int16_t_s_s((safe_add_func_int8_t_s_s(g_810, (p_12 > ((safe_rshift_func_int8_t_s_u(l_1412, 6)) || ((((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u((~((((safe_lshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((((((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u(0xD4L, (l_1412 | (l_1438 = l_1412)))) >= l_1412) < 0xD429L), l_1412)) , l_1438) <= g_810) && l_1439[8]) || 0x85L), 1L)) || g_763), 5)) || p_12) <= 0x7F443D8EL) && 1UL)), g_315)), 2)), 1)) | p_12), l_1439[8])) , p_12) >= g_66) ^ 0x5752C4EDL))))), g_221)) | l_1439[8])), 0UL)) > l_1439[4]) <= l_1440)))
    {
        int16_t l_1455 = 7L;
        int32_t l_1456 = 1L;
        int32_t l_1460[2];
        uint32_t l_1498 = 0x8154A23CL;
        int32_t l_1499 = 0L;
        int32_t l_1500 = (-1L);
        int i;
        for (i = 0; i < 2; i++)
            l_1460[i] = 0L;
        for (g_1247 = 17; (g_1247 == 29); g_1247 = safe_add_func_int32_t_s_s(g_1247, 6))
        {
            int32_t l_1459 = 0x9F13E948L;
            if ((0x99L > p_12))
            {
                for (g_1090 = 14; (g_1090 >= (-20)); g_1090 = safe_sub_func_int16_t_s_s(g_1090, 3))
                {
                    uint8_t l_1461 = 0UL;
                    int32_t l_1462 = 0x9D96644BL;
                    l_1462 = ((((safe_add_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s((((l_1438 = (safe_sub_func_int8_t_s_s((((((safe_add_func_int32_t_s_s(p_12, (l_1460[1] = (((safe_mul_func_int16_t_s_s(((((l_1456 = (l_1455 > p_12)) & g_1105) == 3UL) != (safe_mod_func_int8_t_s_s((g_428 , 5L), g_662))), (p_12 != g_351))) == l_1459) < g_1247)))) == p_12) > p_12) & 4294967295UL) >= g_269), g_117))) , g_1391) == p_12), p_12)) >= p_12), g_13)) >= l_1461) , l_1456) == g_21[2]);
                }
                if (l_1459)
                {
                    for (g_269 = 0; (g_269 > (-28)); --g_269)
                    {
                        g_839 = g_222[4][1];
                    }
                }
                else
                {
                    int32_t l_1477 = 5L;
                    int32_t l_1478 = 0xEAFABE14L;
                    g_839 = (g_1087 > (((g_1105 = ((safe_add_func_int32_t_s_s(g_100, 7UL)) >= 0x1F3BL)) & (g_221 < (l_1478 = ((safe_mul_func_uint8_t_u_u((p_12 > p_12), (((safe_lshift_func_int16_t_s_u((l_1477 = (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u((((0x7FL < p_12) | p_12) > p_12), p_12)), l_1455))), 12)) , 0xA00BDF4FL) , 0x68L))) <= g_847)))) <= g_66));
                }
            }
            else
            {
                g_269 = l_1439[0];
            }
        }
        l_1502[2][8][4] = (l_1501 = (((g_1391 || g_351) ^ (((safe_add_func_uint32_t_u_u(g_349, (safe_mod_func_uint16_t_u_u(l_1483, (safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((65528UL < 7UL), (((l_1499 = ((safe_lshift_func_int16_t_s_s(((l_1490 >= ((g_662 , (l_1456 = ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint16_t_u((l_1460[1] = (safe_mul_func_uint8_t_u_u((l_1438 = (l_1483 == p_12)), 1UL))))), l_1440)), l_1498)) >= 0xCE34L))) != 0x41L)) != l_1483), 10)) , l_1490)) | p_12) == 0x1D3B1AC6L))), l_1500)))))) & 0x7543L) >= 0L)) < (-9L)));
    }
    else
    {
        return g_21[2];
    }
    if ((g_1018[0][0][6] = g_104))
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ;
    else
    {
        uint8_t l_1768[6][5] = {{0xD6L, 3UL, 0xD6L, 3UL, 0xD6L}, {0xD6L, 3UL, 0xD6L, 3UL, 0xD6L}, {0xD6L, 3UL, 0xD6L, 3UL, 0xD6L}, {0xD6L, 3UL, 0xD6L, 3UL, 0xD6L}, {0xD6L, 3UL, 0xD6L, 3UL, 0xD6L}, {0xD6L, 3UL, 0xD6L, 3UL, 0xD6L}};
        int32_t l_1774 = 0xDC7EBADCL;
        int i, j;
{
                        int i, j;
                        return g_222[g_100][g_100];
                    }
safe_unary_minus_func_int8_t_s(g_31);
safe_unary_minus_func_int8_t_s(g_31);
g_1832 += 1;
safe_sub_func_int8_t_s_s(g_1391, g_222[(g_2405 + 1)][(g_1247 + 2)]);
safe_mul_func_int16_t_s_s(0x7076L, 0x0A11L);
g_1100 += 1;
g_1100 += 1;
safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((252UL || p_12) & p_12), g_1671)), 5);
safe_sub_func_uint16_t_u_u((0x48DE31ACL || g_351), (+(0x7CL && p_12)));
safe_add_func_uint32_t_u_u(g_662, 3);
safe_lshift_func_uint16_t_u_s(((0xB054L < 0x8C4BL) || p_12), 1);
safe_mul_func_int8_t_s_s(p_12, p_12);
safe_unary_minus_func_int32_t_s(2L);
safe_lshift_func_uint16_t_u_s(0x3879L, 15);
safe_mod_func_int32_t_s_s((g_351 , p_12), (safe_mod_func_int16_t_s_s((g_221 = (safe_add_func_uint32_t_u_u(p_12, l_1768[3][2]))), p_12)));
    }
    {
        int32_t l_1882 = 0xDA26A559L;
        uint32_t l_1903 = 0UL;
        uint8_t l_1943 = 9UL;
        int32_t l_2006[9] = {0L, 7L, 0L, 7L, 0L, 7L, 0L, 7L, 0L};
        uint16_t l_2007 = 0xF81FL;
        int32_t l_2008 = (-2L);
        int32_t l_2009 = (-9L);
        uint32_t l_2166 = 0xAA61C63BL;
        uint32_t l_2283 = 18446744073709551615UL;
{
        return g_21[2];
    }
        for (p_12 = 0; (p_12 <= 2); p_12 += 1)
        {
            int16_t l_1915 = 0x4EFBL;
            int32_t l_1916 = 1L;
            uint32_t l_2281[6][10][4] = {{{0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}}, {{0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}}, {{0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}}, {{0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}}, {{0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}}, {{0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}, {0x5F34E99FL, 0x0E93D5A1L, 18446744073709551615UL, 1UL}}};
                                          ;
        }
    }
    return l_1883;
}
static uint32_t func_17(int32_t p_18)
{
    uint16_t l_1401 = 0xBC82L;
    int32_t l_1410 = 0x99FD98BEL;
    int32_t l_1411 = 2L;
    for (p_18 = 0; (p_18 != (-29)); p_18 = safe_sub_func_uint32_t_u_u(p_18, 5))
    {
        int32_t l_1398 = (-1L);
        l_1398 = (l_1401 = (safe_rshift_func_int8_t_s_u((l_1398 | (safe_add_func_int32_t_s_s(l_1398, 0x0A2191EBL))), (65535UL == 0x8ECEL))));
        return l_1401;
    }
{
{
                    }
{
                    }
safe_lshift_func_int16_t_s_u((-10L), 13);
                    }
{
                    }
{
                    }
safe_unary_minus_func_uint16_t_u(((0L == g_428) != 1UL));
safe_sub_func_int8_t_s_s(((l_1410 = ((g_847 && ((-1L) & (-10L))) , (l_1410 , 0x5A1EL))) , g_351), p_18);
safe_sub_func_int8_t_s_s(g_1391, g_222[(g_2405 + 1)][(g_1247 + 2)]);
    return l_1410;
}
static int8_t func_22(uint32_t p_23, uint8_t p_24)
{
    uint16_t l_1097[9][5][5] = {{{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}, {{65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}, {65535UL, 0x0D29L, 65535UL, 0x0D29L, 65535UL}}};
    uint8_t l_1114 = 253UL;
    uint8_t l_1143 = 0x2FL;
    int32_t l_1189 = 4L;
    int32_t l_1191 = (-10L);
    int16_t l_1230 = 0x9E8CL;
    int32_t l_1344 = 1L;
    uint32_t l_1345 = 4UL;
    for (g_428 = 0; (g_428 <= 6); g_428 += 1)
    {
        int8_t l_1101[3];
        int8_t l_1104 = 0xDDL;
        int32_t l_1106[5][7][4] = {{{0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}}, {{0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}}, {{0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}}, {{0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}}, {{0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}, {0L, 1L, (-1L), 0x1B71435CL}}};
        int16_t l_1111 = 0L;
        int32_t l_1182[5][3] = {{(-6L), (-6L), 0xD74B8264L}, {(-6L), (-6L), 0xD74B8264L}, {(-6L), (-6L), 0xD74B8264L}, {(-6L), (-6L), 0xD74B8264L}, {(-6L), (-6L), 0xD74B8264L}};
        uint16_t l_1190 = 0UL;
        uint32_t l_1314 = 3UL;
        int32_t l_1392 = 0x6F210FCAL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1101[i] = 1L;
        if (((safe_sub_func_uint16_t_u_u((p_24 <= ((((0x5194L == (safe_mod_func_int32_t_s_s(0L, (safe_lshift_func_uint16_t_u_u(l_1097[7][3][0], ((safe_unary_minus_func_int16_t_s(((l_1106[0][3][0] = (!(((g_763 = l_1097[7][3][0]) && ((((((((((g_763 , g_1100) ^ (l_1101[1] & (safe_add_func_uint32_t_u_u((((l_1104 != l_1101[1]) >= l_1101[1]) ^ l_1097[2][4][3]), g_222[4][1])))) < g_21[2]) && l_1097[3][0][3]) , p_24) , p_23) ^ 0L) , 0x00DEL) >= (-5L)) | g_1018[0][7][2])) < g_1105))) , p_24))) && p_24)))))) == l_1104) & 0UL) & g_221)), p_24)) , (-1L)))
        {
            uint16_t l_1120 = 65528UL;
            int32_t l_1121[9][1];
            int i, j;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1121[i][j] = 0x1CBA4C5EL;
            }
            for (g_104 = 0; (g_104 <= 4); g_104 += 1)
            {
                uint32_t l_1115 = 4294967293UL;
                int16_t l_1122[5][6] = {{0x31E4L, 0x31E4L, 0x5D89L, 0x31E4L, 0x31E4L, 0x5D89L}, {0x31E4L, 0x31E4L, 0x5D89L, 0x31E4L, 0x31E4L, 0x5D89L}, {0x31E4L, 0x31E4L, 0x5D89L, 0x31E4L, 0x31E4L, 0x5D89L}, {0x31E4L, 0x31E4L, 0x5D89L, 0x31E4L, 0x31E4L, 0x5D89L}, {0x31E4L, 0x31E4L, 0x5D89L, 0x31E4L, 0x31E4L, 0x5D89L}};
                int32_t l_1175 = (-1L);
                int i, j;
                g_222[4][1] = (l_1106[4][2][1] = (safe_add_func_int16_t_s_s(1L, (safe_sub_func_uint32_t_u_u(l_1111, (0x549DB6C7L || ((safe_mod_func_uint16_t_u_u(((l_1114 && g_175) == g_222[4][1]), l_1115)) ^ (safe_lshift_func_int8_t_s_u((g_1105 = (((((((l_1115 | (((l_1121[3][0] = (safe_mul_func_uint8_t_u_u(0x6CL, l_1120))) < l_1097[7][3][0]) >= l_1106[0][0][2])) , p_24) == p_24) | l_1115) , l_1122[0][4]) , l_1101[1]) >= p_23)), 6)))))))));
                for (g_1100 = 0; (g_1100 <= 1); g_1100 += 1)
                {
                    int i, j, k;
                    g_1018[g_1100][(g_1100 + 2)][g_428] = (g_1018[g_1100][(g_1100 + 1)][(g_428 + 1)] ^ ((safe_mod_func_uint8_t_u_u(l_1097[(g_1100 + 7)][g_104][(g_1100 + 2)], (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_s(l_1097[(g_428 + 2)][g_104][g_104], (p_24 || (safe_mul_func_int8_t_s_s((((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((((safe_add_func_int32_t_s_s(((g_847 < (safe_rshift_func_uint8_t_u_u((((g_1089[g_1100] = g_21[1]) , (((((safe_mul_func_uint8_t_u_u((((p_24 == ((0L >= (safe_lshift_func_uint8_t_u_u(0x8BL, 2))) > l_1122[2][4])) > 1L) >= (-7L)), (-10L))) && p_24) || p_24) , g_678) < g_269)) <= p_23), 1))) , p_23), g_31)) | 1L) | g_962[4][6]) == l_1121[3][0]), l_1121[3][0])), p_23)) | p_24) > l_1143), p_23))))) , 0xE576L), 15)))) == (-2L)));
                    l_1175 = (safe_rshift_func_int16_t_s_s((p_23 && (g_763 | (l_1121[4][0] = ((safe_mul_func_int8_t_s_s(0xB3L, (safe_lshift_func_uint16_t_u_s((p_24 || (safe_lshift_func_int16_t_s_u((((0xE6434759L || ((safe_add_func_int32_t_s_s(g_222[0][2], ((g_1018[g_1100][(g_1100 + 1)][(g_428 + 1)] = (safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(0xBD98L, (~((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s((((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(((l_1106[3][1][3] = 0xF2A6L) ^ (safe_mul_func_uint8_t_u_u((((safe_sub_func_uint32_t_u_u(g_21[1], 2L)) != p_24) || l_1101[1]), g_428))), 0x02L)), p_24)), g_1087)) || l_1122[3][0]) | p_23), p_23)), g_1018[0][7][2])), l_1175)) & 0L)))), g_115))) >= p_23))) & l_1111)) < 0xFEF25F54L) || l_1101[0]), 6))), g_1090)))) , p_24)))), 12));
                }
            }
        }
        else
        {
            uint16_t l_1188[7][7] = {{0x0F4DL, 0x0F4DL, 1UL, 1UL, 0x238EL, 1UL, 1UL}, {0x0F4DL, 0x0F4DL, 1UL, 1UL, 0x238EL, 1UL, 1UL}, {0x0F4DL, 0x0F4DL, 1UL, 1UL, 0x238EL, 1UL, 1UL}, {0x0F4DL, 0x0F4DL, 1UL, 1UL, 0x238EL, 1UL, 1UL}, {0x0F4DL, 0x0F4DL, 1UL, 1UL, 0x238EL, 1UL, 1UL}, {0x0F4DL, 0x0F4DL, 1UL, 1UL, 0x238EL, 1UL, 1UL}, {0x0F4DL, 0x0F4DL, 1UL, 1UL, 0x238EL, 1UL, 1UL}};
            int32_t l_1192 = 0x237A4F90L;
            int32_t l_1193 = (-5L);
            int i, j;
            l_1193 = (g_962[4][4] <= ((safe_mul_func_int8_t_s_s(1L, 249UL)) < (l_1106[2][3][3] = (safe_add_func_uint16_t_u_u(g_1089[0], (safe_mul_func_uint16_t_u_u((l_1192 = (l_1191 = (l_1182[0][0] , (safe_unary_minus_func_int32_t_s(((safe_add_func_int8_t_s_s((-5L), (((safe_mod_func_int16_t_s_s((((0xCBAFL || (p_24 & ((((l_1189 = (((((0xBED8400FL | 1L) || l_1114) == g_1089[4]) < g_654) , l_1188[0][1])) > l_1106[0][3][0]) <= l_1190) , p_24))) <= 4UL) ^ p_23), 8L)) != 65529UL) && g_1089[4]))) || l_1188[0][1])))))), l_1101[1])))))));
        }
        for (g_472 = 1; (g_472 >= 0); g_472 -= 1)
        {
            uint32_t l_1226[2];
            uint8_t l_1248[7];
            int32_t l_1257 = 0L;
            int32_t l_1258 = 1L;
            int32_t l_1291[9] = {0xDFCA8BC7L, 1L, 0xDFCA8BC7L, 1L, 0xDFCA8BC7L, 1L, 0xDFCA8BC7L, 1L, 0xDFCA8BC7L};
            uint32_t l_1313 = 0x0821FEEFL;
            uint16_t l_1317[2];
            for (i = 0; i < 2; i++)
                l_1226[i] = 0xD2A08DA3L;
            for (i = 0; i < 7; i++)
                l_1248[i] = 255UL;
        {
            uint32_t l_1226[2];
            uint8_t l_1248[7];
            int32_t l_1257 = 0L;
            int32_t l_1258 = 1L;
            int32_t l_1291[9] = {0xDFCA8BC7L, 1L, 0xDFCA8BC7L, 1L, 0xDFCA8BC7L, 1L, 0xDFCA8BC7L, 1L, 0xDFCA8BC7L};
            int32_t l_1292 = 0x2C4DC5BBL;
            uint32_t l_1313 = 0x0821FEEFL;
            uint16_t l_1317[2];
            int8_t l_1361[9] = {0xEBL, 1L, 0xEBL, 1L, 0xEBL, 1L, 0xEBL, 1L, 0xEBL};
            int i;
            for (i = 0; i < 2; i++)
                l_1226[i] = 0xD2A08DA3L;
            for (i = 0; i < 7; i++)
                l_1248[i] = 255UL;
            for (i = 0; i < 2; i++)
                l_1317[i] = 65535UL;
            for (g_1105 = 1; (g_1105 >= 0); g_1105 -= 1)
            {
                int32_t l_1209 = 0L;
                int32_t l_1229 = (-4L);
                int32_t l_1233[4][7] = {{(-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L)}, {(-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L)}, {(-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L)}, {(-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L), 0x0D798AF9L, (-9L)}};
                uint16_t l_1234 = 7UL;
                int i, j, k;
                for (g_1100 = 1; (g_1100 <= 4); g_1100 += 1)
                {
                    uint8_t l_1232 = 0x28L;
                    int i, j, k;
                    g_1018[g_472][(g_472 + 2)][(g_1100 + 1)] = (safe_sub_func_int16_t_s_s((l_1233[2][2] = ((((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s(((((((g_1018[g_472][g_1100][g_1105] < (g_962[(g_1105 + 4)][(g_472 + 3)] || (safe_sub_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((p_24 <= (+(safe_lshift_func_uint8_t_u_u((l_1209 ^ ((safe_add_func_int16_t_s_s(((g_1231 = (((((safe_sub_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(p_24, g_1089[0])) > ((g_351 = (l_1229 = (((safe_rshift_func_int16_t_s_s(l_1226[1], 1)) | ((safe_rshift_func_int8_t_s_u(((p_23 | g_222[4][1]) >= 0x01B3L), p_24)) < g_428)) && g_115))) , 255UL)), p_24)), l_1226[1])), 1L)), 14)) >= l_1230) && g_117), p_24)) | 0L) | g_962[(g_1105 + 4)][(g_472 + 3)]) >= 0xB9ECL) , l_1143)) , g_1089[(g_472 + 2)]), g_472)) , (-3L))), g_117)))), g_1089[(g_472 + 2)])) < l_1104), l_1226[1])))) || 8L) && p_24) , l_1104) || l_1106[3][5][1]) && l_1232), l_1226[1])), g_1089[1])), (-7L))) , g_351) > p_23) <= g_1100)), g_1105));
                    for (l_1111 = 0; (l_1111 <= 4); l_1111 += 1)
                    {
                        int i, j, k;
                        g_1018[g_472][(g_1105 + 3)][(g_472 + 7)] = 1L;
                        l_1229 = (g_115 = (l_1234 | 0x9BL));
                    }
                }
                l_1258 = ((((safe_mod_func_int32_t_s_s(g_1018[g_1105][(g_1105 + 5)][(g_428 + 3)], ((safe_lshift_func_uint16_t_u_s(0x3879L, 15)) , ((safe_add_func_int16_t_s_s((l_1257 = (safe_mod_func_int8_t_s_s((g_1018[g_1105][g_428][g_1105] , (safe_mul_func_int8_t_s_s((l_1106[0][3][0] = (safe_sub_func_uint32_t_u_u((((((g_1247 = g_962[(g_1105 + 4)][(g_1105 + 2)]) && (l_1230 < l_1248[3])) <= 65531UL) & ((p_24 , ((safe_mod_func_int32_t_s_s((g_269 = (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(1L, 254UL)), g_349)), p_23))), 0xD1BD5773L)) , g_662)) == 0x62L)) , 4294967287UL), g_115))), l_1191))), 2UL))), p_23)) , l_1114)))) | p_23) && g_222[0][1]) == 0L);
                for (g_1231 = 0; (g_1231 <= 6); g_1231 += 1)
                {
                    uint8_t l_1266 = 1UL;
                    for (g_117 = 0; (g_117 <= 6); g_117 += 1)
                    {
                        return l_1233[3][2];
                    }
                    l_1191 = ((((+(safe_mul_func_int8_t_s_s(((safe_add_func_int16_t_s_s(0x0F32L, p_24)) ^ (-8L)), 255UL))) , (((safe_add_func_uint8_t_u_u(1UL, ((g_100 = ((l_1266 >= (safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(l_1266, ((safe_add_func_uint32_t_u_u(g_175, ((g_1100 = ((safe_rshift_func_int8_t_s_s(((l_1233[2][2] != l_1257) <= p_24), 1)) >= l_1097[7][3][0])) == l_1233[0][5]))) ^ g_117))), g_116))) ^ g_810)) <= l_1143))) >= 2L) || g_221)) , g_1089[4]) , 0x4E8238A6L);
                    return p_23;
                }
                l_1292 = (safe_rshift_func_uint16_t_u_u((l_1257 = ((l_1291[7] = (((safe_sub_func_int32_t_s_s((-10L), g_1231)) != ((g_1018[0][7][2] , (g_1089[(g_1105 + 2)] = (g_1018[g_1105][(g_472 + 3)][(g_472 + 5)] < 0xC3L))) && (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s((((g_1018[g_1105][g_428][g_1105] = l_1182[2][1]) > (-1L)) , ((((((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u(0xCFC4L, 14)) <= (safe_lshift_func_uint16_t_u_s((l_1258 = l_1248[3]), 4))), l_1143)), l_1291[7])) != 0x153EL) || 5UL) >= (-9L)) , g_873) < l_1226[1])), 2)) < g_1105), g_962[3][4])))) & 3L)) ^ 0x60L)), g_654));
            }
            l_1257 = (((safe_rshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u(((g_315 < l_1097[7][1][1]) & g_315), 10)) | (g_1089[1] > (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((l_1291[0] = (l_1191 = 0xD7A5L)), (255UL < (g_847 && ((((safe_lshift_func_int16_t_s_s(((((((safe_rshift_func_uint16_t_u_s(g_269, ((((((l_1258 = (((safe_sub_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((((l_1097[5][0][1] || p_23) | l_1258) >= l_1189), 249UL)) & l_1230), g_269)) >= l_1097[7][3][0]) <= 0L)) || p_23) & 8UL) , g_351) > g_1105) & (-6L)))) >= g_662) ^ l_1313) | 1L) > g_678) , l_1314), l_1106[2][1][1])) , l_1182[0][0]) == l_1230) != (-2L)))))) , l_1111), 2)), 65531UL)), 5)))), l_1114)) && (-7L)) , 0x6DAFF09EL);
        }
        }
    }
{
                        int i, j;
                        return g_222[g_100][g_100];
                    }
}
static uint8_t func_27(int16_t p_28, uint32_t p_29, uint8_t p_30)
{
    uint32_t l_46 = 0xBFA08552L;
    int32_t l_49 = 0L;
    int32_t l_120 = 0x4F164E9EL;
    int32_t l_172[9];
    int32_t l_177 = 0xDEA65F88L;
    uint8_t l_270 = 0x77L;
    uint8_t l_402 = 8UL;
    int16_t l_653 = 1L;
    int16_t l_840 = 0x18A3L;
    int8_t l_945 = (-4L);
    int32_t l_1006 = 0x4C6A6D73L;
    int32_t l_1041 = 0L;
    int i;
    for (i = 0; i < 9; i++)
        l_172[i] = 0x6083B57DL;
lbl_453:
    for (g_31 = 0; (g_31 == 56); g_31 = safe_add_func_int32_t_s_s(g_31, 6))
    {
        if (g_21[2])
            break;
        if (p_30)
            continue;
    }
    for (p_30 = 3; (p_30 > 53); p_30++)
    {
        uint32_t l_37 = 0x8F7CF8FBL;
        uint8_t l_45 = 255UL;
        int32_t l_118 = (-7L);
        int32_t l_176 = 0x97DF8BE5L;
        int16_t l_178[4][6][10] = {{{(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}}, {{(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}}, {{(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}}, {{(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}, {(-1L), 1L, 0L, 0L, (-5L), (-6L), 8L, 0xE1C1L, 0x4D7DL, (-6L)}}};
        int16_t l_180 = 0x5470L;
        int32_t l_239 = 0xFE881F7AL;
        uint16_t l_244[6] = {0x2FEAL, 1UL, 0x2FEAL, 1UL, 0x2FEAL, 1UL};
        int32_t l_352 = 0x4FE820B8L;
        int8_t l_524 = 0x78L;
        uint16_t l_547 = 0xF597L;
        uint32_t l_616 = 0x691C61AAL;
        int8_t l_640 = 0x46L;
        int32_t l_734 = 1L;
        uint16_t l_735 = 0xD591L;
        int16_t l_736 = (-8L);
        int32_t l_852[8][8] = {{4L, 0xD67A8168L, 0x975B5A25L, 0x0839000DL, 0L, 0x9892204BL, 0L, (-1L)}, {4L, 0xD67A8168L, 0x975B5A25L, 0x0839000DL, 0L, 0x9892204BL, 0L, (-1L)}, {4L, 0xD67A8168L, 0x975B5A25L, 0x0839000DL, 0L, 0x9892204BL, 0L, (-1L)}, {4L, 0xD67A8168L, 0x975B5A25L, 0x0839000DL, 0L, 0x9892204BL, 0L, (-1L)}, {4L, 0xD67A8168L, 0x975B5A25L, 0x0839000DL, 0L, 0x9892204BL, 0L, (-1L)}, {4L, 0xD67A8168L, 0x975B5A25L, 0x0839000DL, 0L, 0x9892204BL, 0L, (-1L)}, {4L, 0xD67A8168L, 0x975B5A25L, 0x0839000DL, 0L, 0x9892204BL, 0L, (-1L)}, {4L, 0xD67A8168L, 0x975B5A25L, 0x0839000DL, 0L, 0x9892204BL, 0L, (-1L)}};
        uint8_t l_920 = 1UL;
        uint8_t l_961 = 0x71L;
        int16_t l_1025[4] = {0x4C6FL, 0x4105L, 0x4C6FL, 0x4105L};
        int8_t l_1088 = 0xFDL;
        int i, j, k;
{
                        int i, j, k;
                    }
{
        }
{
safe_rshift_func_int8_t_s_u((-1L), 6);
g_1105 += 1;
    }
{
            uint32_t l_173 = 0xE37E41B8L;
            int32_t l_174 = 0x42906C79L;
            int32_t l_179 = (-8L);
            int32_t l_181 = 0L;
            uint8_t l_268 = 0UL;
            int8_t l_470 = 0xCEL;
            int16_t l_496 = 0x3CDCL;
            uint8_t l_521 = 0x0DL;
            uint8_t l_543 = 3UL;
            uint32_t l_572 = 0x252B7378L;
            uint32_t l_612 = 18446744073709551615UL;
            uint32_t l_615 = 0x4387A08BL;
            uint8_t l_991 = 0xE7L;
        }
l_49 += 1;
{
                    }
safe_add_func_uint8_t_u_u(((l_945 < 0xA0L) > ((safe_mod_func_int16_t_s_s(0x5257L, (((g_315 = p_29) & g_116) , l_49))) || p_29)), 0x2DL);
{
for (g_662 = 0; (g_662 <= 23); g_662 = safe_add_func_uint32_t_u_u(g_662, 3))
        {
            uint8_t l_1057 = 255UL;
            int32_t l_1086 = (-1L);
        };
    }
{
                    }
{
                    }
{
                }
{
{
                    return p_30;
                }
{
                    return p_30;
                }
safe_add_func_uint8_t_u_u(l_270, 1);
safe_add_func_uint8_t_u_u(l_270, 1);
safe_unary_minus_func_int8_t_s(g_21[1]);
    }
{
g_2405 += 1;
safe_sub_func_int8_t_s_s((-1L), g_104);
safe_sub_func_int8_t_s_s((-1L), g_104);
g_662 += 1;
g_662 += 1;
safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(1L, 254UL)), g_349);
g_1832 += 1;
    }
safe_add_func_int32_t_s_s(g_100, 7UL);
safe_add_func_int16_t_s_s(g_839, 7);
safe_add_func_int32_t_s_s(g_100, 7UL);
safe_rshift_func_uint8_t_u_s((l_178[0][5][6] < (g_117 , (g_117 = (!(p_28 = (safe_sub_func_int32_t_s_s(0xF3F224DAL, 0x26D909BDL))))))), p_30);
    }
    return g_810;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_21[i], "g_21[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_222[i][j], "g_222[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    transparent_crc(g_349, "g_349", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_654, "g_654", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    transparent_crc(g_678, "g_678", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_810, "g_810", print_hash_value);
    transparent_crc(g_839, "g_839", print_hash_value);
    transparent_crc(g_847, "g_847", print_hash_value);
    transparent_crc(g_873, "g_873", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_962[i][j], "g_962[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_1018[i][j][k], "g_1018[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_1087, "g_1087", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1089[i], "g_1089[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_1090, "g_1090", print_hash_value);
    transparent_crc(g_1100, "g_1100", print_hash_value);
    transparent_crc(g_1105, "g_1105", print_hash_value);
    transparent_crc(g_1231, "g_1231", print_hash_value);
    transparent_crc(g_1247, "g_1247", print_hash_value);
    transparent_crc(g_1391, "g_1391", print_hash_value);
    transparent_crc(g_1603, "g_1603", print_hash_value);
    transparent_crc(g_1671, "g_1671", print_hash_value);
    transparent_crc(g_1832, "g_1832", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_2244[i][j][k], "g_2244[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    transparent_crc(g_2405, "g_2405", print_hash_value);
    transparent_crc(g_2440, "g_2440", print_hash_value);
    transparent_crc(g_2684, "g_2684", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}