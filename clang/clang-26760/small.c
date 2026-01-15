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
static const uint8_t g_18 = 0x96L;
static uint32_t g_22 = 18446744073709551615UL;
static uint8_t g_59 = 0x26L;
static int8_t g_89 = 0xE8L;
static int8_t g_97[7] = {0x9AL, 0x9AL, 0x9AL, 0x9AL, 0x9AL, 0x9AL, 0x9AL};
static int8_t g_100 = 0x2FL;
static int16_t g_101 = 0x8DB7L;
static int32_t g_120[5] = {0x9873F28DL, 0x9873F28DL, 0x9873F28DL, 0x9873F28DL, 0x9873F28DL};
static uint32_t g_143 = 4294967295UL;
static int16_t g_540 = 0xE6F4L;
static int16_t g_694 = 0L;
static int8_t g_717 = 0x46L;
static uint32_t g_777 = 0xDDF76E03L;
static uint32_t g_849[1] = {0xBCE5A530L};
static int16_t g_935 = (-1L);
static uint32_t g_1168 = 0x7D4DB357L;
static uint8_t g_1171 = 7UL;
static uint16_t g_1217 = 0xB6F3L;
static int32_t g_1368[3] = {(-2L), (-2L), (-2L)};
static int16_t g_1482[4][3][4] = {{{0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}}, {{0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}}, {{0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}}, {{0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}}};
static int32_t g_1540[6][2] = {{3L, (-8L)}, {3L, (-8L)}, {3L, (-8L)}, {3L, (-8L)}, {3L, (-8L)}, {3L, (-8L)}};
static int32_t g_1548[10][8][3] = {{{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}};
static int8_t g_2003[6] = {8L, 0x85L, 8L, 0x85L, 8L, 0x85L};
static int32_t g_2100 = (-1L);
static int16_t g_2184[3][3] = {{0xC198L, 0x0844L, 0xC198L}, {0xC198L, 0x0844L, 0xC198L}, {0xC198L, 0x0844L, 0xC198L}};
static int16_t g_2254 = (-10L);
static uint16_t g_2414 = 2UL;
static uint8_t g_2431 = 1UL;
static uint32_t g_2467 = 0x7A51E780L;
static const int32_t g_2468 = 0x6A00EF02L;
static int32_t g_2469 = 1L;
static int32_t g_2470[3][1][10] = {{{0xD1D11586L, (-1L), (-6L), (-6L), (-1L), 0xD1D11586L, (-1L), (-6L), (-6L), (-1L)}}, {{0xD1D11586L, (-1L), (-6L), (-6L), (-1L), 0xD1D11586L, (-1L), (-6L), (-6L), (-1L)}}, {{0xD1D11586L, (-1L), (-6L), (-6L), (-1L), 0xD1D11586L, (-1L), (-6L), (-6L), (-1L)}}};
static int32_t func_3(int32_t p_4, uint16_t p_5, int32_t p_6, uint8_t p_7, uint32_t p_8);
static int16_t func_10(uint32_t p_11, uint8_t p_12, int32_t p_13);
static int32_t func_19(int16_t p_20);
static int16_t func_25(uint16_t p_26);
static int16_t func_28(int32_t p_29, int32_t p_30);
static int16_t func_33(uint32_t p_34, int16_t p_35);
static int16_t func_38(int32_t p_39, int8_t p_40, uint16_t p_41, int16_t p_42, uint16_t p_43);
static int32_t func_46(uint8_t p_47, uint16_t p_48, int16_t p_49, uint8_t p_50, uint16_t p_51);
static int16_t func_54(int32_t p_55, const uint32_t p_56, int8_t p_57, uint8_t p_58);
static uint16_t func_1(void)
{
    uint32_t l_2[1];
    int16_t l_9 = 0x4210L;
    int i;
                                        if (!((g_777 > g_1168)) )
{
{
            for (i = 0; i < 4; i++)
            {
                transparent_crc(g_1482[i][g_2100][i], "g_1482[i][g_2100][i]", g_2469);
                if (g_2469) printf("index = [%d][%d][%d]\n", i, g_2100, i);
            }
        }
}
                    for (i = 0; i < 1; i++)
        l_2[i] = 0xB50BF34FL;
                                        if ((g_2469>1) )
{
g_1217 ^= i;
}
                    l_2[0] = 0xA8EAC8B1L;
                                   uint32_t BOoOog_22 = (~(((-((g_101 - ((-(g_1217)) | g_694)))) & (~(((g_22 * g_59) ^ (((~(((-(g_143)) || (~(g_1168))))) - ((-(g_89)) | g_2469)) * g_1171)))))));
uint32_t BOoOobg_1168 = (~(((~((~(((g_143 - (~(((-(g_1217)) - ((g_22 & g_2469) - g_1168))))) & ((g_89 || g_101) ^ (~(((~((g_694 & (~(g_1171))))) * g_59))))))))) || (-((~(BOoOog_22)))))));
uint8_t BOoOocg_1171 = (~(((~(((~(g_89)) - (-(g_1168))))) | ((~((g_694 ^ g_143))) | ((-(BOoOog_22)) - ((((~((~((~(BOoOobg_1168)))))) || (-(((~(g_22)) || (g_1217 >> g_2469))))) - (g_59 - g_1171)) & (~((~(g_101))))))))));
int16_t BOoOodg_101 = (~(((((~(((g_694 ^ (~(g_22))) * g_1168))) - (g_89 * ((((-(g_101)) - ((g_1171 | BOoOog_22) >> (BOoOocg_1171 & g_59))) >> (~((~(g_2469))))) | (-(g_1217))))) * (~(g_143))) - BOoOobg_1168)));
int32_t BOoOoeg_2469 = (~((((~((~(((~((~(g_694)))) & BOoOocg_1171))))) * (-(((((BOoOodg_101 & BOoOobg_1168) * (g_59 & g_101)) | (-((-(((~(g_1168)) - (BOoOog_22 * (~(g_1171))))))))) * (-(g_143)))))) | (~((~(((-(g_22)) * ((~((~(g_1217)))) & ((~(g_2469)) ^ (~(g_89))))))))))));
uint32_t BOoOofg_143 = (~(((~(((-(g_2469)) | (-((~(g_1217))))))) | ((((-((g_22 * ((BOoOoeg_2469 | g_101) | BOoOocg_1171)))) | ((~(g_1168)) << (g_89 || g_694))) & (BOoOog_22 | (~(BOoOobg_1168)))) || (~(((g_143 - (g_1171 || BOoOodg_101)) & g_59)))))));
if(!((!g_101))){
BOoOog_22 = g_22;
BOoOobg_1168 = g_1168;
BOoOocg_1171 = g_1171;
BOoOodg_101 = g_101;
BOoOoeg_2469 = g_2469;
BOoOofg_143 = g_143;
g_22 = (~((((((-(g_1171)) ^ BOoOoeg_2469) * (-((BOoOocg_1171 || BOoOog_22)))) | ((g_1168 >> (g_694 * (~(g_89)))) * ((BOoOofg_143 - (-(BOoOobg_1168))) & (~((-(g_101))))))) - (~(((~(((-(((~(g_22)) | (g_1217 | (g_2469 & BOoOodg_101))))) | g_143))) - g_59))))));
g_1168 = (-(((((~((-(((~(g_1171)) - g_1168))))) * ((g_1217 || (~(g_89))) ^ g_143)) & (~((((g_101 || BOoOobg_1168) ^ (~((BOoOodg_101 | g_694)))) & (~(g_2469)))))) * (~((((~(((-(g_22)) * (~(BOoOog_22))))) - (BOoOofg_143 | (~((~(BOoOoeg_2469)))))) & (g_59 & BOoOocg_1171)))))));
g_1171 = (~(((((~((~(g_22)))) * (((-(BOoOog_22)) || (-(g_89))) & (~(((~((g_694 ^ BOoOoeg_2469))) ^ g_2469))))) & (((BOoOocg_1171 & g_59) * (~(BOoOobg_1168))) || ((-((g_143 || g_101))) ^ (g_1171 & g_1168)))) * (((-(g_1217)) - BOoOofg_143) | BOoOodg_101))));
g_101 = (~(((((g_101 - (~(g_694))) * (((~(BOoOocg_1171)) * (-((BOoOog_22 * (~(g_89)))))) ^ g_1168)) - (((~(((g_143 || g_2469) ^ BOoOoeg_2469))) || (g_1217 || g_22)) ^ ((BOoOobg_1168 & BOoOodg_101) | (~(BOoOofg_143))))) ^ ((~(g_1171)) || (~((-(g_59))))))));
g_2469 = (~(((~((~((~((BOoOoeg_2469 ^ ((BOoOocg_1171 ^ g_1171) - (-(g_143)))))))))) << (~((~(((~(((-(((g_694 || (g_59 * BOoOodg_101)) - ((~((-(g_89)))) | (BOoOog_22 ^ g_1217))))) >> ((g_1168 || (g_2469 | BOoOofg_143)) & (-((~(((~(BOoOobg_1168)) * g_101))))))))) & (~(g_22))))))))));
g_143 = (~(((~(((g_59 | BOoOobg_1168) - (~(((BOoOoeg_2469 ^ g_1171) ^ BOoOofg_143)))))) - ((~((((((BOoOodg_101 * g_1217) || (-(g_101))) | g_2469) - (BOoOog_22 ^ BOoOocg_1171)) * (-((g_694 & (g_143 * (g_1168 - g_22)))))))) << (~(g_89))))));
if((g_89>-24)){
printf("g_22=%llu\n", (unsigned long long)g_22);
BOoOog_22 = (~(((((g_22 & (g_59 || (BOoOocg_1171 - g_89))) | (g_1217 | (g_143 >> BOoOoeg_2469))) ^ ((((-(BOoOofg_143)) ^ (~(BOoOobg_1168))) - (g_694 * BOoOog_22)) ^ (((g_1171 ^ BOoOodg_101) - g_2469) ^ g_101))) ^ g_1168)));
g_143 = (~(((((-(((g_694 >> BOoOofg_143) & (g_1217 * g_101)))) >> ((~((-((g_22 * (BOoOog_22 | BOoOodg_101)))))) - (-(g_1171)))) ^ (~((-((((~(g_89)) << (-(BOoOobg_1168))) | (~(g_2469)))))))) & (((~(((~(g_143)) << (~((~(BOoOoeg_2469))))))) & (-((g_1168 - g_59)))) || BOoOocg_1171))));
}
if((BOoOog_22<4294967295U)){
printf("g_1168=%llu\n", (unsigned long long)g_1168);
BOoOog_22 = (~((((((-(g_1217)) ^ ((~(BOoOoeg_2469)) >> BOoOog_22)) - ((g_101 - BOoOocg_1171) | BOoOobg_1168)) * ((~((BOoOodg_101 || (g_89 >> g_22)))) || (-((g_143 - (g_2469 | g_59)))))) >> (-((g_694 >> ((-((-(BOoOofg_143)))) ^ (~((g_1168 & g_1171))))))))));
g_1168 = (~((((-(g_22)) | (~(BOoOog_22))) | (~(((~((BOoOofg_143 >> BOoOoeg_2469))) << ((~((((~(BOoOodg_101)) - BOoOocg_1171) & ((~(g_694)) ^ (BOoOobg_1168 << g_1171))))) & (((g_143 ^ ((-(g_2469)) | g_101)) >> g_1217) & (~(((~((g_59 - g_89))) | (-(g_1168)))))))))))));
}
if((!(g_1168) && ((BOoOodg_101>-29257) || (g_1171<255)))){
i &= g_717;
                    printf("g_1171=%llu\n", (unsigned long long)g_1171);
BOoOoeg_2469 = (-(((~((-((((~(BOoOobg_1168)) * (g_59 ^ (~(g_1171)))) ^ (~((((-(BOoOodg_101)) << (g_694 * (g_22 >> (g_2469 - BOoOoeg_2469)))) | (~((~(BOoOofg_143)))))))))))) << (~((~(((~(g_1217)) | (-((~(((~(((BOoOog_22 & (g_143 * g_101)) | g_89))) << ((~(BOoOocg_1171)) * g_1168))))))))))))));
g_101 = (~((((-(g_143)) >> ((((BOoOodg_101 & g_694) * g_1217) * (g_89 * ((-((g_22 ^ BOoOocg_1171))) ^ (~((~((~((-(g_59))))))))))) * (-((~(BOoOoeg_2469)))))) & (~((((~((g_1171 * BOoOobg_1168))) & ((~((-((g_1168 || BOoOofg_143))))) & (g_101 << (~(g_2469))))) >> (~(BOoOog_22))))))));
BOoOodg_101 = (-(((~(BOoOog_22)) - (~(((BOoOofg_143 || (~((((~(g_22)) | (~((-(g_101))))) * (~(((g_89 >> (g_694 * (~(g_143)))) | ((~((((g_1217 ^ BOoOobg_1168) | BOoOocg_1171) ^ g_2469))) >> (g_59 ^ (BOoOodg_101 ^ BOoOoeg_2469)))))))))) & ((-(g_1171)) << (~(g_1168)))))))));
}
if((g_59>38)){
printf("g_101=%lld\n", (long long)g_101);
BOoOobg_1168 = (~(((((~(BOoOocg_1171)) | g_89) & (((g_22 | g_59) | (g_101 * ((g_694 << (BOoOodg_101 << g_1168)) ^ BOoOoeg_2469))) & (BOoOobg_1168 * ((-(g_143)) * g_1217)))) || (-((~(((~((g_2469 ^ (BOoOog_22 & BOoOofg_143)))) * (-((~(g_1171))))))))))));
g_143 = (-((((BOoOodg_101 || g_22) ^ ((g_59 >> BOoOofg_143) << (BOoOog_22 | g_2469))) * ((~(((g_101 - (g_1217 - g_1171)) & ((g_143 << (g_89 ^ g_1168)) << ((~((-(BOoOocg_1171)))) - ((~(g_694)) >> BOoOoeg_2469)))))) << (~(BOoOobg_1168))))));
}
if((!g_1168)){
printf("g_2469=%lld\n", (long long)g_2469);
BOoOofg_143 = (~((((g_1168 >> g_89) ^ BOoOoeg_2469) >> ((-((~(BOoOog_22)))) ^ ((~((((-((~((-(g_101)))))) | ((~(g_59)) || (((BOoOodg_101 | (BOoOocg_1171 * g_143)) || g_1217) * BOoOofg_143))) * (-((~(g_694))))))) | ((-(BOoOobg_1168)) - ((g_2469 || g_1171) << g_22)))))));
BOoOocg_1171 = (~((((~(BOoOobg_1168)) - (g_101 >> ((BOoOofg_143 & g_694) || (-(g_1171))))) | ((-(((g_59 ^ g_22) * g_1168))) ^ ((-(((~((g_143 || (~(BOoOog_22))))) ^ ((((~(g_1217)) || (BOoOodg_101 || BOoOocg_1171)) & g_89) << (~(BOoOoeg_2469)))))) - g_2469)))));
}
if(((BOoOog_22 < BOoOocg_1171) || (BOoOodg_101>-29257))){
printf("g_143=%llu\n", (unsigned long long)g_143);
g_2469 = (-(((-((~((~((~(((BOoOocg_1171 - BOoOog_22) << (g_1168 || g_2469)))))))))) || (((~(((g_694 >> g_1171) | (-(g_59))))) ^ ((~(BOoOodg_101)) >> (-(BOoOobg_1168)))) << (g_22 >> (((~((~((~((g_143 & g_89))))))) || (BOoOoeg_2469 - g_101)) * ((-((~(BOoOofg_143)))) >> (-(g_1217)))))))));
g_101 = (-(((~((~(g_143)))) ^ ((((~((-((BOoOoeg_2469 - BOoOofg_143))))) | (BOoOodg_101 >> BOoOocg_1171)) << (g_101 & (-((~(g_1171)))))) & ((~((~((g_1168 & g_59))))) - ((g_89 || (-((g_22 || BOoOog_22)))) & (g_694 & (((-(BOoOobg_1168)) * g_1217) >> g_2469))))))));
}
}
g_22 = BOoOog_22;
g_1168 = BOoOobg_1168;
                                   if (g_1217)
                    g_1171 = BOoOocg_1171;
g_101 = BOoOodg_101;
g_2469 = BOoOoeg_2469;
g_143 = BOoOofg_143;
                                                       if ((g_100<=47))
                    g_120[1] = func_3(l_9, (func_10(l_2[0], ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(g_18, l_2[0])), (func_19(l_2[0]) , (((g_1171 < g_120[1]) != g_89) & l_2[0])))) , l_9), g_1368[1]) != g_1168), l_2[0], g_1168, g_1540[1][0]);
                                       if (g_2431)
                    return g_1548[4][3][1];
}
static int32_t func_3(int32_t p_4, uint16_t p_5, int32_t p_6, uint8_t p_7, uint32_t p_8)
{
    const uint8_t l_2352 = 0UL;
    int16_t l_2357 = 0xCDFDL;
    int8_t l_2397 = (-6L);
    int32_t l_2415 = 5L;
    int32_t l_2421 = 0x1502036FL;
    int32_t l_2429[1];
    uint16_t l_2465 = 0UL;
    uint8_t l_2515 = 0x8DL;
    int i;
    for (i = 0; i < 1; i++)
        l_2429[i] = 0xDAD1BFA1L;
                                                                           while ((!(g_2100) || !((l_2397 < g_100))) )
{
if (p_4) printf("index = [%d][%d][%d]\n", i, g_2100, l_2421);
}
                    if (((g_143<=4294967295U) && (g_2469>=1)))
                    for (g_717 = (-20); (g_717 <= 1); ++g_717)
    {
        int8_t l_2362 = 0xDCL;
        uint16_t l_2371 = 0UL;
        int32_t l_2376 = 1L;
        uint32_t l_2398[6][5];
        int32_t l_2418 = 8L;
        int32_t l_2419 = (-1L);
        int32_t l_2420 = 0xB04F07EDL;
        uint32_t l_2422 = 0x9AA580D4L;
        int32_t l_2511 = 1L;
        int32_t l_2512[4][8][3] = {{{0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}}, {{0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}}, {{0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}}, {{0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}, {0x23D4EB6DL, 0x23D4EB6DL, 0L}}};
        int16_t l_2514[7][2] = {{(-2L), 0xE089L}, {(-2L), 0xE089L}, {(-2L), 0xE089L}, {(-2L), 0xE089L}, {(-2L), 0xE089L}, {(-2L), 0xE089L}, {(-2L), 0xE089L}};
        int i, j, k;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 5; j++)
                l_2398[i][j] = 1UL;
        }
        p_4 = ((l_2352 <= g_1548[9][4][0]) & (safe_add_func_int16_t_s_s(g_89, (safe_mul_func_uint32_t_u_u(4294967295UL, ((l_2357 && (((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_2362, ((((((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_u(((l_2357 <= g_849[0]) != l_2357), p_8)) ^ l_2362) == g_1368[1]) ^ 0x92AB813CL), 0x59L)), p_7)) & l_2362), 8)) >= g_59) , l_2357) ^ (-8L)) && 0L) != g_143))), p_4)) == 0x1DE1FACEL) == l_2371)) != 1L))))));
        l_2376 = ((safe_mod_func_int32_t_s_s(g_101, (safe_add_func_uint32_t_u_u((p_5 <= 0xDBA3D591L), g_1168)))) < l_2357);
        for (g_1168 = 0; (g_1168 >= 36); g_1168++)
        {
            uint32_t l_2389 = 0UL;
            int32_t l_2417[8] = {1L, 1L, 0x595B0FA1L, 1L, 1L, 0x595B0FA1L, 1L, 1L};
            int16_t l_2504 = 5L;
            int32_t l_2505[8][2][3] = {{{0x9C66CDCDL, 0x3F98A697L, 4L}, {0x9C66CDCDL, 0x3F98A697L, 4L}}, {{0x9C66CDCDL, 0x3F98A697L, 4L}, {0x9C66CDCDL, 0x3F98A697L, 4L}}, {{0x9C66CDCDL, 0x3F98A697L, 4L}, {0x9C66CDCDL, 0x3F98A697L, 4L}}, {{0x9C66CDCDL, 0x3F98A697L, 4L}, {0x9C66CDCDL, 0x3F98A697L, 4L}}, {{0x9C66CDCDL, 0x3F98A697L, 4L}, {0x9C66CDCDL, 0x3F98A697L, 4L}}, {{0x9C66CDCDL, 0x3F98A697L, 4L}, {0x9C66CDCDL, 0x3F98A697L, 4L}}, {{0x9C66CDCDL, 0x3F98A697L, 4L}, {0x9C66CDCDL, 0x3F98A697L, 4L}}, {{0x9C66CDCDL, 0x3F98A697L, 4L}, {0x9C66CDCDL, 0x3F98A697L, 4L}}};
            int16_t l_2513 = 1L;
            int i, j, k;
            for (g_1171 = 0; (g_1171 <= 44); g_1171 = safe_add_func_int8_t_s_s(g_1171, 2))
            {
                uint32_t l_2381 = 1UL;
                int32_t l_2416[6];
                uint32_t l_2436 = 0x4366B639L;
                uint32_t l_2466 = 0x760CFC11L;
                int32_t l_2502 = 0x2781DDD3L;
                int i;
                for (i = 0; i < 6; i++)
                    l_2416[i] = 5L;
                if (((l_2381 > p_4) || (safe_add_func_uint16_t_u_u(((((((((~p_6) != ((safe_add_func_int32_t_s_s((safe_sub_func_uint32_t_u_u(g_2184[2][0], (l_2389 == (p_5 < l_2362)))), (p_7 > (safe_sub_func_int8_t_s_s((safe_mod_func_int32_t_s_s((+((((safe_rshift_func_int16_t_s_u((l_2381 && (-1L)), g_694)) == 0UL) < l_2362) , g_97[2])), 0xE2D14996L)), l_2381))))) ^ l_2397)) && p_5) && 0x6F70B1C1L) != l_2389) , 0UL) == l_2357) == l_2389), l_2398[3][4]))))
                {
                    int32_t l_2413 = 0L;
                    int32_t l_2425 = 0x8DE3555FL;
                    int32_t l_2427 = 1L;
                    int32_t l_2428 = (-2L);
                    if ((safe_sub_func_int32_t_s_s((l_2362 , ((~g_2003[4]) != p_4)), (safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s(g_2003[0])), 6)))))
                    {
                        p_4 = p_5;
                        l_2376 = (((safe_sub_func_uint32_t_u_u(2UL, (((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((p_5 , (0x2E78BE00L <= (((safe_mod_func_int32_t_s_s((g_2184[1][1] > ((l_2413 ^ (1L > ((((0x544EL ^ p_4) , (g_1168 == p_4)) , l_2398[1][1]) < g_97[5]))) == l_2413)), 4294967295UL)) & p_7) || g_89))) & l_2352) && p_4), 65526UL)), g_2254)) , (-1L)) | g_2414))) == p_8) <= p_5);
                        if (p_5)
                            break;
                    }
                    else
                    {
                        if (l_2413)
                            break;
                        if (g_1482[2][1][1])
                            continue;
                    }
                    l_2422--;
                    for (l_2420 = 6; (l_2420 >= 1); l_2420 -= 1)
                    {
                        int32_t l_2426 = (-1L);
                        int32_t l_2430 = (-1L);
                        int i;
                        l_2417[(l_2420 + 1)] = g_97[l_2420];
                        g_2431--;
                    }
                }
                else
                {
                    if (l_2416[5])
                        break;
                    for (p_6 = 0; (p_6 == 24); p_6 = safe_add_func_int32_t_s_s(p_6, 5))
                    {
                        return p_5;
                    }
                }
                g_2470[0][0][5] &= (0x39A6L >= (l_2436 , (safe_add_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(p_4, (safe_sub_func_int32_t_s_s(l_2418, (safe_sub_func_uint32_t_u_u(((g_101 , (((safe_mod_func_uint32_t_u_u((((safe_add_func_int16_t_s_s(((((safe_add_func_uint16_t_u_u((((0UL | ((((((safe_mod_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((((((safe_lshift_func_int8_t_s_s((p_4 , ((safe_mod_func_int16_t_s_s(((p_7 > ((safe_rshift_func_int16_t_s_s(((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(g_777, l_2465)), l_2371)) || 6UL), 7)) < 0x2256L)) < 0x4FL), g_1482[2][2][1])) > 0x8C0EL)), 5)) && 255UL) , l_2417[0]) || g_777) != p_5), g_120[1])) <= p_4), l_2466)) ^ p_8) , g_100) != p_7) != g_2467) & l_2417[0])) , l_2416[3]) && l_2418), p_6)) > 0x8D34L) , p_4) <= l_2436), l_2389)) , g_2468) < 6UL), 0xBA6FA250L)) , g_2469) , p_8)) , l_2398[2][1]), p_8)))))), p_5))));
                for (l_2420 = (-4); (l_2420 < (-28)); l_2420 = safe_sub_func_int32_t_s_s(l_2420, 2))
                {
                    uint16_t l_2499 = 0x99C0L;
                    int32_t l_2501 = 0xEDED4BBBL;
                    int32_t l_2503 = (-1L);
                    int32_t l_2506 = 0L;
                    int32_t l_2507 = (-1L);
                    uint16_t l_2508 = 0xF71CL;
                    if (((((safe_rshift_func_int8_t_s_u((+p_5), (safe_add_func_int32_t_s_s((l_2417[7] == ((l_2417[6] || p_5) | ((safe_lshift_func_uint8_t_u_s(l_2420, (((safe_lshift_func_uint16_t_u_s(0x21DFL, p_6)) > g_2431) == (safe_mod_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(l_2417[6], 0L)) & p_8), p_8))))) & p_4))), 2L)))) == g_935) , g_1540[1][0]) ^ l_2417[6]))
                    {
                        int16_t l_2498 = 0x1DD5L;
                        int32_t l_2500[5][8] = {{(-7L), 0x47EEDBA2L, 8L, 1L, 3L, 2L, 3L, 1L}, {(-7L), 0x47EEDBA2L, 8L, 1L, 3L, 2L, 3L, 1L}, {(-7L), 0x47EEDBA2L, 8L, 1L, 3L, 2L, 3L, 1L}, {(-7L), 0x47EEDBA2L, 8L, 1L, 3L, 2L, 3L, 1L}, {(-7L), 0x47EEDBA2L, 8L, 1L, 3L, 2L, 3L, 1L}};
                        int i, j;
                        l_2500[1][4] &= (~(l_2417[6] != (1UL < ((p_5 < (((p_6 <= ((safe_add_func_int8_t_s_s((-4L), ((((((((~((1UL ^ ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s(l_2397, ((safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(l_2498, l_2466)), (-10L))) != 0UL))), p_8)) & l_2418)) == g_2003[3])) ^ g_1168) >= l_2418) > 1L) , p_8) , p_8) , 0x1FL) & p_4))) == 0x1FFFL)) , (-1L)) ^ 65535UL)) && l_2499))));
                        ++l_2508;
                        l_2418 &= g_59;
                        return l_2429[0];
                    }
                    else
                    {
                        return l_2371;
                    }
                }
            }
            l_2515++;
            if (p_5)
            {
                uint32_t l_2518 = 0x2412710BL;
                --l_2518;
            }
            else
            {
                uint16_t l_2528[2][10] = {{6UL, 6UL, 0UL, 0UL, 65535UL, 0UL, 0UL, 6UL, 6UL, 0UL}, {6UL, 6UL, 0UL, 0UL, 65535UL, 0UL, 0UL, 6UL, 6UL, 0UL}};
                uint32_t l_2534[6][5] = {{0x089DB86DL, 2UL, 0x089DB86DL, 2UL, 0x089DB86DL}, {0x089DB86DL, 2UL, 0x089DB86DL, 2UL, 0x089DB86DL}, {0x089DB86DL, 2UL, 0x089DB86DL, 2UL, 0x089DB86DL}, {0x089DB86DL, 2UL, 0x089DB86DL, 2UL, 0x089DB86DL}, {0x089DB86DL, 2UL, 0x089DB86DL, 2UL, 0x089DB86DL}, {0x089DB86DL, 2UL, 0x089DB86DL, 2UL, 0x089DB86DL}};
                int i, j;
                p_4 = (1UL == ((((((safe_lshift_func_int16_t_s_s(((((((((((safe_rshift_func_uint16_t_u_s((g_2254 & (safe_unary_minus_func_uint8_t_u((p_5 || ((safe_add_func_uint32_t_u_u((((l_2528[0][8] == (((+l_2429[0]) < (((safe_lshift_func_int8_t_s_s(0x1BL, 3)) < ((((safe_mod_func_uint32_t_u_u((((l_2419 == (l_2534[5][3] >= g_2470[0][0][5])) <= l_2534[1][2]) == l_2534[3][0]), 4294967290UL)) != l_2429[0]) > 1UL) <= p_6)) || 4294967286UL)) ^ 0x64L)) == 0xE152L) && g_1548[4][6][2]), l_2534[0][2])) , (-1L)))))), p_4)) & g_849[0]) || 4294967294UL) > 0x45B2L) , p_6) < 0x77B3L) && g_1368[1]) & 1L) & g_1171) & 0x24A1L), l_2534[2][4])) && l_2398[3][4]) , l_2528[1][4]) == g_2100) , l_2515) , 7L));
                for (g_100 = 0; (g_100 < 17); ++g_100)
                {
                    for (g_777 = 0; (g_777 <= 4); g_777 += 1)
                    {
                        if (l_2417[6])
                            break;
                        g_120[0] = ((safe_unary_minus_func_int32_t_s((-3L))) >= 0x8490L);
                    }
                    if (g_2470[0][0][5])
                        {
if (g_1217)
                            break;
                    continue;}
                }
            }
        }
        l_2429[0] = ((safe_add_func_uint32_t_u_u((p_4 < 0xCEDAL), (safe_add_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(0x5F6C668FL)), (+(safe_sub_func_uint32_t_u_u((l_2515 <= ((+(((safe_unary_minus_func_int32_t_s((safe_add_func_uint8_t_u_u(p_8, (safe_mod_func_int32_t_s_s((0x9434C9EBL ^ (safe_add_func_uint16_t_u_u((((g_2100 && (g_1168 < (safe_lshift_func_uint16_t_u_s((((l_2397 < 0x8FL) && p_6) < p_8), l_2429[0])))) ^ 0xE70B22DFL) == g_849[0]), 0xF98EL))), 0xFC9ABC26L)))))) && g_1540[1][0]) , 4294967292UL)) | p_4)), l_2357))))))) < 65535UL);
    }
    return l_2465;
}
static int16_t func_10(uint32_t p_11, uint8_t p_12, int32_t p_13)
{
g_1171 += 1;
}
static int32_t func_19(int16_t p_20)
{
    uint32_t l_21 = 8UL;
    g_22 = l_21;
    g_1482[2][1][1] |= (safe_rshift_func_uint16_t_u_s(p_20, func_25(l_21)));
    return p_20;
}
static int16_t func_25(uint16_t p_26)
{
    uint32_t l_27 = 4294967294UL;
    l_27 = 0x31AA08ECL;
    g_120[1] = (0x0415L > ((func_28((l_27 , (safe_mod_func_int16_t_s_s(func_33((safe_mod_func_int32_t_s_s(((func_38((l_27 < g_22), ((safe_lshift_func_int16_t_s_u(1L, 3)) , (((((p_26 && func_46(((((safe_lshift_func_uint8_t_u_u(0UL, (func_54((0x373CL && (0x7530L < 2UL)), p_26, p_26, l_27) >= g_18))) == g_22) >= 0xD45AA775L) > l_27), p_26, p_26, g_18, l_27)) != p_26) < p_26) != 0xE6DB759FL) != g_22)), l_27, g_22, l_27) ^ p_26) != p_26), 0xDA6413EFL)), p_26), g_18))), p_26) ^ 5UL) == g_1168));
    for (g_59 = 26; (g_59 == 51); g_59++)
    {
        uint8_t l_1466 = 254UL;
        int32_t l_1481 = 7L;
        g_120[1] = l_1466;
        l_1481 = (((g_97[2] > p_26) | (safe_add_func_uint8_t_u_u(0x65L, ((!((safe_rshift_func_int8_t_s_s(((0x0584L < (l_1466 && (safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((((!(p_26 , ((safe_mod_func_uint8_t_u_u(l_1466, g_22)) , (safe_sub_func_int8_t_s_s((0xCDL > g_694), 0xCFL))))) < 255UL) < 0xB6L), l_1466)), p_26)))) , 0x19L), l_1466)) > 0xBFD8L)) == 0UL)))) >= l_27);
    }
    return p_26;
}
static int16_t func_28(int32_t p_29, int32_t p_30)
{
    int32_t l_1461 = 1L;
    int16_t l_1462[7][1];
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
            { int16_t BCoCog_101 = (~((((-(l_1461)) | g_22) / (~(((~((g_777 / g_540))) || g_101))))));
int32_t BCoCobl_1461 = (~((((~((~(g_101)))) ^ (-(((g_540 & (~(BCoCog_101))) || (~(g_777)))))) % (~((l_1461 << g_22))))));
int16_t BCoCocg_540 = (~(((((BCoCog_101 & (~(BCoCobl_1461))) || g_540) - (~(l_1461))) || (-((-(((~(g_777)) | (g_101 - g_22)))))))));
uint32_t BCoCodg_22 = (~((g_101 + (((g_540 - BCoCog_101) & g_22) % ((g_777 | BCoCobl_1461) && (BCoCocg_540 || l_1461))))));
uint32_t BCoCoeg_777 = (-((((~(((-(BCoCocg_540)) || (~((g_540 | g_777)))))) + (-(BCoCog_101))) - ((-(((~((BCoCobl_1461 && l_1461))) || (g_101 ^ (-(BCoCodg_22)))))) - (-(g_22))))));
                                   if (g_540)
          if((g_22>=8U)){
BCoCog_101 = g_101;
BCoCobl_1461 = l_1461;
BCoCocg_540 = g_540;
BCoCodg_22 = g_22;
BCoCoeg_777 = g_777;
g_101 = (~(((~(((-(BCoCocg_540)) | ((~(((l_1461 & (g_22 && BCoCodg_22)) - (~(BCoCog_101))))) || g_777)))) + ((-((~((~((BCoCobl_1461 / (g_101 | BCoCoeg_777)))))))) % (-((~((~((~(g_540))))))))))));
l_1461 = (~((((((-(l_1461)) | (g_777 ^ BCoCoeg_777)) ^ (BCoCog_101 | BCoCobl_1461)) / (~(g_540))) % ((~((g_101 && (~(BCoCocg_540))))) & (~((g_22 || (~(BCoCodg_22)))))))));
g_540 = (~(((~((~(((g_101 - BCoCog_101) | BCoCodg_22))))) >> (((~((g_22 & g_777))) && (~((l_1461 ^ (~(g_540)))))) + (~((~(((BCoCocg_540 | (-((~((~(BCoCobl_1461))))))) && BCoCoeg_777)))))))));
                                    while (((l_1461<=-5) && (g_22>8U)) )
{
{
        for (j = 0; j < 3; j++)
        {
            for (p_29 = 0; p_29 < 4; p_29++)
            {
                transparent_crc(g_1482[BCoCobl_1461][j][p_29], "g_1482[BCoCobl_1461][j][p_29]", i);
                if (i) printf("index = [%d][%d][%d]\n", BCoCobl_1461, j, p_29);
            }
        }
    }
}
          g_22 = (-((((-(g_22)) + ((((BCoCog_101 / g_540) + l_1461) || BCoCodg_22) + BCoCocg_540)) || (~((((BCoCobl_1461 || g_101) || g_777) | (-(BCoCoeg_777))))))));
g_777 = (~(((((BCoCog_101 / (~(BCoCobl_1461))) && g_777) - (BCoCodg_22 & BCoCocg_540)) || (~(((g_540 && (~(BCoCoeg_777))) | ((g_101 + l_1461) && g_22)))))));
                               uint32_t BHoHog_22 = (~((l_1461 | ((g_777 || (~((~((g_22 ^ g_540)))))) || g_101))));
int32_t BHoHobl_1461 = (~(((~((~((g_22 ^ (~(g_101))))))) && (~((((g_540 || g_777) || l_1461) >> (~((~(BHoHog_22))))))))));
int16_t BHoHocg_101 = (~(((~((g_101 / (~(g_777))))) << ((~(((l_1461 ^ BHoHobl_1461) | BHoHog_22))) && (g_22 | g_540)))));
int16_t BHoHodg_540 = (~(((~(((~((g_101 & g_22))) - ((~((~(g_540)))) || ((BHoHog_22 && (~((BHoHocg_101 || BHoHobl_1461)))) ^ l_1461))))) | (~((~(g_777)))))));
uint32_t BHoHoeg_777 = (~((((~((BHoHobl_1461 && BHoHocg_101))) / (l_1461 ^ g_777)) || (((BHoHodg_540 & g_101) / g_540) & (~((g_22 | BHoHog_22)))))));
if(g_540){
BHoHog_22 = g_22;
                                   if ((g_22 > g_777))
          LABEL_HoHof: BHoHobl_1461 = l_1461;
BHoHocg_101 = g_101;
BHoHodg_540 = g_540;
                               int32_t BPoPogl_1461 = (~((((g_540 - g_101) ^ g_22) << (l_1461 || (-((-(g_777))))))));
uint32_t BPoPohg_777 = (~(((g_101 | (g_540 || (~(BPoPogl_1461)))) || ((l_1461 * g_22) | g_777))));
int16_t BPoPoig_540 = (~(((((l_1461 ^ g_101) & BPoPohg_777) - (~((g_540 - (BPoPogl_1461 | g_777))))) - g_22)));
uint32_t BPoPojg_22 = (~(((~((((BPoPogl_1461 | BPoPoig_540) - g_101) & ((g_22 | g_540) || (-((~(l_1461)))))))) * ((~((-(BPoPohg_777)))) * (~(g_777))))));
int16_t BPoPokg_101 = (~(((~((~((~(((-(BPoPojg_22)) & (((BPoPoig_540 | g_22) - g_101) | (~((-(BPoPogl_1461)))))))))))) | (~((~(((~((-((l_1461 | BPoPohg_777))))) & ((~(g_777)) ^ g_540)))))))));
if(((BPoPojg_22<=4294967292U) && (g_540 < BPoPokg_101))){
BPoPogl_1461 = l_1461;
LABEL_PoPol: BPoPohg_777 = g_777;
BPoPoig_540 = g_540;
BPoPojg_22 = g_22;
BPoPokg_101 = g_101;
l_1461 = (~(((-(((~(BPoPogl_1461)) * BPoPohg_777))) | (((~(g_777)) || ((-((BPoPojg_22 ^ g_22))) | BPoPoig_540)) ^ (((l_1461 & BPoPokg_101) ^ (~(g_540))) ^ g_101)))));
g_777 = (~(((BPoPohg_777 - BPoPoig_540) - (((g_540 || BPoPojg_22) & (l_1461 & g_101)) & (BPoPogl_1461 ^ (-((~(((BPoPokg_101 >> (~(g_22))) * g_777))))))))));
g_540 = (~(((BPoPoig_540 & ((-(((~((g_777 ^ ((g_101 || BPoPokg_101) ^ g_22)))) * l_1461))) ^ (g_540 || (-((BPoPohg_777 - BPoPojg_22)))))) - (~(BPoPogl_1461)))));
g_22 = (-(((((~(BPoPojg_22)) * g_22) - (~((~(((BPoPokg_101 * BPoPohg_777) | (g_101 ^ (l_1461 & (BPoPogl_1461 | g_540))))))))) || (BPoPoig_540 || g_777))));
g_101 = (-(((-((~((BPoPokg_101 - g_777))))) | (((~((~(((BPoPohg_777 || g_101) ^ (~((~(BPoPogl_1461))))))))) ^ (BPoPoig_540 * (~(l_1461)))) | (g_22 | (BPoPojg_22 & (~(g_540))))))));
if(!(BPoPoig_540)){
printf("g_540=%lld\n", (long long)g_540);
g_777 = (~(((-((g_777 | BPoPojg_22))) || ((((-((BPoPokg_101 & (~((BPoPohg_777 || (~(BPoPoig_540)))))))) & g_540) & (BPoPogl_1461 & (g_101 * g_22))) || (~(l_1461))))));
}
if(((g_101 && (l_1461 < BPoPokg_101)) && (!g_101))){
printf("g_22=%llu\n", (unsigned long long)g_22);
g_540 = (~((((g_101 - ((~(((-(BPoPohg_777)) << BPoPokg_101))) & (g_777 & (BPoPoig_540 >> (BPoPogl_1461 | (~(g_540))))))) ^ (BPoPojg_22 << l_1461)) ^ (-(g_22)))));
g_777 = (~((((BPoPohg_777 || g_777) || (-((~(l_1461))))) * (((-(g_101)) * ((-(BPoPokg_101)) << BPoPoig_540)) - ((g_540 * (~(g_22))) >> (BPoPogl_1461 - BPoPojg_22))))));
continue;
}
if((g_101 && (!g_22))){
printf("g_101=%lld\n", (long long)g_101);
goto LABEL_HoHof;
}
}
l_1461 = BPoPogl_1461;
g_777 = BPoPohg_777;
g_540 = BPoPoig_540;
g_22 = BPoPojg_22;
g_101 = BPoPokg_101;
          BHoHoeg_777 = g_777;
g_22 = (~(((~((l_1461 | g_22))) & (~(((((~((~((~(g_540)))))) - ((~((BHoHobl_1461 / BHoHog_22))) || g_777)) - g_101) && (((~(BHoHocg_101)) / (~(BHoHodg_540))) | BHoHoeg_777)))))));
l_1461 = (~((((BHoHodg_540 / g_22) && l_1461) / ((BHoHoeg_777 & (g_101 - (g_777 & g_540))) || ((~((~(((~(BHoHocg_101)) ^ BHoHobl_1461))))) - BHoHog_22)))));
                                    if (!((g_22 > g_777)) )
{
for (BHoHobl_1461 = 0; BHoHobl_1461 < 7; BHoHobl_1461++)
    {
        for (g_2469 = 0; g_2469 < 1; g_2469++)
            l_1462[BHoHobl_1461][g_2469] = 0L;
    };
}
          g_101 = (~((((~((~(((g_101 / (g_540 & g_777)) ^ BHoHobl_1461))))) - (BHoHog_22 / (~((~(((~(l_1461)) - BHoHodg_540))))))) - (~((~((((~(BHoHoeg_777)) || g_22) ^ (~((~(BHoHocg_101))))))))))));
g_540 = (~(((((~(l_1461)) ^ (~((BHoHobl_1461 && (BHoHodg_540 & g_101))))) ^ (~((BHoHocg_101 || (~(g_22)))))) & ((g_540 / (g_777 - BHoHog_22)) - (~(BHoHoeg_777))))));
g_777 = (~((((~((BHoHocg_101 || ((~(BHoHodg_540)) - l_1461)))) / ((((~(g_777)) | BHoHoeg_777) - (~(BHoHog_22))) || g_22)) && (g_540 && ((~(BHoHobl_1461)) || g_101)))));
if(((!g_777) || (!BHoHodg_540))){
printf("g_22=%llu\n", (unsigned long long)g_22);
goto LABEL_HoHof;
}
if((BHoHoeg_777 > BHoHog_22)){
printf("l_1461=%lld\n", (long long)l_1461);
break;
}
if(((BHoHobl_1461 > BHoHocg_101) || (g_777>4294967294U))){
printf("g_101=%lld\n", (long long)g_101);
break;
}
if(!(!((!BHoHobl_1461)))){
printf("g_540=%lld\n", (long long)g_540);
continue;
}
if((g_540 && (BHoHog_22 < g_777))){
g_101 += 1;
          printf("g_777=%llu\n", (unsigned long long)g_777);
g_777 = (~(((~(BHoHocg_101)) - ((~((~(g_101)))) ^ ((~((~(((~(BHoHoeg_777)) & (g_540 << ((~(BHoHog_22)) >> g_777))))))) & ((l_1461 / BHoHobl_1461) ^ (~((BHoHodg_540 >> g_22)))))))));
continue;
}
}
g_22 = BHoHog_22;
l_1461 = BHoHobl_1461;
g_101 = BHoHocg_101;
                                    while ((g_22>4294967295U) )
{
g_2431 += 1;
}
          g_540 = BHoHodg_540;
                                   if ((g_22<=4294967295U))
          g_777 = BHoHoeg_777;
          if((((g_101<=6413) && (!BCoCobl_1461)) && !((g_22<4294967295U)))){
printf("l_1461=%lld\n", (long long)l_1461);
g_777 = (~((((-(((BCoCocg_540 || ((g_101 || (BCoCobl_1461 << BCoCog_101)) >> g_777)) && BCoCodg_22))) | (-(g_540))) - ((l_1461 && (~(BCoCoeg_777))) && (-(g_22))))));
l_1461 = (-((((-((~(((~((-(BCoCocg_540)))) / g_22))))) && (~((((~(g_777)) << (-(((g_540 << BCoCobl_1461) % BCoCoeg_777)))) & (~(g_101)))))) + (l_1461 / (~(((~(BCoCodg_22)) / BCoCog_101)))))));
}
if((BCoCodg_22>8U)){
for (i = 0; i < 4; i++)
            {
for (p_29 = 0; p_29 < 3; p_29++)
            g_1368[p_29] = 0x4EA06463L;
          transparent_crc(g_1482[l_1461][i][i], "g_1482[l_1461][i][i]", i);
                if (i) printf("index = [%d][%d][%d]\n", l_1461, i, i);
            };
          printf("g_777=%llu\n", (unsigned long long)g_777);
BCoCodg_22 = (~((((~((-(l_1461)))) | ((~((~((BCoCog_101 >> ((~(BCoCobl_1461)) || g_540)))))) | (-(((g_22 - (g_101 | BCoCodg_22)) & ((-(BCoCoeg_777)) || g_777)))))) - (~(BCoCocg_540)))));
break;
}
}
g_101 = BCoCog_101;
l_1461 = BCoCobl_1461;
g_540 = BCoCocg_540;
g_22 = BCoCodg_22;
                                    if ((!g_777) )
{
{
                    for (g_100 = 0; (g_100 <= 5); g_100 += 1)
                    {
                        return p_30;
                    }
                    return g_120[1];
                }
}
          g_777 = BCoCoeg_777;
          l_1462[i][j] = 0L;}
    }
    for (g_101 = 10; (g_101 == (-12)); g_101 = safe_sub_func_uint8_t_u_u(g_101, 9))
    {
        uint32_t l_1447 = 0xDBB284DBL;
        int32_t l_1463 = 0xE4B3772FL;
        l_1463 |= ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((l_1447 != (safe_add_func_int8_t_s_s(((((safe_mod_func_uint16_t_u_u(((l_1447 >= (safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((g_540 > (safe_add_func_uint8_t_u_u(g_22, (0x5103L >= (safe_mul_func_uint32_t_u_u((((+l_1447) && g_777) , l_1461), (0L == 0xFFC0EF70L))))))), 4)) > g_97[2]), p_29))) & p_30), p_30)) < p_29) && 255UL) < 8L), g_540))) , 0x1C47L), l_1461)), l_1462[4][0])) != l_1462[0][0]);
    }
                                                                           while ((!g_540) )
{
p_30 &= (safe_mod_func_uint32_t_u_u(g_694, 0xE4729DD1L));
}
          if (g_540)
          return p_29;
}
static int16_t func_33(uint32_t p_34, int16_t p_35)
{
    int8_t l_725[4] = {0x6CL, (-1L), 0x6CL, (-1L)};
    int32_t l_778 = 0L;
    int8_t l_790 = 0xCFL;
    int32_t l_793 = (-10L);
    uint32_t l_877[3][1];
    int8_t l_880 = 0x4CL;
    int32_t l_919 = 0x24F96B7BL;
    int32_t l_922 = 1L;
    uint32_t l_940[8] = {0x70725F80L, 0x971E3B31L, 0x70725F80L, 0x971E3B31L, 0x70725F80L, 0x971E3B31L, 0x70725F80L, 0x971E3B31L};
    uint32_t l_980 = 0xC75D6C4FL;
    uint8_t l_1007 = 0x6CL;
    uint32_t l_1052 = 0xC1E7B1A1L;
    int8_t l_1191[5] = {(-3L), 2L, (-3L), 2L, (-3L)};
    uint32_t l_1281 = 0x7B51DD50L;
    int32_t l_1327 = 0xC40777EBL;
    int32_t l_1329 = 0x90371E5EL;
    uint32_t l_1423 = 0UL;
    uint32_t l_1433 = 18446744073709551615UL;
    int32_t l_1439[6];
    int i, j;
    for (g_59 = 0; (g_59 != 4); ++g_59)
    {
        uint8_t l_722 = 0xE0L;
        int32_t l_770 = 0x6E81370EL;
        uint32_t l_779 = 1UL;
        int32_t l_792 = 0x2E89F638L;
        if ((safe_lshift_func_int16_t_s_u((p_35 <= l_722), (safe_sub_func_int8_t_s_s(((l_725[2] <= ((((safe_sub_func_int32_t_s_s(g_22, (safe_mod_func_uint32_t_u_u((0x7ABE5FAFL >= ((safe_sub_func_uint8_t_u_u(g_120[1], l_722)) , ((safe_lshift_func_int8_t_s_u(l_722, (((((((safe_lshift_func_int8_t_s_s(g_22, 3)) | l_725[2]) || g_89) >= p_35) <= g_97[5]) , l_722) >= 4294967295UL))) == g_694))), l_725[2])))) >= p_35) ^ 0UL) != 8L)) ^ 0x0968FE10L), p_34)))))
        {
            uint32_t l_749 = 4294967288UL;
            if ((~(safe_add_func_uint32_t_u_u(((0L != (((l_725[2] || (safe_sub_func_int8_t_s_s(0x65L, (safe_mod_func_uint32_t_u_u(p_34, l_722))))) ^ ((safe_add_func_uint16_t_u_u((g_717 , (safe_lshift_func_int8_t_s_u((0xA7L & 6L), 0))), (((p_35 == g_143) >= g_18) < g_101))) < (-1L))) < p_35)) , 0x11329388L), 4294967295UL))))
            {
                int32_t l_769[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_769[i] = 0x804970A5L;
                g_120[1] = 1L;
                if (p_35)
                    continue;
                l_749 = (safe_rshift_func_uint16_t_u_u(g_97[2], 13));
                l_770 = (safe_lshift_func_int8_t_s_s((5UL >= (0UL < (safe_add_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((g_18 != (safe_sub_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((safe_mod_func_int8_t_s_s((safe_mod_func_int32_t_s_s(0x5B48709BL, ((safe_rshift_func_int16_t_s_s(g_18, p_35)) || 3L))), (safe_sub_func_int32_t_s_s(g_694, ((((safe_rshift_func_int16_t_s_u(p_35, 7)) || g_18) || l_769[0]) <= p_34))))))), g_22))), 6)) != p_35) != g_100), l_722)))), p_34));
            }
            else
            {
                int16_t l_775 = (-4L);
                int32_t l_776 = (-3L);
for (l_793 = 0; l_793 < 10; l_793++)
            {
                transparent_crc(g_2470[l_922][l_922][l_793], "g_2470[l_922][l_922][l_793]", g_2100);
                if (g_2100) {
{
                        int32_t l_1358 = 0x27225A3DL;
                        --g_1171;
                        if (l_1052)
                            break;
                    }
                    printf("index = [%d][%d][%d]\n", l_922, l_922, l_793);}
            }
if (l_749)
                        break;
                    ;
                    g_777 = ((((g_143 ^ (l_725[2] , (0xB43536D7L > 0x43474B68L))) >= (((g_18 < ((safe_add_func_int8_t_s_s(l_722, 0xFAL)) & (safe_mod_func_int8_t_s_s(((((((l_775 | l_776) || g_101) || g_89) , p_34) <= 6L) <= 0x62L), 0x36L)))) && g_143) > 0x8EL)) != p_34) == p_34);
            }
            --l_779;
        }
        else
        {
            int16_t l_786 = 8L;
            int32_t l_789 = 2L;
            int32_t l_791 = 0xB2B08DC3L;
            uint32_t l_794 = 0x67A078F5L;
for (g_1171 = 0; (g_1171 <= 4); g_1171 += 1)
                    {
                        int i;
                        return g_120[g_1171];
                    };
                    l_778 = (safe_rshift_func_int16_t_s_u(g_717, 9));
for (g_2431 = 26; (g_2431 == 51); g_2431++)
    {
        uint8_t l_1466 = 254UL;
        int32_t l_1481 = 7L;
        g_120[1] = l_1466;
        l_1481 = (((g_97[2] > g_1217) | (safe_add_func_uint8_t_u_u(0x65L, ((!((safe_rshift_func_int8_t_s_s(((0x0584L < (l_1466 && (safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s((((!(g_1217 , ((safe_mod_func_uint8_t_u_u(l_1466, l_1281)) , (safe_sub_func_int8_t_s_s((0xCDL > g_540), 0xCFL))))) < 255UL) < 0xB6L), l_1466)), g_1217)))) , 0x19L), l_1466)) > 0xBFD8L)) == 0UL)))) >= l_794);
    };
                    if (p_34)
                    {
if ((l_1281 == g_540))
    {
        int16_t l_801[8][10] = {{0xBFACL, 0L, (-1L), (-1L), 0L, 0xBFACL, 0L, (-1L), (-1L), 0L}, {0xBFACL, 0L, (-1L), (-1L), 0L, 0xBFACL, 0L, (-1L), (-1L), 0L}, {0xBFACL, 0L, (-1L), (-1L), 0L, 0xBFACL, 0L, (-1L), (-1L), 0L}, {0xBFACL, 0L, (-1L), (-1L), 0L, 0xBFACL, 0L, (-1L), (-1L), 0L}, {0xBFACL, 0L, (-1L), (-1L), 0L, 0xBFACL, 0L, (-1L), (-1L), 0L}, {0xBFACL, 0L, (-1L), (-1L), 0L, 0xBFACL, 0L, (-1L), (-1L), 0L}, {0xBFACL, 0L, (-1L), (-1L), 0L, 0xBFACL, 0L, (-1L), (-1L), 0L}, {0xBFACL, 0L, (-1L), (-1L), 0L, 0xBFACL, 0L, (-1L), (-1L), 0L}};
        int32_t l_821[9][7] = {{0x9B3BBBB0L, 0x33ED253BL, 2L, 4L, 2L, 0x33ED253BL, 0x9B3BBBB0L}, {0x9B3BBBB0L, 0x33ED253BL, 2L, 4L, 2L, 0x33ED253BL, 0x9B3BBBB0L}, {0x9B3BBBB0L, 0x33ED253BL, 2L, 4L, 2L, 0x33ED253BL, 0x9B3BBBB0L}, {0x9B3BBBB0L, 0x33ED253BL, 2L, 4L, 2L, 0x33ED253BL, 0x9B3BBBB0L}, {0x9B3BBBB0L, 0x33ED253BL, 2L, 4L, 2L, 0x33ED253BL, 0x9B3BBBB0L}, {0x9B3BBBB0L, 0x33ED253BL, 2L, 4L, 2L, 0x33ED253BL, 0x9B3BBBB0L}, {0x9B3BBBB0L, 0x33ED253BL, 2L, 4L, 2L, 0x33ED253BL, 0x9B3BBBB0L}, {0x9B3BBBB0L, 0x33ED253BL, 2L, 4L, 2L, 0x33ED253BL, 0x9B3BBBB0L}, {0x9B3BBBB0L, 0x33ED253BL, 2L, 4L, 2L, 0x33ED253BL, 0x9B3BBBB0L}};
        uint32_t l_843 = 4294967290UL;
        int32_t l_1046 = 0x07FD8AA4L;
        int i, j;
        for (g_2467 = 0; (g_2467 > 15); ++g_2467)
        {
g_120[1] ^= (safe_add_func_uint32_t_u_u(i, l_1046));
                    g_120[1] = 0x19D1A3FEL;
            if (l_786)
                continue;
        }
        for (l_793 = 0; (l_793 <= 24); l_793 = safe_add_func_uint16_t_u_u(l_793, 2))
        {
            int32_t l_820 = (-1L);
            const int32_t l_844 = 1L;
            int32_t l_846 = 0xEFBA0CA9L;
            int32_t l_848 = 0x52FBE6A1L;
            uint32_t l_885 = 2UL;
            int32_t l_936[2][6] = {{0L, 0L, (-3L), 0L, 0L, (-3L)}, {0L, 0L, (-3L), 0L, 0L, (-3L)}};
            int i, j;
            l_801[7][5] = l_786;
            for (l_779 = 0; (l_779 <= 7); l_779 += 1)
            {
                int i, j;
                g_120[3] = l_801[l_779][l_779];
                l_821[6][1] = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_u((g_97[2] , (safe_lshift_func_int16_t_s_u((((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u((4294967286UL != 0x9CDCB11EL), ((l_801[l_779][l_779] ^ (g_100 == (safe_mod_func_int16_t_s_s(((((2UL | (safe_mod_func_int8_t_s_s((l_1281 || ((safe_add_func_int16_t_s_s((g_97[2] , (0x978C1B61L > 4294967291UL)), l_820)) < 0xB988L)), l_1281))) || l_790) >= l_786) == 0x1F887AC6L), l_1281)))) > 6UL))), 6)) != l_786) <= l_801[7][5]), l_786))), 3)), l_801[7][5]));
            }
            if ((0x4DF543CEL && l_790))
            {
                uint32_t l_847 = 0xB97BAC9CL;
                for (g_100 = 0; (g_100 >= (-10)); g_100--)
                {
                    const uint32_t l_845 = 0xB19552AFL;
                    l_846 = (((safe_sub_func_int8_t_s_s(0x65L, (safe_unary_minus_func_int8_t_s((+(g_97[2] < (safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(((l_1281 >= g_100) || l_790), (((safe_sub_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_s(((((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(l_1281, (safe_add_func_uint32_t_u_u(l_801[7][1], (~((l_790 <= (0xCC872D8FL == 4UL)) && g_120[1])))))), l_786)) & l_843) & l_786) ^ g_2467), g_97[2])) < (-1L)) >= 0x60360610L) ^ 0x1EL), 0xBA9AL)) , l_844) , l_1281))) == 3L), 4294967295UL)))))))) <= l_845) != l_786);
                    if (l_847)
                        break;
                    if (l_786)
                        continue;
                }
                g_120[1] = 0x53887F5CL;
            }
            else
            {
                uint16_t l_875 = 6UL;
                int32_t l_881 = 0L;
                int32_t l_884[2][7] = {{0xB1F54B37L, 0xB1F54B37L, (-9L), 0xB1F54B37L, 0xB1F54B37L, (-9L), 0xB1F54B37L}, {0xB1F54B37L, 0xB1F54B37L, (-9L), 0xB1F54B37L, 0xB1F54B37L, (-9L), 0xB1F54B37L}};
                uint16_t l_953 = 0x2EE0L;
                int i, j;
                g_849[0]--;
                for (l_848 = 0; (l_848 >= 0); l_848 -= 1)
                {
                    int32_t l_876 = 1L;
                    int i;
                    if ((safe_lshift_func_uint16_t_u_s((+(safe_sub_func_uint8_t_u_u(g_849[l_848], l_786))), 8)))
                    {
                        g_120[1] = 0xB8ED6298L;
                        if (l_786)
                            continue;
{
            transparent_crc(g_2184[l_922][l_881], "g_2184[l_922][l_881]", i);
            if (i) printf("index = [%d][%d]\n", l_922, l_881);
        }
                    l_846 &= (safe_mod_func_uint32_t_u_u(l_786, 0xE4729DD1L));
                    }
                    else
                    {
                        uint16_t l_861 = 0x987DL;
                        g_120[1] = ((safe_add_func_int16_t_s_s(0x6D2DL, l_861)) > 9L);
                        return g_849[l_848];
                    }
                    for (l_779 = 0; (l_779 <= 3); l_779 += 1)
                    {
                        uint8_t l_870 = 0x7BL;
                        int32_t l_882 = (-8L);
                        int32_t l_883 = (-1L);
                        l_875 &= ((g_120[3] , (safe_add_func_int32_t_s_s((((((g_849[0] & ((safe_sub_func_uint16_t_u_u(g_120[4], ((safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(l_790, (l_870 & (safe_mod_func_uint32_t_u_u(((l_844 != (g_97[0] || g_97[3])) , (safe_lshift_func_int8_t_s_u((g_120[1] , l_820), l_794))), l_1281))))) , g_18), 4294967295UL)) , l_1281))) || l_794)) ^ l_1281) & g_2467) != l_779) & l_786), l_870))) > 8UL);
                        l_877[2][0]--;
                        --l_885;
                    }
                    g_120[1] = (((safe_lshift_func_int8_t_s_u((-7L), 4)) , 1UL) <= (safe_lshift_func_uint16_t_u_u(((g_97[5] >= l_786) < (safe_sub_func_uint8_t_u_u(l_786, (+((+(safe_mod_func_int16_t_s_s(((((l_790 == (safe_lshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((((((safe_rshift_func_uint8_t_u_u(0xA3L, 3)) <= (((safe_sub_func_uint8_t_u_u((l_786 ^ (((g_97[2] <= 7UL) >= 0x5416L) < l_779)), l_846)) < (-3L)) , l_1281)) & 0x514BL) == 0x4A10A230L) > 1UL), l_790)) & 0x80BDL), 1)) <= 0xB0L), g_849[0]))) == l_1281) ^ l_786) == l_1281), 0xC7B8L))) < l_877[0][0]))))), 5)));
                }
                l_778 = ((g_97[2] > ((safe_mod_func_uint16_t_u_u((l_1281 < l_1281), (safe_mod_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((l_885 , (safe_mod_func_uint8_t_u_u(((((~((l_778 & 0x0E4E5FD7L) ^ ((((l_844 == ((((l_794 | ((((((safe_rshift_func_uint8_t_u_s(l_794, l_1281)) & 0xC189E11AL) > 0x02171C1CL) , l_1281) < g_97[2]) , 0xABAFL)) && 0x0FL) , 0x444BL) >= 9L)) , 0xCAB1L) || l_786) && 0x2CF198DBL))) ^ 7UL) , 0x5D7CL) ^ l_919), g_18))), l_1281)) , g_2467), l_786)))) ^ (-1L))) <= 0x08L);
                for (l_919 = 0; (l_919 != (-11)); --l_919)
                {
                    uint8_t l_923 = 0UL;
                    int32_t l_937 = 0xB482D4E8L;
                    int32_t l_938 = 0x297BE1A5L;
                    int32_t l_939 = 0xFF539210L;
                    int32_t l_1001 = 0x1C89D44EL;
l_923 += 1;
                    ++l_923;
                    if ((((-1L) != ((safe_sub_func_uint8_t_u_u(l_820, (~((l_1281 || ((safe_lshift_func_int8_t_s_s(l_844, ((~0xB7L) & (((~(safe_rshift_func_uint8_t_u_u(0xD5L, ((g_100 , g_849[0]) == g_100)))) || l_1281) & l_820)))) , l_786)) == 0xDBB7L)))) <= g_100)) != l_936[0][5]))
                    {
                        g_120[1] = l_725[2];
                        --l_940[0];
                    }
                    else
                    {
                        int32_t l_956 = 0xA1C5A82EL;
                        g_120[1] = ((((((g_849[0] ^ l_801[6][9]) & 0x3A09L) == ((g_97[3] == (safe_lshift_func_uint8_t_u_s((((l_1281 , (l_786 < ((l_786 || (((((safe_mod_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u(g_120[0], l_786)) & l_786) != l_938), 2)), g_849[0])) <= l_953) || l_953), l_786)) <= l_801[7][5]) || 0xFCA679B8L) == g_120[1]) > l_801[0][3])) || l_923))) != l_953) , l_821[6][1]), l_1281))) < 0xABL)) == 65535UL) , 0x310916CAL) , g_120[0]);
                        l_884[0][0] = ((safe_sub_func_int8_t_s_s(l_956, ((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((((safe_add_func_int8_t_s_s((((safe_mod_func_int8_t_s_s(g_100, (l_1281 ^ 0x4C3BL))) & ((+l_1281) == (1L < g_100))) || (((safe_add_func_int8_t_s_s((((l_725[0] & ((+(-5L)) >= 0xEFL)) < l_820) , (-9L)), 0x84L)) >= l_936[0][5]) > 0x4C33D59BL)), g_2467)) ^ g_849[0]) ^ 1L) ^ l_843) > g_540), g_540)), g_97[2])) | 0x0AD02AAFL))) , (-1L));
                        l_821[3][2] = (((safe_rshift_func_uint8_t_u_s((((l_786 <= 0xDED1L) == (l_786 ^ ((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((l_1052 == (safe_rshift_func_uint16_t_u_u(0x5CC1L, ((safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_u((((g_97[2] == ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(g_97[2], (((l_1281 || (((safe_rshift_func_int16_t_s_s(((((safe_add_func_uint32_t_u_u(0x04849C4EL, l_1281)) <= l_1281) <= l_937) ^ g_120[1]), g_540)) > l_956) , l_939)) <= 7L) == g_18))) != l_794), g_100)) >= l_786)) < 255UL) != g_100), 1)), l_786)) != g_2467) , l_923) > 8L), l_1281)), 9)) , 0xB22CL)))) > 0xD0D7BB55L), 7)), 3UL)) == l_1281) | l_1281), l_884[0][5])))) ^ g_717), l_956)) <= l_1281))) >= l_1281), 1)) , 0xE75EL) == 0x5EECL);
                    }
                    g_120[1] ^= (safe_add_func_uint32_t_u_u(l_939, l_938));
                    return l_1001;
                }
            }
            for (g_2467 = 17; (g_2467 <= 34); g_2467 = safe_add_func_int32_t_s_s(g_2467, 2))
            {
                uint32_t l_1004 = 0x3C1B13C2L;
l_1329 += 1;
                    if (l_786)
                    break;
                if (l_1004)
                    break;
            }
        }
        for (j = (-29); (j != (-3)); j++)
        {
            g_2431--;
            if (g_540)
                continue;
            for (l_786 = 0; (l_786 == (-12)); l_786 = safe_sub_func_int8_t_s_s(l_786, 2))
            {
                return g_849[0];
            }
        }
        l_793 = ((l_1281 || (l_801[6][3] & g_849[0])) > (safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(l_786, (safe_mod_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s(l_786, (+((safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((+((safe_mod_func_int16_t_s_s(((((safe_add_func_int8_t_s_s((g_18 ^ (safe_add_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s((((((safe_rshift_func_uint8_t_u_s(((l_821[6][1] ^ ((((((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((0x5FBED003L || ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_s((-5L), 0)), 5)) != l_790)), l_1281)), l_1046)) < 0x3EL) , 0xE788D646L) == l_801[3][2]) , l_725[2]) || l_801[5][3])) || 0x23L), l_801[7][5])) , 0x32L) & 255UL) || l_1281) && l_1281), l_877[2][0])) , l_1046) , g_100), 0x67L))), 0UL)) >= 0x78D41AC2L) , l_786) ^ 255UL), l_725[2])) , 0x1712L)) , l_919) , l_786), l_1281)), l_1046)) && g_2467)))), l_1281)) ^ l_779) , l_786) , g_849[0]), l_793)))), l_786)));
    }
    else
    {
        int32_t l_1051[4] = {0x0A2DD9A0L, 0L, 0x0A2DD9A0L, 0L};
        int32_t l_1081 = 1L;
        int32_t l_1226[1][2][5] = {{{0L, (-1L), 0L, (-1L), 0L}, {0L, (-1L), 0L, (-1L), 0L}}};
        int32_t l_1273 = 0x20573342L;
        int32_t l_1359 = 0x441BD344L;
        uint8_t l_1361 = 0x58L;
        int32_t l_1369 = (-7L);
        int i, j, k;
        l_1051[0] = (safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(l_786, 1)), 14));
        g_2467 |= l_940[3];
        for (l_779 = 0; (l_779 > 1); ++l_779)
        {
            uint8_t l_1069 = 1UL;
            int8_t l_1216 = 0xBDL;
            int32_t l_1219 = 0x1BE859F7L;
            int32_t l_1224 = 7L;
            int32_t l_1227 = (-6L);
            int32_t l_1228 = 0x1EE42556L;
            int32_t l_1229 = 0xD31B29F5L;
            int32_t l_1231[6];
            uint32_t l_1233 = 1UL;
            int i;
            for (i = 0; i < 6; i++)
                l_1231[i] = 7L;
            if ((l_1281 , (((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((-3L) == ((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(0x6B9EL, l_1281)), ((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((((l_1069 , ((((~(l_1051[0] , ((safe_add_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u((((l_786 >= (~((0x941CB444L | g_849[0]) || g_18))) < l_1281) == l_1051[0]), 1UL)) <= l_1281), l_786)) > l_786))) == 6L) <= 0L) , l_786)) & 5L) , l_1281), 1UL)), 4294967288UL)) >= l_793))) != l_1281)), 0xFF1D970AL)), 1L)), l_1281)) , l_790) & l_786)))
            {
                uint8_t l_1080 = 1UL;
                l_919 = (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(1UL, l_1051[3])), ((g_849[0] < l_1069) != (1L > g_100))));
                g_120[1] = ((g_849[0] || 0xD3L) <= l_919);
                if (l_1080)
                    break;
                if (l_1069)
                    break;
            }
            else
            {
                int16_t l_1094 = 0xECC4L;
                int32_t l_1149[2];
                int16_t l_1163[7][10];
                int i, j;
                for (i = 0; i < 2; i++)
                    {
{
                        uint8_t l_1840 = 0x4FL;
                        int32_t l_1843 = 1L;
                        int32_t l_1850 = (-10L);
                        int32_t l_1851 = 0x86429966L;
                        int32_t l_1852 = 0xCA3D88B8L;
                        int32_t l_1855 = 1L;
                        l_1840 = g_2414;
                        --l_980;
                        --g_1217;
                    }
                    l_1149[i] = 0xBA560EB5L;}
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_1163[i][j] = 6L;
                }
                l_1081 = (l_786 == l_786);
                for (l_786 = 16; (l_786 != (-28)); l_786 = safe_sub_func_int16_t_s_s(l_786, 5))
                {
                    int32_t l_1095 = (-6L);
                    for (g_2467 = 0; (g_2467 <= 0); g_2467 += 1)
                    {
                        int i, j;
                        return l_877[g_2467][g_2467];
                    }
                    l_1095 = ((((g_120[1] || (-5L)) && ((((safe_lshift_func_int16_t_s_u((((safe_rshift_func_int16_t_s_u((l_786 || (((0xBBL ^ (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(g_120[1], (((((-1L) > (l_779 , 1L)) , ((safe_add_func_int16_t_s_s(l_1281, l_1281)) & 4294967289UL)) <= l_1281) != l_1069))), g_120[1]))) | l_786) == l_786)), l_1281)) >= 0x20L) , 0x45CAL), l_786)) > (-2L)) <= 0x8BB0L) < l_1094)) , l_1069) ^ l_786);
                    for (l_919 = 0; (l_919 <= 0); l_919 += 1)
                    {
                        int i, j;
                        g_120[2] = l_877[l_919][l_919];
                    }
                }
                if ((l_1281 , l_1281))
                {
                    uint16_t l_1101[10] = {0xEA04L, 0xEA04L, 0UL, 0xEA04L, 0xEA04L, 0UL, 0xEA04L, 0xEA04L, 0UL, 0xEA04L};
                    int i;
                    if (l_790)
                        break;
                    if ((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((((l_786 == ((((((((!((l_1281 ^ (l_1069 || ((l_1101[9] & ((-7L) | ((((safe_sub_func_uint8_t_u_u(l_786, (safe_add_func_uint32_t_u_u(g_2467, 0x1CB4D9C6L)))) && l_790) >= l_877[2][0]) >= l_1281))) <= l_794))) <= 4L)) , l_1281) || l_1281) != l_1281) , l_786) , 0xDF52L) , g_100) ^ l_1069)) || g_100) , 0L), 255UL)), l_1281)))
                    {
                        uint16_t l_1114[5][1][4] = {{{0x8B41L, 0x38EFL, 1UL, 0x38EFL}}, {{0x8B41L, 0x38EFL, 1UL, 0x38EFL}}, {{0x8B41L, 0x38EFL, 1UL, 0x38EFL}}, {{0x8B41L, 0x38EFL, 1UL, 0x38EFL}}, {{0x8B41L, 0x38EFL, 1UL, 0x38EFL}}};
                        int i, j, k;
                        j = ((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_786, (8L & (-1L)))), 5UL)) ^ (safe_sub_func_uint32_t_u_u((0x9B71DE32L ^ (l_1281 < l_1281)), (+(((l_1101[9] != g_120[0]) <= 0x33L) , l_1051[0])))));
                        g_120[1] ^= (((((!((l_1114[4][0][3] == (safe_mod_func_uint32_t_u_u(((((safe_lshift_func_int8_t_s_s((safe_add_func_int16_t_s_s((+((!(g_849[0] > g_100)) ^ 0x0043E281L)), (g_97[2] >= g_2467))), ((safe_sub_func_int8_t_s_s((~((((safe_mod_func_uint16_t_u_u((0xC6L || 0x36L), l_1281)) & 0x68L) || g_540) , l_1051[0])), l_1094)) != 0x2E20L))) || l_1281) | l_1094) & l_786), l_1281))) > 1UL)) < 1UL) > l_786) > 0x5E87ADE6L) == 0x38C86F29L);
                    }
                    else
                    {
                        int8_t l_1148 = 0x89L;
                        l_1149[1] = ((0x88L > ((((l_786 || (safe_mod_func_uint32_t_u_u(l_1281, (safe_add_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u((safe_mod_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(((l_1281 , (0L ^ (((safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(l_786, ((g_97[2] | 0x826CL) < ((((safe_rshift_func_uint8_t_u_s(l_794, l_786)) <= 253UL) | l_1094) >= l_1148)))), l_1281)) < l_794), l_1148)) || g_97[2]) | 0x9933L))) || g_2467), 0L)), l_1281)) >= 0x23DDBF23L), g_100)), 1)) && l_1069), 0x57543A32L))))) != 1L) , l_1281) | 4294967295UL)) ^ 0xB771L);
                        if (l_786)
                            break;
                        g_120[1] = (safe_mod_func_int16_t_s_s((((((safe_lshift_func_int8_t_s_s((((safe_sub_func_uint32_t_u_u((((((safe_mod_func_int16_t_s_s(0L, (((((+65533UL) > ((safe_mod_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((l_1149[1] , ((g_2431 >= l_786) >= (l_1163[1][2] || (((safe_sub_func_int16_t_s_s((l_786 != (l_1101[9] >= (l_1051[2] == 4294967295UL))), l_1281)) ^ g_2467) & l_786)))) && l_786), l_786)), l_1051[1])) > 2L)) || l_786) < l_794) , l_1081))) < l_1281) && g_540) ^ 0x5443L) < l_779), l_786)) , l_1149[0]) , l_786), 2)) != l_1101[6]) <= l_786) , l_1281) >= l_1094), g_18));
                    }
                    l_919 = (safe_rshift_func_int8_t_s_s((l_1081 ^ 4294967295UL), 0));
                }
                else
                {
                    for (g_100 = 3; (g_100 >= 1); g_100 -= 1)
                    {
                        int i;
                        if (g_120[g_100])
                            break;
                        if (l_725[g_100])
                            break;
                        return l_786;
                    }
                }
            }
            if (l_722)
            {
                uint16_t l_1172 = 0x80D0L;
                j &= ((((l_1281 >= l_1172) && (g_849[0] , (((((0x4E57L != (safe_unary_minus_func_uint8_t_u((((((safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((!((safe_unary_minus_func_uint16_t_u(l_786)) | l_1281)), (safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(0UL, ((l_1069 , (safe_sub_func_int32_t_s_s((((((safe_add_func_int8_t_s_s((((!l_722) , l_786) <= l_725[0]), l_786)) != l_1172) > l_1191[1]) < l_1172) & 0UL), 0x349E8373L))) | l_786))), l_794)), l_786)))) & g_2431), (-5L))) < l_1069) , g_849[0]) | l_1172) >= l_1069)))) && l_786) != 0UL) | l_779) | 0x7351L))) & l_725[3]) , l_794);
j -= 1;
                    g_1217 |= ((safe_mod_func_int16_t_s_s((-4L), (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_mod_func_int32_t_s_s((((((safe_lshift_func_int8_t_s_u(g_849[0], (!0xE43BDF21L))) || ((((((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((~(safe_lshift_func_int16_t_s_s(l_1281, 11))), 6)), 6)) , 0x9037L) || l_794) ^ ((l_786 & (l_1281 && (safe_rshift_func_uint8_t_u_s(l_1281, g_2467)))) != l_1081)) >= l_794) && g_849[0])) > g_120[1]) , 0xB8L) ^ l_1281), 4294967295UL)), g_100)), (-1L))) <= g_100) ^ l_1069), l_1172)), 0xFBL)))) > l_1216);
            }
            else
            {
                int32_t l_1218 = 0L;
                int32_t l_1220 = 0xD6A84518L;
                int32_t l_1221 = 0x3E2F8B07L;
                int32_t l_1222 = 0xBC228DECL;
                int32_t l_1223 = 0L;
                int32_t l_1225 = 0x92788A2FL;
                int32_t l_1230 = 0x8A193837L;
                int32_t l_1232[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1232[i][j] = 0xBE2CE0ADL;
                }
                l_1233++;
            }
            if (l_779)
            {
                uint32_t l_1241[4][8] = {{0x92359C80L, 18446744073709551615UL, 1UL, 5UL, 0xE2F39250L, 1UL, 0xE2F39250L, 5UL}, {0x92359C80L, 18446744073709551615UL, 1UL, 5UL, 0xE2F39250L, 1UL, 0xE2F39250L, 5UL}, {0x92359C80L, 18446744073709551615UL, 1UL, 5UL, 0xE2F39250L, 1UL, 0xE2F39250L, 5UL}, {0x92359C80L, 18446744073709551615UL, 1UL, 5UL, 0xE2F39250L, 1UL, 0xE2F39250L, 5UL}};
                uint16_t l_1252 = 0x759AL;
                int i, j;
                g_120[4] |= ((safe_lshift_func_uint16_t_u_s(6UL, 8)) , ((safe_unary_minus_func_int32_t_s((safe_sub_func_int16_t_s_s((((((l_1241[2][6] | 0L) & ((((safe_rshift_func_uint16_t_u_u(((safe_unary_minus_func_int16_t_s(l_1191[0])) & (l_1281 , (((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((l_1281 , (safe_add_func_int16_t_s_s((((~l_1252) , (safe_add_func_uint16_t_u_u((((((g_18 | (safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(((((0x1CA4L < l_1281) && g_100) | g_97[2]) ^ l_786), l_786)), l_1281))) != l_1281) || l_790) > l_1051[2]) , 0x6DB4L), l_778))) || l_1281), 0x5D57L))), g_97[2])), l_1219)) || 1UL) || l_786) | l_1281) != g_849[0]))), l_790)) && 1L) > 0x1DC0L) , l_786)) != 0x35A6L) || 0xE981L) | l_779), 1L)))) , l_779));
            }
            else
            {
                uint16_t l_1263[6][10] = {{0xE2A8L, 0x6DABL, 0UL, 0xB1CCL, 0xB1CCL, 0UL, 0x6DABL, 0xE2A8L, 0UL, 0xE2A8L}, {0xE2A8L, 0x6DABL, 0UL, 0xB1CCL, 0xB1CCL, 0UL, 0x6DABL, 0xE2A8L, 0UL, 0xE2A8L}, {0xE2A8L, 0x6DABL, 0UL, 0xB1CCL, 0xB1CCL, 0UL, 0x6DABL, 0xE2A8L, 0UL, 0xE2A8L}, {0xE2A8L, 0x6DABL, 0UL, 0xB1CCL, 0xB1CCL, 0UL, 0x6DABL, 0xE2A8L, 0UL, 0xE2A8L}, {0xE2A8L, 0x6DABL, 0UL, 0xB1CCL, 0xB1CCL, 0UL, 0x6DABL, 0xE2A8L, 0UL, 0xE2A8L}, {0xE2A8L, 0x6DABL, 0UL, 0xB1CCL, 0xB1CCL, 0UL, 0x6DABL, 0xE2A8L, 0UL, 0xE2A8L}};
                int32_t l_1277[9];
                int16_t l_1321 = 0x3AFEL;
                int i, j;
                for (i = 0; i < 9; i++)
                    {
if (l_794)
                        break;
                    l_1277[i] = (-1L);}
                for (j = 0; (j <= (-8)); --j)
                {
                    uint8_t l_1265 = 0xA0L;
                    int32_t l_1272 = 0xA92A5564L;
                    uint8_t l_1274 = 1UL;
                    int32_t l_1325 = 0x05F0F06DL;
                    int32_t l_1326 = 0xA526867EL;
                    int8_t l_1360 = 0xE8L;
                    if (((safe_rshift_func_int16_t_s_s(1L, (l_790 < ((l_1263[4][9] && (!(l_1265 || l_786))) , ((((l_786 , (safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((((safe_lshift_func_uint8_t_u_u(g_97[2], 2)) >= g_100) | 8L) , g_2467), g_849[0])) ^ g_120[1]), l_1281))) == g_18) >= l_786) < l_1263[0][9]))))) >= l_1081))
                    {
                        uint32_t l_1278 = 0x7A1781B4L;
                        l_1274--;
                        l_1278--;
                    }
                    else
                    {
                        uint8_t l_1292 = 255UL;
                        int32_t l_1301 = 0L;
                        g_143 ^= 0x10E3B930L;
                        l_1277[4] &= (safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((9UL || ((g_849[0] < ((g_1217 >= g_849[0]) || l_786)) , (((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(0xDDL, (0UL ^ (safe_lshift_func_uint16_t_u_u(((l_1292 <= (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((l_779 & (-1L)), g_2431)), l_1219)), 7)), l_786))) , g_2467), 1))))), 0UL)) & l_786) || l_1281))), l_940[0])), l_786));
                        l_1301 = 0x9FC577ABL;
                    }
                    for (l_790 = 0; (l_790 >= 7); l_790 = safe_add_func_uint8_t_u_u(l_790, 3))
                    {
                        return l_786;
                    }
                    if ((l_786 , (((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(l_786, 3)), ((l_1277[4] , (safe_rshift_func_uint8_t_u_u(g_540, (safe_lshift_func_int8_t_s_s((g_2467 > (safe_add_func_uint16_t_u_u(l_1281, (((~(safe_add_func_uint8_t_u_u((((l_786 >= (safe_mod_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(g_97[0], (g_849[0] , l_1321))) || l_1281), g_2467))) && l_1229) ^ l_786), l_1081))) && l_1226[0][1][2]) , l_1281)))), 5))))) >= l_1281))) >= 65527UL) == l_1277[4])))
                    {
                        uint32_t l_1322 = 1UL;
                        int32_t l_1328[3];
                        uint16_t l_1330[7][2] = {{1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}, {1UL, 0UL}};
                        int i, j;
                        for (i = 0; i < 3; i++)
                            l_1328[i] = 5L;
for (p_35 = 0; (p_35 < (-17)); --p_35)
        {
            uint8_t l_198 = 1UL;
            int16_t l_261 = (-10L);
            uint16_t l_350 = 5UL;
            int32_t l_367 = 1L;
            int32_t l_391[3][6] = {{0xD2D39850L, 1L, 1L, 0L, 0L, 1L}, {0xD2D39850L, 1L, 1L, 0L, 0L, 1L}, {0xD2D39850L, 1L, 1L, 0L, 0L, 1L}};
            uint32_t l_431 = 0x13F79E03L;
            int i, j;
            if (l_1007)
                break;
            l_1369 ^= l_1007;
            for (l_778 = 0; (l_778 == 26); ++l_778)
            {
                uint32_t l_210 = 0UL;
                int8_t l_281[8][7] = {{0xE1L, 5L, (-1L), 5L, 0xE1L, 0x96L, (-1L)}, {0xE1L, 5L, (-1L), 5L, 0xE1L, 0x96L, (-1L)}, {0xE1L, 5L, (-1L), 5L, 0xE1L, 0x96L, (-1L)}, {0xE1L, 5L, (-1L), 5L, 0xE1L, 0x96L, (-1L)}, {0xE1L, 5L, (-1L), 5L, 0xE1L, 0x96L, (-1L)}, {0xE1L, 5L, (-1L), 5L, 0xE1L, 0x96L, (-1L)}, {0xE1L, 5L, (-1L), 5L, 0xE1L, 0x96L, (-1L)}, {0xE1L, 5L, (-1L), 5L, 0xE1L, 0x96L, (-1L)}};
                uint32_t l_326 = 0x0A0DE782L;
                int32_t l_363 = 0L;
                int32_t l_392 = (-1L);
                int32_t l_395 = 0L;
                const uint32_t l_420 = 0xA82EA14BL;
                const int16_t l_427 = 0L;
                int i, j;
                if ((l_1369 || (safe_mod_func_uint16_t_u_u(((safe_rshift_func_int8_t_s_u(0x73L, 5)) | ((safe_mod_func_int32_t_s_s(g_59, (safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((((0x7CB8L < 0xB2B8L) , ((l_198 ^ 0xDBL) != l_198)) && 0xD1L), g_1171)), 11)))) != l_1369)), 0xA615L))))
                {
                    uint32_t l_207 = 0x44D27D01L;
                    g_120[3] = p_35;
                    for (g_143 = (-26); (g_143 >= 44); g_143++)
                    {
                        return l_198;
                    }
                    g_120[1] = (((((((g_120[1] && l_1321) || ((safe_rshift_func_uint16_t_u_u(((g_2414 , ((safe_mod_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u(((((0x47C1L >= (l_1360 ^ l_207)) <= (safe_sub_func_uint16_t_u_u(((g_18 && g_2414) , l_1007), l_1007))) ^ g_120[1]) < g_120[0]), g_120[1])) & g_97[2]), 0x3A8961DAL)) & 0L)) , p_35), 4)) & g_120[1])) ^ l_1369) == l_207) | l_210) & 0xD933A2BCL) & l_1007);
                }
                else
                {
                    uint8_t l_258 = 0x75L;
                    int32_t l_262 = 0x18EC19C0L;
                    for (g_143 = (-24); (g_143 < 42); ++g_143)
                    {
                        l_1231[2] |= g_2414;
                        return l_198;
                    }
                    l_1369 = ((0x5EL || (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u((0x746C22C4L && (safe_add_func_int16_t_s_s(((g_2414 , (safe_rshift_func_uint8_t_u_u(l_1360, 6))) && (safe_add_func_uint8_t_u_u(p_35, (safe_lshift_func_int16_t_s_u((((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(((l_1360 == (((safe_sub_func_uint32_t_u_u(((l_198 || 0x50L) | ((safe_sub_func_uint32_t_u_u((((l_1231[2] == g_89) , l_1007) >= l_1321), p_35)) == 0xFF3A24CFL)), 0x3913078BL)) >= g_89) , 1L)) != p_35), l_1369)), l_1369)) > l_1321) | (-6L)), 1))))), g_120[2]))), 0L)), 15))) != l_1369);
                    for (g_1171 = 0; (g_1171 > 43); g_1171 = safe_add_func_uint8_t_u_u(g_1171, 2))
                    {
                        uint16_t l_236 = 1UL;
                        g_120[1] = 0x724D0293L;
                        l_236 = g_89;
                        l_262 = (safe_sub_func_int8_t_s_s((((((((l_1360 || ((((1UL < ((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((((safe_mod_func_uint8_t_u_u(255UL, (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((safe_mod_func_int16_t_s_s(l_1359, 65535UL)), l_198)) > ((safe_rshift_func_uint16_t_u_u(p_35, ((((safe_rshift_func_int16_t_s_u(((l_258 , (((safe_add_func_uint32_t_u_u(g_143, g_120[1])) == l_198) , l_236)) & l_258), p_35)) || g_97[2]) , l_1360) , 0x2CA6L))) > 0x62L)), p_35)) | l_261), 0)))) | l_210) && l_1369), 255UL)) | g_18), 11)) , g_2414)) || l_236) , 0x43L) | 1UL)) ^ p_35) , l_1281) < 0L) < l_1359) != l_1360) >= l_1007), l_1360));
                        l_1360 = ((((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_u(((((((safe_add_func_uint16_t_u_u(l_1007, l_1321)) == ((safe_mod_func_int32_t_s_s((((((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(((((safe_sub_func_uint32_t_u_u(l_281[4][6], l_258)) ^ (((safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((0x25D96900L <= (safe_sub_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(l_236, l_1281)) < ((safe_lshift_func_int16_t_s_s(((0UL < (safe_mod_func_int8_t_s_s(g_2414, g_97[4]))) == g_120[2]), g_89)) < 7UL)), 2UL))), p_35)), 0x96E64D66L)) >= l_1360), 0xFC6B1E59L)) < (-5L)) | 4294967292UL)) != l_1369) ^ 8L), (-7L))) & g_2414), l_1369)) > l_236) <= (-1L)), p_35)), p_35)) >= g_143) ^ 0xF7BFL) , g_89) == l_198), l_1321)) && g_59)) | 1UL) != 0x6CL) <= l_281[0][2]) , 0x35L), l_1007)) && p_35), 4)) & g_143) < 0x73054497L) != l_1321);
                    }
                    for (g_1171 = 0; (g_1171 <= 4); g_1171 += 1)
                    {
                        int i;
                        g_120[g_1171] = ((safe_sub_func_int32_t_s_s(g_97[(g_1171 + 2)], (safe_unary_minus_func_uint8_t_u(((((safe_sub_func_int16_t_s_s(((g_97[g_1171] , 0xC6C2L) ^ 0xFEB2L), ((safe_rshift_func_uint16_t_u_u(g_97[(g_1171 + 1)], ((safe_rshift_func_uint16_t_u_u(g_120[g_1171], 5)) != (safe_mod_func_int8_t_s_s(((((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(g_120[g_1171], ((0x60L < g_120[g_1171]) , l_281[3][1]))), 0x2C0B2767L)) >= l_778) != g_89) != 255UL), 0xE6L))))) >= l_1360))) != (-6L)) || g_120[0]) && g_97[(g_1171 + 2)]))))) & l_1321);
                        g_120[2] = ((-8L) == 0UL);
                        l_326 = ((((((((65535UL > (safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((((l_262 || (l_198 || (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(g_89, (((l_1359 > (l_281[4][6] , p_35)) != ((safe_rshift_func_uint16_t_u_u(0xB25DL, 8)) || 1UL)) <= l_1360))), l_1321)) | g_97[2]), 1)), l_1321)))) & p_35) || g_89), l_1231[0])) & l_258), p_35))) <= g_89) < g_120[g_1171]) == 0x8B28L) < l_1360) || l_1231[2]) != l_1360) <= 246UL);
                        l_262 |= (~g_120[1]);
                    }
                }
                for (l_1007 = 20; (l_1007 < 40); l_1007 = safe_add_func_uint32_t_u_u(l_1007, 1))
                {
                    int8_t l_362 = 0x43L;
                    int32_t l_366 = (-2L);
                    uint8_t l_369 = 0x5AL;
                    int32_t l_393 = 0L;
                    if ((safe_add_func_int16_t_s_s(((((l_1231[1] || ((g_2414 >= (+(-1L))) >= (safe_lshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((((safe_mod_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s(l_1007, 2)) == (((safe_lshift_func_uint16_t_u_s((g_59 || ((safe_rshift_func_uint16_t_u_s((((safe_add_func_int16_t_s_s(((((((safe_mod_func_int16_t_s_s(g_2414, g_1171)) <= 0x56719CF5L) < ((+(((((1UL && 0xD84E0731L) > l_281[6][4]) < g_143) > 0x15L) & 0xF7L)) | g_143)) , g_2414) == l_350) , l_1369), 0xA7B5L)) , 2L) , g_935), 11)) >= l_1321)), l_210)) , 0x25L) < 7UL)), g_59)) <= 1UL) , l_210), g_59)) ^ 246UL), g_18)))) <= 0x83L) >= 6UL) & g_97[2]), l_1369)))
                    {
                        uint32_t l_364 = 0UL;
                        int32_t l_365 = 1L;
                        l_364 = ((safe_add_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(((((p_35 != l_1360) > ((safe_lshift_func_uint16_t_u_u((0xA1L != (((-6L) && (((safe_rshift_func_int8_t_s_u(0x08L, ((g_2414 < ((g_97[2] | (((safe_sub_func_uint16_t_u_u((((l_362 != 0xFEFA8AE2L) , l_1321) != g_97[2]), l_1360)) && 0x6386802AL) >= g_97[1])) >= l_1360)) , l_1369))) < 2UL) && l_281[4][6])) != l_198)), 0)) ^ l_1369)) != g_97[2]) || 0xF9L), l_363)) || 0xD2L) , g_2414), (-7L))) && g_2414);
                        ++l_369;
                        if (l_281[4][3])
                            break;
                        l_366 = l_1369;
                    }
                    else
                    {
                        uint32_t l_384 = 0UL;
                        l_367 = (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((p_35 , (safe_mod_func_int32_t_s_s((((((((((((g_89 , ((safe_mod_func_uint8_t_u_u((g_97[2] ^ (~(+l_1360))), ((((g_97[3] & ((safe_sub_func_uint16_t_u_u((l_384 >= g_935), (((((((safe_lshift_func_int16_t_s_u((g_2414 || (((((safe_rshift_func_int16_t_s_u((1UL != g_2414), 4)) , 0x8DL) >= l_1360) , g_2414) , 0x343F8062L)), g_2414)) > 4L) > g_2414) , g_120[1]) != g_89) , l_1369) == 0xCB3F649DL))) | g_2414)) || l_1360) | g_120[3]) && 0xE5L))) < 0UL)) >= g_97[1]) || 0x3F5AL) ^ l_261) || g_2414) | l_366) , 0L) || (-1L)) ^ 0x8506B361L) >= p_35) ^ (-6L)), 0x3F0D7356L))), l_1360)), l_1281));
                        l_980--;
                    }
                    l_1369 = (((((g_18 ^ (0UL & (((g_59 == (safe_mod_func_uint8_t_u_u(((((safe_sub_func_int16_t_s_s(((l_1369 & ((safe_add_func_int8_t_s_s((((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u((safe_sub_func_int16_t_s_s((((l_1321 <= g_143) > (safe_lshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(l_1360, ((((((((safe_rshift_func_uint8_t_u_s(l_1321, 1)) & (((l_281[4][6] || g_2414) && g_2414) | 0UL)) == g_120[1]) || l_1007) < l_326) < l_1321) || 0x3CL) < g_18))), 4))) >= (-1L)), g_935)), l_1052)) || g_2414) >= l_420), l_1360)), l_1360)) & (-1L)) | l_281[4][6]), 0x42L)) < g_97[3])) <= g_120[1]), g_120[3])) | l_980) != 0L) == l_391[1][4]), l_395))) > 0x32L) || l_1327))) ^ g_2414) | l_1369) < g_89) < 1UL);
                    for (g_1171 = 0; (g_1171 <= 4); g_1171 += 1)
                    {
                        int i;
                        return g_120[g_1171];
                    }
                    if (g_143)
                        break;
                }
                for (l_363 = 0; (l_363 == (-23)); --l_363)
                {
                    uint32_t l_461[2][4][5] = {{{0xEE2EC9CFL, 0x5DDD064BL, 4294967288UL, 0x62B936CDL, 4294967288UL}, {0xEE2EC9CFL, 0x5DDD064BL, 4294967288UL, 0x62B936CDL, 4294967288UL}, {0xEE2EC9CFL, 0x5DDD064BL, 4294967288UL, 0x62B936CDL, 4294967288UL}, {0xEE2EC9CFL, 0x5DDD064BL, 4294967288UL, 0x62B936CDL, 4294967288UL}}, {{0xEE2EC9CFL, 0x5DDD064BL, 4294967288UL, 0x62B936CDL, 4294967288UL}, {0xEE2EC9CFL, 0x5DDD064BL, 4294967288UL, 0x62B936CDL, 4294967288UL}, {0xEE2EC9CFL, 0x5DDD064BL, 4294967288UL, 0x62B936CDL, 4294967288UL}, {0xEE2EC9CFL, 0x5DDD064BL, 4294967288UL, 0x62B936CDL, 4294967288UL}}};
                    int i, j, k;
                    g_120[1] = ((0x7DDEF103L >= ((((safe_rshift_func_int16_t_s_u(((0x2CD8L == ((((((0x0CE5L > p_35) , (-9L)) || ((((safe_mod_func_uint32_t_u_u((g_120[1] > (0xD6FEED26L | ((l_427 >= (((((((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_int8_t_s_s(g_97[1], 2)) != 0xEF0CL))) > 0x88D4L) && l_1360) ^ g_120[1]) >= l_281[3][0]) | (-6L)) == 1L)) ^ 7UL))), 1UL)) < g_143) | l_1360) , 0UL)) ^ (-1L)) | l_281[0][3]) == l_980)) >= 0xBDE2D00BL), 7)) , 7L) > p_35) || l_420)) , l_1052);
                    l_431--;
                    l_1369 = (((safe_unary_minus_func_int16_t_s(((((safe_unary_minus_func_uint16_t_u((l_326 , (((((~(safe_add_func_uint8_t_u_u((l_427 == (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(g_120[2], (((safe_add_func_uint8_t_u_u(((g_2414 || ((safe_mod_func_int16_t_s_s(((((l_395 & ((0xAD109901L < ((((safe_rshift_func_uint8_t_u_s(g_89, 7)) != (g_2414 <= (safe_sub_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(((((((((g_89 , 4UL) > 0UL) == 0xC8C73883L) <= l_427) ^ g_18) && l_1007) || g_120[1]) & l_1327), p_35)), l_461[1][1][2])), l_1360)), g_89)))) <= l_461[1][1][2]) < 0x237EL)) <= 0x28L)) < 65535UL) | l_363) >= g_2414), l_1231[4])) < 5UL)) ^ l_1359), g_59)) >= 0UL) | g_97[2]))) <= g_59), g_120[1])) ^ l_1360), 7))), g_2414))) < 1L) || l_1360) ^ l_1281) , 6UL)))) | g_143) != l_1281) , l_919))) , 1UL) != 255UL);
                }
                g_120[1] ^= ((0L & 0x37L) >= (safe_sub_func_uint16_t_u_u(1UL, ((((safe_lshift_func_int8_t_s_u((g_97[3] >= (safe_sub_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_s(((((((safe_lshift_func_uint16_t_u_s(((((0xC0653759L ^ l_363) , g_2414) == (l_392 != l_1369)) , 1UL), l_1369)) , 4L) , l_1281) || 0x464EEE5AL) | 8UL) & g_694), 5)) , 0x83F7DA68L) && g_18), 1UL))), 5)) <= g_1171) < 65531UL) || l_980))));
            }
        };
                    --l_1322;
                        l_1330[3][0]++;
                        if (l_1326)
                            continue;
                    }
                    else
                    {
                        int32_t l_1333[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1333[i] = 8L;
                        l_1333[2] = l_1281;
                        g_120[3] = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(0x461CL, 7)), (l_1051[0] < (l_779 < (safe_add_func_uint16_t_u_u(((0x1114L | g_100) != (safe_mod_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(g_1217, (safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(((((-1L) ^ (safe_add_func_int8_t_s_s(((0x17D87BE6L != (safe_rshift_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u((!g_2467))) ^ 0x50L), g_540))) ^ l_786), l_786))) < 8UL) , l_722), 14)) , l_1329), j)))), 0x45D6E44FL))), l_794))))));
                    }
                    if ((l_790 >= ((l_1051[0] != (((l_786 == (g_849[0] ^ (l_1265 > l_1281))) < l_786) == g_849[0])) <= (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u(l_1281, g_100)) , 0xF4L), 2)))))
                    {
                        l_1277[4] = l_786;
                    }
                    else
                    {
                        int32_t l_1358 = 0x27225A3DL;
                        --l_1361;
                        if (l_794)
                            break;
                    }
                }
            }
if (g_1217)
                            break;
                    for (g_143 = (-1); (g_143 == 31); ++g_143)
            {
                l_1081 ^= ((safe_add_func_int8_t_s_s(l_1359, 1L)) < (l_1281 != (((((-2L) > g_18) , (((g_100 != 0xAEL) & ((((g_1368[1] > (l_794 <= l_786)) & l_1359) == g_97[5]) > l_1369)) == 4294967286UL)) , (-1L)) ^ 255UL)));
            }
        }
        g_120[1] = (safe_sub_func_uint16_t_u_u(((0x68DCACFFL | (safe_sub_func_int8_t_s_s((((((safe_mod_func_uint32_t_u_u(((((((g_97[2] , (safe_lshift_func_int16_t_s_u((g_1368[2] && 0L), 0))) | ((l_1361 && (safe_mod_func_int8_t_s_s((l_786 && (safe_rshift_func_int16_t_s_s((((((((~(((safe_add_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(l_1369, l_1281)) && ((((1L != 0x1161L) != l_1281) ^ l_1052) ^ g_2431)) < l_1361), g_120[1])) >= g_849[0]) , (-1L)) | 0x3F27L), g_1368[0])) , 0x8D90L) ^ l_794)) ^ l_725[2]) | 0xC3L) && g_1368[1]) <= l_1281) , l_1226[0][1][2]) , l_1226[0][0][2]), 2))), l_1281))) <= l_1273)) >= 0x27L) >= g_97[6]) != 2L) != 0x1C966BF2L), l_794)) | (-3L)) < g_2467) > l_786) == l_1281), l_1191[1]))) <= l_790), 8L));
    };
                    break;}
                    if (p_34)
                break;
            for (l_778 = 0; (l_778 <= (-8)); l_778--)
            {
                return l_786;
            }
            for (g_694 = 2; (g_694 < 14); g_694 = safe_add_func_uint16_t_u_u(g_694, 3))
            {
for (g_777 = 0; (g_777 <= 3); g_777 += 1)
                    {
                        uint8_t l_870 = 0x7BL;
                        int32_t l_882 = (-8L);
                        int32_t l_883 = (-1L);
                        g_1217 &= ((g_120[3] , (safe_add_func_int32_t_s_s((((((g_849[0] & ((safe_sub_func_uint16_t_u_u(g_120[4], ((safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(l_880, (l_870 & (safe_mod_func_uint32_t_u_u(((g_2468 != (g_97[0] || g_97[3])) , (safe_lshift_func_int8_t_s_u((g_120[1] , j), l_1052))), l_779))))) , g_18), 4294967295UL)) , l_779))) || l_1052)) ^ l_779) & l_1423) != g_777) & g_101), l_870))) > 8UL);
                        l_877[2][0]--;
                        --l_794;
                    };
                    l_794--;
            }
        }
    }
    {
        int32_t l_1081 = 1L;
        int32_t l_1359 = 0x441BD344L;
        uint8_t l_1361 = 0x58L;
        int32_t l_1369 = (-7L);
        int i, j, k;
                                       int16_t BHoHogg_101 = (~((((l_778 ^ l_919) & ((~((~(g_101)))) - (((~(g_143)) / l_1052) >> (l_1329 || (g_1171 ^ l_1423))))) & (~((~(((~(g_777)) - l_1361))))))));
uint8_t BHoHohl_1361 = (~(((~((~((BHoHogg_101 && (~(((~(l_1052)) & g_1171)))))))) ^ (~(((~(g_143)) ^ (((~((~((~((~(l_1423)))))))) && ((l_778 | (~(g_101))) << (l_1329 && l_1361))) && (l_919 / g_777))))))));
uint32_t BHoHoil_1423 = (~(((~((~(((~((l_1052 & l_919))) - (((~((~(l_1329)))) || (~((~((g_777 ^ (~(((~(g_143)) && (BHoHogg_101 & l_1423)))))))))) || (~((~(((~(BHoHohl_1361)) || (g_101 | (l_1361 || g_1171))))))))))))) | l_778)));
int32_t BHoHojl_919 = (~((((BHoHohl_1361 | l_1329) & (~((((~((~(l_1423)))) | (~(((BHoHogg_101 || (~(g_143))) | ((~(l_1052)) ^ g_1171))))) || (~((~(((~(g_101)) ^ (~(BHoHoil_1423))))))))))) & (~((~((l_778 | (~(((~((l_1361 - g_777))) & l_919)))))))))));
uint8_t BHoHokg_1171 = (~((((~((~((~(BHoHohl_1361)))))) - (~((~((~((~((~((l_1423 / (l_1052 - BHoHoil_1423))))))))))))) | (~(((((~((~(BHoHojl_919)))) | (~(g_101))) | l_1329) && ((l_919 - (~(l_1361))) >> ((g_1171 && g_777) / ((BHoHogg_101 || g_143) || (~(l_778)))))))))));
uint32_t BHoHoll_1052 = (~(((~((((((~(l_1361)) || (l_778 ^ l_1423)) - l_1329) - (~((~((~((~(g_101))))))))) ^ g_143))) | (((~((~(g_777)))) & (~(((BHoHokg_1171 >> g_1171) & ((l_919 ^ l_1052) - BHoHogg_101))))) ^ ((~(BHoHoil_1423)) - (BHoHohl_1361 && BHoHojl_919))))));
if((!((g_777<=3723980291U)) || !((!l_1361)))){
BHoHogg_101 = g_101;
BHoHohl_1361 = l_1361;
                               uint32_t B4o4ol_1052 = (~(((~((g_100 & l_1081))) * (((((~(l_1369)) | (l_1007 << g_694)) && ((l_919 ^ l_1327) * l_1433)) * l_790) & (-(l_1052))))));
int32_t B4o4obl_919 = (-((((~((~(l_919)))) && l_1007) * (~(((~(((~((l_1081 - l_1327))) - (~(l_790))))) ^ (((-((l_1369 ^ l_1433))) >> (~(((~(g_694)) | g_100)))) && (~((l_1052 & (~(B4o4ol_1052))))))))))));
int8_t B4o4ocg_100 = (~(((((~(l_1081)) | (g_100 && (l_1007 && l_1052))) & (((~(l_919)) * g_694) | l_1433)) - ((~((-(((~((-((B4o4ol_1052 ^ B4o4obl_919))))) ^ (~(l_790))))))) - ((~(l_1369)) ^ l_1327)))));
int32_t B4o4odl_1369 = (~(((-(((~((~(l_919)))) & l_790))) ^ ((~((-((B4o4ocg_100 * l_1369))))) ^ ((((-((l_1433 >> g_694))) * ((-(l_1327)) | l_1007)) - B4o4ol_1052) & ((g_100 && (l_1052 & B4o4obl_919)) ^ l_1081))))));
int8_t B4o4oel_790 = (-(((~((-(((-((~(l_919)))) & (-((-(l_1327))))))))) & (~(((~((((~(((~(l_790)) & g_694))) && l_1433) | ((l_1081 & B4o4obl_919) && g_100)))) | ((B4o4odl_1369 ^ l_1369) && ((-(((B4o4ocg_100 && l_1052) * l_1007))) && B4o4ol_1052))))))));
uint32_t B4o4ofl_1433 = (~(((~((-((l_1052 >> ((-(g_694)) && l_1327)))))) ^ (-(((~(((~((((~(l_1007)) * B4o4oel_790) - (B4o4odl_1369 && B4o4ocg_100)))) && ((l_1369 | (~(l_919))) - (-(l_1081)))))) * ((l_790 ^ ((-((~(B4o4obl_919)))) & (~(((~(l_1433)) && (~(B4o4ol_1052))))))) & (~((~(g_100)))))))))));
if((B4o4ocg_100 < g_100)){
B4o4ol_1052 = l_1052;
B4o4obl_919 = l_919;
B4o4ocg_100 = g_100;
B4o4odl_1369 = l_1369;
LABEL_4o4og: B4o4oel_790 = l_790;
B4o4ofl_1433 = l_1433;
l_1052 = (~((((-(((l_1052 >> l_1081) | (~((~(B4o4ocg_100))))))) ^ (((g_100 * (B4o4oel_790 & (-((~(l_1007)))))) - (((g_694 - B4o4obl_919) ^ l_919) | (~(l_790)))) && (B4o4odl_1369 && (~((l_1433 ^ l_1327)))))) & (~((B4o4ofl_1433 * (B4o4ol_1052 - l_1369)))))));
l_919 = (~((((l_1433 && (~(l_1081))) * l_790) * ((~(((-((-(B4o4odl_1369)))) & ((~(((-(B4o4oel_790)) ^ (~(l_1369))))) && ((l_1007 && (B4o4obl_919 && l_1327)) | (~((-(g_100))))))))) * (~(((~((~(((l_1052 ^ g_694) - B4o4ofl_1433))))) | (~(((B4o4ocg_100 & B4o4ol_1052) | l_919))))))))));
g_100 = (~(((~((~((((~(l_1369)) ^ (-(l_1081))) * (~(((~(B4o4odl_1369)) - B4o4ol_1052)))))))) | ((-((~((l_1007 - B4o4oel_790))))) | ((~((~((~(l_1327)))))) ^ (l_1433 | (-((((-((-(B4o4ofl_1433)))) << (((-(l_1052)) | l_919) * g_694)) * (B4o4obl_919 & (~(((~(B4o4ocg_100)) - (l_790 ^ (~(g_100))))))))))))))));
l_1369 = (~((((-((~((l_1433 - B4o4obl_919))))) & ((-(((l_1052 >> g_100) && (-(B4o4oel_790))))) - ((-((l_1007 && (g_694 | B4o4ofl_1433)))) | (~((-(B4o4odl_1369))))))) && (~((~(((((~(l_1327)) && (l_1369 - (-(B4o4ol_1052)))) && (~((~(l_790))))) * (-(((~(l_1081)) | (B4o4ocg_100 & l_919))))))))))));
l_790 = (~(((~((~((-((-((B4o4ofl_1433 | ((-(l_1327)) - l_1369)))))))))) * (((-((-(((g_100 * B4o4odl_1369) & (-((B4o4oel_790 & B4o4ol_1052)))))))) * ((g_694 * ((l_1007 ^ (-(B4o4ocg_100))) * (~((-(l_1052)))))) * (-((~(l_1433)))))) && (-((~(((~(l_790)) - ((B4o4obl_919 | (~(l_1081))) - (~(l_919))))))))))));
l_1433 = (-((((((l_1081 - l_790) | l_1327) | (B4o4ofl_1433 && g_694)) - (((~(((-(B4o4odl_1369)) * (B4o4oel_790 * g_100)))) ^ ((-(B4o4obl_919)) && B4o4ocg_100)) ^ (l_1052 & ((~(B4o4ol_1052)) ^ l_919)))) | (-((((-(l_1369)) && l_1433) & l_1007))))));
if((l_790 < B4o4oel_790)){
printf("l_1052=%llu\n", (unsigned long long)l_1052);
l_1052 = (~(((~((((-(l_1007)) - (~((l_1327 << l_919)))) && (-(((((B4o4oel_790 << ((~(l_1369)) << (~((B4o4odl_1369 | g_100))))) & (-((l_1052 & B4o4ofl_1433)))) | B4o4ocg_100) << (-((~((((g_694 << l_1433) * l_790) | B4o4ol_1052))))))))))) << ((~(B4o4obl_919)) | (~(l_1081))))));
goto LABEL_4o4og;
}
if(((!l_1327) && (l_919>2012425961))){
printf("l_919=%lld\n", (long long)l_919);
goto LABEL_4o4og;
}
if((!l_1081)){
printf("g_100=%lld\n", (long long)g_100);
l_790 = (-((((~((-((g_100 >> l_790))))) - ((l_1052 * l_1327) && (-((~(((~(l_1369)) && ((~(B4o4ocg_100)) | B4o4odl_1369)))))))) * (~((~(((-((l_1007 | B4o4oel_790))) & (l_1433 - (((~(l_919)) | l_1081) << (((~(B4o4obl_919)) >> B4o4ol_1052) >> ((~(g_694)) & (-(B4o4ofl_1433))))))))))))));
goto LABEL_4o4og;
}
if(!((B4o4oel_790 < B4o4ocg_100))){
printf("l_1369=%lld\n", (long long)l_1369);
l_1052 = (~(((-(l_1052)) * (-(((((((g_694 << B4o4ocg_100) | ((~(g_100)) >> l_1007)) * ((~(l_1433)) << (~(((B4o4oel_790 >> B4o4ol_1052) ^ l_1369))))) * (~((-(((l_1081 >> B4o4ofl_1433) & l_919)))))) * (-(((~(B4o4odl_1369)) && B4o4obl_919)))) | (~((~(((~(l_790)) << l_1327)))))))))));
goto LABEL_4o4og;
}
if((l_1052<1811930623U)){
printf("l_790=%lld\n", (long long)l_790);
l_790 = (-(((~((-((~((((~(l_1433)) && l_790) - (((B4o4ocg_100 << l_1007) ^ (~(B4o4obl_919))) - (~(g_694)))))))))) | (B4o4odl_1369 & (-(((((l_1327 - l_1369) ^ (-((B4o4ol_1052 - l_1052)))) & (-(((l_919 - l_1081) ^ (~(B4o4oel_790)))))) * (-((~((B4o4ofl_1433 && g_100))))))))))));
}
if(!((g_694 < B4o4ol_1052))){
printf("l_1433=%llu\n", (unsigned long long)l_1433);
l_790 = (-(((~((~((~((((-(l_1327)) & l_1007) | ((l_919 << ((B4o4odl_1369 >> l_1081) * l_1433)) >> (B4o4ol_1052 * B4o4ocg_100))))))))) | (-((((~((l_1369 && (~(((~(B4o4obl_919)) >> l_1052)))))) && (g_694 & (~(B4o4ofl_1433)))) << (~(((~((-((~(l_790)))))) >> (~((B4o4oel_790 << g_100))))))))))));
l_919 = (-((((~((((l_1369 << g_100) & ((-((l_1327 * B4o4ofl_1433))) << (l_1007 >> B4o4obl_919))) >> ((B4o4ocg_100 ^ (~(B4o4odl_1369))) >> (~(l_790)))))) << (~((l_1052 - ((l_919 << B4o4ol_1052) >> (~(B4o4oel_790))))))) ^ ((-((~((~(l_1433)))))) * (l_1081 << g_694)))));
goto LABEL_4o4og;
}
}
l_1052 = B4o4ol_1052;
l_919 = B4o4obl_919;
g_100 = B4o4ocg_100;
l_1369 = B4o4odl_1369;
l_790 = B4o4oel_790;
l_1433 = B4o4ofl_1433;
                    BHoHoil_1423 = l_1423;
                                   if ((g_18>=150))
                    BHoHojl_919 = l_919;
BHoHokg_1171 = g_1171;
BHoHoll_1052 = l_1052;
                                    while ((l_980 < l_1281) )
{
for (l_1007 = (-26); (l_1007 <= 16); l_1007++)
                    {
                        int8_t l_524 = (-8L);
                        l_524 = l_880;
                        l_1081 &= l_524;
                    };
}
                    g_101 = (~((((~(((~((~(BHoHojl_919)))) & (((~(((~(g_1171)) | BHoHogg_101))) - (g_143 - BHoHokg_1171)) ^ BHoHoll_1052)))) & (~((((~(l_1361)) & BHoHohl_1361) ^ (~((BHoHoil_1423 - g_101))))))) ^ (~(((~(l_919)) ^ (~((l_1423 || (~(((g_777 & l_1052) | ((~(l_778)) && l_1329)))))))))))));
l_1361 = (~(((~((~(g_1171)))) | (((l_919 | ((((~(BHoHogg_101)) && (g_777 | BHoHohl_1361)) >> (~(g_143))) >> (((g_101 ^ (~(l_778))) || ((~(l_1423)) || BHoHoll_1052)) && l_1052))) ^ ((~(((~(BHoHojl_919)) || (l_1329 / l_1361)))) ^ BHoHoil_1423)) | BHoHokg_1171))));
l_1423 = (~((((~((~((~((BHoHogg_101 / (~(g_101))))))))) & (~(((~((~(BHoHokg_1171)))) / ((~((BHoHoll_1052 && l_919))) ^ (((g_777 - ((~(BHoHohl_1361)) && (l_1423 && ((g_143 & g_1171) / l_1329)))) || (~(BHoHoil_1423))) ^ l_1361)))))) ^ ((~((l_778 && BHoHojl_919))) - l_1052))));
l_919 = (~(((~(((~(l_1423)) || (~(((~((BHoHohl_1361 & (~(l_1329))))) || ((BHoHogg_101 & (BHoHoll_1052 ^ (~(l_919)))) || (~((g_1171 / (~(BHoHojl_919)))))))))))) / ((~((~((~(((~(BHoHokg_1171)) - g_777))))))) & (l_1052 ^ ((~((l_1361 << ((g_101 ^ l_778) && BHoHoil_1423)))) & g_143))))));
g_1171 = (~(((~((~((~(((~((~(BHoHoil_1423)))) && BHoHoll_1052))))))) || ((~(((((~((~(((~(g_1171)) ^ l_1423))))) / (~((~(((~(g_101)) && (~((BHoHokg_1171 || BHoHogg_101))))))))) & (~((g_143 >> (((~(l_1361)) ^ l_919) && (l_778 ^ g_777)))))) || (l_1329 | BHoHojl_919)))) & (~((l_1052 - BHoHohl_1361)))))));
l_1052 = (~(((l_1361 ^ ((~((~(l_778)))) << (((~(((~(BHoHogg_101)) || (~(((~(l_1423)) | ((~(((BHoHokg_1171 || (g_101 || g_777)) || BHoHojl_919))) - (~(g_1171))))))))) | (~((~((l_919 & g_143)))))) || (~(((l_1329 || l_1052) || (BHoHoil_1423 && (~(BHoHoll_1052))))))))) || (~((~((~(BHoHohl_1361)))))))));
if((BHoHokg_1171 > l_1423)){
printf("g_101=%lld\n", (long long)g_101);
BHoHoil_1423 = (~(((~((~((~(((((l_1329 >> g_143) & BHoHogg_101) >> g_777) / ((~(g_101)) - l_1052)))))))) && ((~(((l_1361 >> g_1171) ^ BHoHokg_1171))) || ((((~((~((~(l_1423)))))) && (~((~((l_778 && BHoHoll_1052)))))) / (~((~(BHoHohl_1361))))) << (~(((~((BHoHojl_919 >> (~(BHoHoil_1423))))) && l_919))))))));
for (j = 0; j < 3; j++)
                            g_1368[j] = 5L;
                    for (g_89 = 4; (g_89 >= 0); g_89 -= 1)
    {
        int16_t l_1414 = 0x1AE5L;
        int32_t l_1416 = (-7L);
        for (BHoHohl_1361 = 0; (BHoHohl_1361 <= 0); BHoHohl_1361 += 1)
        {
            int32_t l_1415 = (-1L);
            int i;
            l_1416 &= (g_120[g_89] ^ (((((((-1L) == ((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((g_120[g_89] >= ((((((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_mod_func_int16_t_s_s((((0xC0L >= ((g_849[BHoHohl_1361] > ((((safe_add_func_int16_t_s_s(g_101, (safe_rshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u(g_694, g_100)) == (safe_unary_minus_func_uint32_t_u((((safe_sub_func_int16_t_s_s(0x780FL, 0xB48CL)) <= g_120[1]) ^ g_694)))), BHoHoll_1052)) , g_101), g_101)))) , g_120[g_89]) && l_980) ^ l_1414)) > 0xFD94L)) | g_18) == g_1217), g_120[4])) >= 0x6DB3L), 13)), 255UL)) , g_101) ^ g_101) || g_101) ^ g_101) != g_120[1])), 4)), g_101)), 0x0CL)), 0x61L)) , l_1415)) <= 0x17E2L) >= BHoHojl_919) | g_89) && l_1191[1]) || g_18));
{
                        return BHoHokg_1171;
                    }
                    return g_120[g_89];
        }
        l_1359 = g_101;
        l_1416 = (safe_add_func_int8_t_s_s(8L, ((safe_add_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(g_777, g_1217)) & ((0xA6F0F4F8L != (l_1414 == l_980)) & (+(safe_add_func_uint16_t_u_u(l_1416, g_18))))), (l_980 , g_100))) > g_1368[0])));
        for (l_1416 = 0; (l_1416 >= 0); l_1416 -= 1)
        {
            int8_t l_1432 = (-1L);
            int32_t l_1440 = 0x9D9C4759L;
if ((safe_lshift_func_uint16_t_u_s((+(safe_sub_func_uint8_t_u_u(g_849[l_1369], g_101))), 8)))
                    {
                        g_120[1] = 0xB8ED6298L;
                        if (g_101)
                            continue;
                        BHoHojl_919 &= (safe_mod_func_uint32_t_u_u(g_101, 0xE4729DD1L));
                    }
                    else
                    {
                        uint16_t l_861 = 0x987DL;
                        g_120[1] = ((safe_add_func_int16_t_s_s(0x6D2DL, l_861)) > 9L);
                        return g_849[l_1369];
                    };
                    l_1440 &= (((g_540 < (safe_add_func_uint8_t_u_u(l_980, (((safe_unary_minus_func_int32_t_s(3L)) , 250UL) , (safe_sub_func_uint8_t_u_u((((g_101 == l_1432) , ((l_1433 > ((safe_lshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u(((~((g_777 ^ g_849[0]) >= g_1217)) || l_980), (-6L))) ^ g_849[0]), l_980)) >= l_1416)) | 0xA9A8L)) & (-8L)), l_1439[5])))))) , 6UL) && g_120[1]);
        }
    }
{
        for (g_2469 = 0; g_2469 < 3; g_2469++)
        {
            transparent_crc(g_2184[k][g_2469], "g_2184[k][g_2469]", BHoHojl_919);
            if (BHoHojl_919) printf("index = [%d][%d]\n", k, g_2469);
        }
    }
                    ;
                    l_1052 = (~((((((~(l_778)) | (BHoHojl_919 << BHoHokg_1171)) / l_1361) & (((~(l_1329)) - (BHoHoil_1423 & l_1423)) ^ BHoHoll_1052)) - (((~(BHoHohl_1361)) && ((g_1171 & g_101) ^ (g_777 ^ l_919))) && (((~(BHoHogg_101)) | l_1052) >> (~(g_143)))))));
}
                                   if (((g_143<=4294967295U) && (g_143 > l_1007)))
                    if(!((g_101 > BHoHoil_1423))){
printf("l_1361=%llu\n", (unsigned long long)l_1361);
BHoHohl_1361 = (~((((g_777 & l_919) - (BHoHohl_1361 << (~((l_778 || BHoHojl_919))))) ^ ((l_1329 / (~((BHoHoil_1423 & (~((~(l_1423)))))))) - ((~((~((~((l_1361 && l_1052))))))) ^ (((BHoHogg_101 - g_1171) && (g_143 - (~(BHoHoll_1052)))) || (~((~((g_101 << BHoHokg_1171)))))))))));
BHoHojl_919 = (~(((~((~(((~((~((l_1423 >> l_1329))))) - ((l_778 - (BHoHoll_1052 - l_919)) << (~((BHoHohl_1361 / g_1171))))))))) - (((BHoHojl_919 << l_1052) / (~(l_1361))) << ((~((~(((g_101 - (~(BHoHoil_1423))) << (~((BHoHogg_101 >> BHoHokg_1171)))))))) & (g_777 | g_143))))));
l_1361 = (~(((~((((~((g_777 & (~((l_1329 << BHoHogg_101)))))) << ((((~((~(l_919)))) - g_143) & g_101) || (~(((g_1171 & (~(BHoHokg_1171))) || l_1423))))) && (~((l_1052 && ((~((~((BHoHojl_919 ^ l_1361))))) - (BHoHohl_1361 | BHoHoil_1423)))))))) - (~((~((~((BHoHoll_1052 << (~(l_778))))))))))));
}
if((g_777<3723980291U)){
printf("l_1423=%llu\n", (unsigned long long)l_1423);
BHoHoll_1052 = (~(((~((((~((((BHoHoil_1423 || l_1361) || (~(g_1171))) << (~(l_1052))))) - (~((((BHoHojl_919 ^ BHoHoll_1052) & (~(((g_101 ^ l_1423) & (~(((~(l_1329)) >> g_777))))))) - (l_778 || BHoHohl_1361))))) & (BHoHogg_101 / BHoHokg_1171)))) && (l_919 ^ g_143))));
BHoHoil_1423 = (~((((~(((~((l_1361 | (~(((~(((~(BHoHohl_1361)) | g_777))) & (~(BHoHokg_1171)))))))) && g_143))) && (~(((~(((~((BHoHojl_919 || l_919))) && g_1171))) ^ (~((~(((BHoHogg_101 >> (BHoHoll_1052 / (l_1423 >> g_101))) ^ (~(((~(l_1329)) ^ l_1052)))))))))))) / (~((~((l_778 && (~((~(BHoHoil_1423))))))))))));
l_1361 = (~((((~((~((~(((~((~(g_777)))) / (BHoHoll_1052 >> (~((l_919 && BHoHogg_101))))))))))) - ((BHoHojl_919 ^ g_1171) << g_143)) / ((l_1361 & ((l_778 - (l_1423 / g_101)) && (l_1052 || BHoHokg_1171))) >> ((~(BHoHoil_1423)) && (l_1329 || BHoHohl_1361))))));
}
if((BHoHokg_1171 > BHoHojl_919)){
{
                        uint32_t l_384 = 0UL;
                        l_922 = (safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((g_935 , (safe_mod_func_int32_t_s_s((((((((((((l_790 , ((safe_mod_func_uint8_t_u_u((g_97[2] ^ (~(+g_717))), ((((g_97[3] & ((safe_sub_func_uint16_t_u_u((l_384 >= g_694), (((((((safe_lshift_func_int16_t_s_u((g_2414 || (((((safe_rshift_func_int16_t_s_u((1UL != g_1217), 4)) , 0x8DL) >= g_100) , g_1217) , 0x343F8062L)), g_1217)) > 4L) > g_2414) , g_120[1]) != l_790) , g_2100) == 0xCB3F649DL))) | g_2414)) || g_100) | g_120[3]) && 0xE5L))) < 0UL)) >= g_97[1]) || 0x3F5AL) ^ BHoHogg_101) || g_1217) | l_1327) , 0L) || (-1L)) ^ 0x8506B361L) >= g_935) ^ (-6L)), 0x3F0D7356L))), g_100)), g_22));
                        l_1423--;
                    }
                    printf("l_919=%lld\n", (long long)l_919);
l_1423 = (~((((~((~(l_1329)))) ^ ((~((BHoHohl_1361 >> BHoHoil_1423))) << l_1052)) & (~((~(((~((((~((~(g_777)))) / ((~(g_1171)) | (~((~(l_778)))))) | ((l_919 / BHoHogg_101) >> (~(l_1361)))))) - ((BHoHokg_1171 ^ BHoHojl_919) - ((~(g_101)) & (g_143 & (~((l_1423 ^ BHoHoll_1052))))))))))))));
BHoHokg_1171 = (~(((((((~(((~(l_778)) >> l_1052))) << (~(g_777))) || BHoHojl_919) & ((l_1329 ^ (~(BHoHohl_1361))) << (~((~((l_919 | (~(g_1171))))))))) / (~(((~((g_143 / l_1423))) | g_101)))) / (((~(BHoHogg_101)) >> ((~((BHoHokg_1171 | BHoHoil_1423))) & BHoHoll_1052)) | l_1361))));
}
if(((!BHoHokg_1171) && (l_919 > l_1329))){
printf("g_1171=%llu\n", (unsigned long long)g_1171);
l_1423 = (~((((~(((l_1361 / (~((~(BHoHoil_1423))))) ^ ((~((BHoHogg_101 || (g_101 ^ l_1423)))) ^ (~(BHoHojl_919)))))) | (~(((~(l_1329)) ^ BHoHoll_1052)))) && (~((((~((~(g_777)))) << (g_1171 & (~(((l_1052 ^ l_778) << (~((~(g_143))))))))) - (~((~((~((~((l_919 || (BHoHohl_1361 || BHoHokg_1171))))))))))))))));
g_1171 = (~(((~((BHoHoll_1052 >> (~((((l_1329 >> (((BHoHokg_1171 | l_1052) && (~(g_777))) / (~((~(l_919)))))) >> ((BHoHogg_101 ^ (~((~((~(l_778))))))) - (~(BHoHoil_1423)))) >> (~((g_1171 ^ ((BHoHojl_919 << (~(l_1361))) && (BHoHohl_1361 - g_143))))))))))) || (g_101 ^ l_1423))));
}
if((!l_1361)){
printf("l_1052=%llu\n", (unsigned long long)l_1052);
BHoHohl_1361 = (~((((~(((g_777 || (~((g_101 & l_919)))) || g_143))) / (l_1329 >> (~((BHoHoil_1423 | (BHoHogg_101 & (~(l_1361)))))))) || (~((~(((((BHoHoll_1052 << (BHoHokg_1171 / l_1423)) - (~(l_778))) || (l_1052 / (BHoHojl_919 || g_1171))) / BHoHohl_1361))))))));
g_1171 = (~(((~(((~((~(l_1423)))) << (l_1052 | (~((~((~(((~(l_1361)) / ((~(BHoHojl_919)) | (~(BHoHoil_1423)))))))))))))) / (~((((~((~(g_1171)))) ^ (((~((~(g_101)))) / ((~(BHoHokg_1171)) & (l_778 - l_1329))) ^ l_919)) << (((g_777 & BHoHogg_101) / g_143) | (BHoHoll_1052 / BHoHohl_1361))))))));
BHoHojl_919 = (~(((~(((~(((~(l_1052)) && (~(g_777))))) && ((g_143 & l_919) && ((~((g_101 >> (l_1329 - g_1171)))) | (~((~((~(BHoHogg_101))))))))))) || (~(((~(((l_778 & BHoHojl_919) ^ (l_1361 / BHoHoll_1052)))) | (~((BHoHoil_1423 & ((~(BHoHokg_1171)) / (BHoHohl_1361 / (~(l_1423)))))))))))));
}
}
    }
}
static int16_t func_38(int32_t p_39, int8_t p_40, uint16_t p_41, int16_t p_42, uint16_t p_43)
{
}
static int32_t func_46(uint8_t p_47, uint16_t p_48, int16_t p_49, uint8_t p_50, uint16_t p_51)
{
    uint32_t l_74 = 0xF6860338L;
    l_74 |= 0x10DDF4F3L;
    return p_51;
}
static int16_t func_54(int32_t p_55, const uint32_t p_56, int8_t p_57, uint8_t p_58)
{
    int16_t l_68 = 0xEEB3L;
    uint16_t l_73 = 0xAD67L;
    g_59 = g_22;
    p_55 = ((((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(g_18, (safe_mod_func_int32_t_s_s(((((safe_lshift_func_int8_t_s_s(((((l_68 == l_68) <= p_56) ^ ((l_68 , (g_18 >= (!(((safe_lshift_func_uint8_t_u_s((((p_57 > ((l_68 == (~((((l_73 < g_22) & 1L) , l_68) > 1L))) <= 0x8971L)) > p_56) , g_22), 1)) & 6UL) || g_18)))) <= 0x164DL)) == p_56), 7)) == l_68) < p_56) , (-1L)), l_68)))) > p_56), (-10L))) , g_59) && g_18) , p_56);
    return l_73;
}
int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_97[i], "g_97[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_120[i], "g_120[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_717, "g_717", print_hash_value);
    transparent_crc(g_777, "g_777", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_849[i], "g_849[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_935, "g_935", print_hash_value);
    transparent_crc(g_1168, "g_1168", print_hash_value);
    transparent_crc(g_1171, "g_1171", print_hash_value);
    transparent_crc(g_1217, "g_1217", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1368[i], "g_1368[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1482[i][j][k], "g_1482[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_1540[i][j], "g_1540[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1548[i][j][k], "g_1548[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_2003[i], "g_2003[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);
    }
    transparent_crc(g_2100, "g_2100", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2184[i][j], "g_2184[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);
        }
    }
    transparent_crc(g_2254, "g_2254", print_hash_value);
    transparent_crc(g_2414, "g_2414", print_hash_value);
    transparent_crc(g_2431, "g_2431", print_hash_value);
    transparent_crc(g_2467, "g_2467", print_hash_value);
    transparent_crc(g_2468, "g_2468", print_hash_value);
    transparent_crc(g_2469, "g_2469", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_2470[i][j][k], "g_2470[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);
            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}