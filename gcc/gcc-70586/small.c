typedef unsigned int size_t;
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
static int8_t g_4 = (-1L);
static uint8_t g_12 = 0UL;
static int32_t g_22 = 0x5EE56E31L;
static uint16_t g_63 = 65532UL;
static int8_t g_83 = (-1L);
static uint32_t g_103 = 1UL;
static int32_t g_115 = 0xDA9491B2L;
static uint32_t g_161 = 8UL;
static uint16_t g_172[9] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
static uint8_t g_173 = 1UL;
static int16_t g_188 = 0x3C2DL;
static uint8_t g_217 = 0x25L;
static int32_t g_247 = 7L;
static uint16_t g_315 = 0x66F1L;
static uint32_t g_359[10][7] = {{0x3FA7BD63L,0x3FA7BD63L,4294967295UL,1UL,2UL,4294967286UL,0x86D169E2L},{4294967286UL,4294967295UL,2UL,0xEBBF1EA3L,4294967295UL,0UL,0xD3F18FECL},{4294967295UL,0xB191E2DDL,0x894467B8L,4294967295UL,2UL,0xD3F18FECL,0x3FA7BD63L},{1UL,0xC4126F55L,0xC6494F46L,0x70286BD2L,0xEF9FE435L,0xEF9FE435L,0x70286BD2L},{4294967291UL,0xC4126F55L,4294967291UL,0x3FA7BD63L,0xD3F18FECL,2UL,4294967295UL},{0UL,0xB191E2DDL,0xB191E2DDL,4294967291UL,0xD4A24541L,0xB2788A97L,0UL},{1UL,0xC6494F46L,0xD3F18FECL,1UL,2UL,1UL,4294967295UL},{0x86D169E2L,4294967295UL,2UL,0xD4A24541L,1UL,0xD3F18FECL,1UL},{0xB191E2DDL,2UL,2UL,0xB191E2DDL,4294967286UL,4294967291UL,0xD3F18FECL},{1UL,4294967295UL,0xD3F18FECL,2UL,0xC4126F55L,0xD4A24541L,0xAF15F833L}};
static int8_t g_361 = 0xE8L;
static uint16_t g_538 = 0x2A52L;
static uint32_t g_540 = 0x03F238A4L;
static int32_t g_541 = 2L;
static int16_t g_543[3] = {0xA684L,0xA684L,0xA684L};
static uint16_t g_813[7][1] = {{1UL},{1UL},{1UL},{1UL},{1UL},{1UL},{1UL}};
static int16_t g_866[8][10] = {{0xE09DL,0L,0x2212L,0x2212L,0L,0xE09DL,(-1L),0x4458L,0L,0x4458L},{0xF029L,0x2212L,0L,0x98E1L,0L,0x2212L,0xF029L,(-1L),0x1ED0L,0x1ED0L},{0xF029L,0x1ED0L,0xE09DL,0L,0L,0xE09DL,0x1ED0L,0xF029L,0L,(-1L)},{0xE09DL,0x1ED0L,0xF029L,0L,(-1L),0L,0xF029L,0x1ED0L,0xE09DL,0L},{0L,0x2212L,0xF029L,(-1L),0x1ED0L,0x1ED0L,(-1L),0xF029L,0x2212L,0L},{0x2212L,0L,0xE09DL,(-1L),0x4458L,0L,0x4458L,(-1L),0xE09DL,0L},{0L,0xF029L,0L,0L,0x4458L,0x98E1L,0x98E1L,0x4458L,0L,0L},{0x4458L,0x4458L,0x2212L,0L,0x1ED0L,0x98E1L,0xE09DL,0x98E1L,0x1ED0L,0L}};
static int32_t g_949[3][9][9] = {{{0x19FE0FA4L,0x004CDDF9L,0xA2352584L,1L,4L,(-1L),(-1L),(-4L),0xB51D2F47L},{0x02FF677CL,0xFB20F18DL,0x3FD00C3BL,4L,4L,0x3FD00C3BL,0xFB20F18DL,0x02FF677CL,0xA2352584L},{0L,0L,0x3C1CCF04L,0L,4L,0L,4L,0x80CBB97EL,1L},{0x94A69707L,(-4L),0x2773E334L,0x80CBB97EL,0x004CDDF9L,0x5E55A83DL,(-1L),(-7L),0xA2352584L},{(-1L),0xB7AAB78DL,2L,(-1L),0x7E126A91L,(-5L),1L,0L,0xB51D2F47L},{0x19FE0FA4L,0x94A69707L,0xC2B10BA8L,(-1L),(-1L),0L,0x19FE0FA4L,(-4L),(-1L)},{0xA537F120L,3L,0x0F8F2D30L,0x80CBB97EL,0L,0x3FD00C3BL,6L,0xA537F120L,0x1374F73BL},{0x04754667L,(-1L),0xA2352584L,0L,1L,0L,0xDE5814CDL,5L,0xF3A357CCL},{4L,5L,1L,1L,8L,4L,5L,0x765C689EL,0xA537F120L}},{{0L,0x62F880C4L,1L,0x514180D2L,0x62F880C4L,0x04754667L,0x004628F1L,1L,6L},{0x622710D1L,0x0710E789L,0xA537F120L,1L,0x1FC49A14L,1L,4L,0L,4L},{5L,(-5L),0L,0xA5559F9FL,0x3772736DL,1L,0x004628F1L,5L,3L},{0x9C3268C6L,0L,3L,0L,(-5L),0L,5L,5L,0L},{0x87EFAE68L,0L,0xB7AAB78DL,0L,0x87EFAE68L,4L,0xDE5814CDL,0x0B2B9C01L,0x04754667L},{5L,(-5L),4L,0x514180D2L,0x004628F1L,0x02FF677CL,1L,0L,0x7E126A91L},{4L,0x0710E789L,0x62D64424L,(-3L),1L,4L,0x0710E789L,0x1FC49A14L,4L},{0x11A29F7FL,0x62F880C4L,(-2L),0xDE5814CDL,0xA5559F9FL,0L,0x004628F1L,0x11A29F7FL,0L},{0x11A29F7FL,5L,0xA537F120L,0x11A29F7FL,(-5L),1L,0x1FC49A14L,0L,(-1L)}},{{4L,0x1FC49A14L,0xB7AAB78DL,0xA5559F9FL,0x52EAD88AL,1L,1L,0x765C689EL,3L},{5L,0xB2702615L,0x7E126A91L,0x0B2B9C01L,(-5L),0x04754667L,0x61EF5EBCL,0L,0xFB20F18DL},{0x87EFAE68L,0x622710D1L,0x02FF677CL,1L,0xA5559F9FL,4L,6L,0xA5559F9FL,0xFB20F18DL},{0x9C3268C6L,(-5L),(-1L),0xDE5814CDL,1L,0L,1L,0x9C3268C6L,3L},{5L,5L,0x62D64424L,(-3L),0x004628F1L,(-2L),5L,0x1FC49A14L,(-1L)},{0x622710D1L,0xA5559F9FL,1L,0xDE5814CDL,0x87EFAE68L,(-4L),1L,1L,0L},{0L,0x61EF5EBCL,4L,1L,(-5L),0L,(-5L),1L,4L},{4L,4L,0x02FF677CL,0x0B2B9C01L,0x3772736DL,1L,8L,0x1FC49A14L,0x7E126A91L},{0x9C3268C6L,0xB2702615L,0xF3A357CCL,0xA5559F9FL,0x1FC49A14L,0L,0x61EF5EBCL,0x9C3268C6L,0x04754667L}}};
static int16_t g_974 = (-1L);
static uint8_t g_1129 = 252UL;
static int32_t g_1215[6] = {0x2F236E6CL,0x2F236E6CL,1L,0x2F236E6CL,0x2F236E6CL,1L};
static uint8_t g_1460 = 0x4FL;
static int16_t g_1524 = (-9L);
static uint8_t g_2177[6][4][10] = {{{0xFBL,247UL,0xB9L,255UL,255UL,0xFBL,251UL,0xB9L,255UL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L},{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L}},{{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L},{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L}},{{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L},{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L}},{{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L},{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L}},{{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L},{4UL,0xB4L,0xDBL,0xB9L,0xFBL,4UL,255UL,0xDBL,0xFBL,0xFBL},{4UL,255UL,0xDBL,0xFBL,0xFBL,0xDBL,255UL,4UL,0xFBL,0xB9L}},{{247UL,255UL,251UL,0xDBL,4UL,247UL,255UL,251UL,4UL,4UL},{247UL,255UL,251UL,4UL,4UL,251UL,255UL,247UL,4UL,0xDBL},{247UL,255UL,251UL,0xDBL,4UL,247UL,255UL,251UL,4UL,4UL},{247UL,255UL,251UL,4UL,4UL,251UL,255UL,247UL,4UL,0xDBL}}};
static int32_t g_2352[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static int8_t g_2420 = (-2L);
static int32_t g_2476 = 0x7B48C0CFL;
static int32_t g_2576 = 6L;
static uint32_t g_2598 = 0xF45B1DEAL;
static uint8_t g_2710 = 0x47L;
static int32_t g_3152 = (-1L);
static int32_t g_3258 = 5L;
static uint16_t g_3261 = 0x2ECEL;
static int8_t g_3409 = 8L;
static uint8_t g_3421 = 0UL;
static int32_t g_3484 = 1L;
static int8_t g_3781 = 1L;
static int32_t g_3956[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static uint32_t g_3957 = 0UL;
static uint8_t func_6(uint32_t p_7);
static uint16_t func_8(int16_t p_9);
static int32_t func_15(uint32_t p_16, int8_t p_17, uint32_t p_18, uint32_t p_19, uint32_t p_20);
static int32_t func_29(uint8_t p_30, uint8_t p_31, uint16_t p_32, uint32_t p_33, int32_t p_34);
static int8_t func_35(int8_t p_36, int16_t p_37, int32_t p_38, int32_t p_39);
static int32_t func_42(int16_t p_43, int32_t p_44, uint32_t p_45);
static int32_t func_46(int8_t p_47);
static int32_t func_48(uint32_t p_49, int16_t p_50);
static int8_t func_57(int16_t p_58, uint32_t p_59, uint32_t p_60, int32_t p_61);
static int32_t func_1(void)
{
    uint32_t l_5[6][7] = {{0x327439CBL,0xB03629AAL,0UL,0UL,0xB03629AAL,0x327439CBL,2UL},{1UL,0UL,0x91F782A1L,2UL,1UL,1UL,2UL},{0xFE4B2830L,0x1D2250DBL,0xFE4B2830L,7UL,2UL,1UL,0x327439CBL},{0x91F782A1L,0UL,1UL,7UL,1UL,0UL,0x91F782A1L},{0UL,0xB03629AAL,0x327439CBL,2UL,0UL,1UL,0UL},{0UL,0UL,0UL,0UL,0xFE4B2830L,1UL,7UL}};
    int32_t l_2266[5];
    int32_t l_2290 = (-5L);
    uint8_t l_2292 = 0xB3L;
    int32_t l_2294 = (-3L);
    int32_t l_2296 = 1L;
    int32_t l_2408[5][6] = {{0L,0L,0xC284D198L,1L,0L,1L},{0L,0L,0L,1L,0L,0xC284D198L},{0L,0L,1L,1L,0L,0L},{0L,0L,0xC284D198L,1L,0L,1L},{0L,0L,0L,1L,0L,0xC284D198L}};
    int8_t l_2418[6][5] = {{0L,0L,0L,0L,0xCAL},{0xD8L,0xA7L,0L,6L,0xCAL},{0L,0xD8L,(-1L),(-8L),(-1L)},{(-8L),(-8L),0xCAL,6L,0L},{0x38L,1L,0xCAL,0L,0L},{(-9L),0xCAL,(-1L),0xCAL,(-9L)}};
    int8_t l_2465 = 0x95L;
    int8_t l_2526 = 1L;
    int16_t l_2601 = 0L;
    uint8_t l_2674 = 0x97L;
    uint32_t l_2692 = 1UL;
    uint32_t l_2790[6][3] = {{0xCD6BF178L,0xCD6BF178L,0xCD6BF178L},{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL},{0xCD6BF178L,0xCD6BF178L,0xCD6BF178L},{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL},{0xCD6BF178L,0xCD6BF178L,0xCD6BF178L},{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL}};
    uint32_t l_2841 = 18446744073709551607UL;
    uint32_t l_2899 = 2UL;
    int32_t l_3017 = 0x0B37558CL;
    int32_t l_3116 = 0L;
    uint8_t l_3151 = 0x0AL;
    uint16_t l_3171 = 65535UL;
    uint32_t l_3257 = 1UL;
    int32_t l_3262 = (-1L);
    uint32_t l_3399 = 7UL;
    uint8_t l_3408 = 0x12L;
    uint8_t l_3424[2][3][5] = {{{0x72L,0x5BL,0xBDL,2UL,0xBDL},{1UL,1UL,0x5BL,255UL,0xEBL},{0x72L,0xEBL,0x76L,255UL,255UL}},{{255UL,0x16L,255UL,0x72L,0xEBL},{255UL,0xBDL,0x16L,0x5BL,0xEBL},{1UL,2UL,2UL,1UL,255UL}}};
    int32_t l_3471 = 0x35FC95CDL;
    int32_t l_3492 = 0x5429EDD7L;
    uint16_t l_3534 = 3UL;
    uint32_t l_3573[10] = {6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL,6UL};
    uint8_t l_3655 = 1UL;
    int8_t l_3667 = (-1L);
    int8_t l_3683 = (-1L);
    uint16_t l_3702 = 0x4BDBL;
    int32_t l_3707 = 1L;
    int32_t l_3721 = 0x7BC1F5CCL;
    int8_t l_3741 = 0x63L;
    uint8_t l_3752 = 255UL;
    int32_t l_3755[2][2][7] = {{{0x55919521L,0x55919521L,0x55919521L,0x55919521L,0x55919521L,0x55919521L,0x55919521L},{0L,0L,0L,0L,0L,0L,0L}},{{0x55919521L,0x55919521L,0x55919521L,0x55919521L,0x55919521L,0x55919521L,0x55919521L},{0L,0L,0L,0L,0L,0L,0L}}};
    uint16_t l_3775 = 0x252EL;
    int32_t l_3872 = 0L;
    int32_t l_3873 = 0xE2017063L;
    int32_t l_3874[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
    int32_t l_3891 = 0x323AE330L;
    int32_t l_3908 = (-7L);
    int8_t l_4035 = 1L;
    if ((((safe_lshift_func_uint16_t_u_s(g_4, 8)) | l_5[1][6]) != func_6((l_2266[3] = ((g_813[3][0] = func_8(l_5[1][6])) || (!(l_5[1][6] <= 1UL)))))))
                                     ;
}
static uint8_t func_6(uint32_t p_7)
{
    int16_t l_2267 = 0x1B23L;
    l_2267 = 0x31F7CEF5L;
                                        if (((!l_2267) || !(l_2267)) )
{
{
                transparent_crc(g_2177[g_247][g_3258][g_541], "g_2177[g_247][g_3258][g_541]", g_3258);
                if (g_3258) printf("index = [%d][%d][%d]\n", g_247, g_3258, g_541);
            }
}
  return l_2267;
}
static uint16_t func_8(int16_t p_9)
{
    uint16_t l_21 = 0xEB38L;
    int32_t l_26 = 0xD437F1BDL;
    int32_t l_27 = 1L;
    int8_t l_28 = 0x24L;
    int32_t l_975[3][1];
    uint16_t l_1001 = 0x0784L;
    uint16_t l_1077 = 0x3CE7L;
    uint16_t l_1180 = 0UL;
    int8_t l_1359[7] = {0L,0xD9L,0L,0L,0xD9L,0L,0L};
    uint16_t l_1377 = 1UL;
    int8_t l_1434 = 2L;
    int16_t l_1631 = 0xB5F5L;
    int32_t l_1633 = 0xE2E5D52BL;
    uint32_t l_1760 = 0UL;
    int32_t l_1768 = 1L;
    int32_t l_1836 = 0x207434B2L;
    uint16_t l_1956 = 8UL;
    int16_t l_2163 = 0x991BL;
    l_975[0][0] = (((safe_add_func_uint8_t_u_u((g_974 = ((g_12 = (-5L)) & (safe_mod_func_uint8_t_u_u((0x68L ^ (func_15(l_21, (((g_22 = g_4) >= ((l_27 = (g_4 == (l_26 = ((p_9 != (p_9 ^ (-1L))) == (safe_mod_func_int32_t_s_s(((~g_4) < p_9), g_4)))))) < g_4)) > p_9), l_21, g_4, l_28) | 4294967295UL)), l_28)))), 3L)) == g_4) <= 0L);
    if (g_540)
    {
        int32_t l_982 = (-1L);
        int32_t l_987 = 0xB0431CEDL;
        int32_t l_1000[3][7] = {{0x510B92E6L,0x510B92E6L,3L,0x510B92E6L,0x510B92E6L,3L,0x510B92E6L},{0x510B92E6L,0x285A33BBL,0x285A33BBL,0x510B92E6L,0x285A33BBL,0x285A33BBL,0x510B92E6L},{0x285A33BBL,0x510B92E6L,0x285A33BBL,0x285A33BBL,0x510B92E6L,0x285A33BBL,0x285A33BBL}};
        uint16_t l_1153 = 0x1594L;
        int32_t l_1179 = 0xF7BD02E2L;
        int16_t l_1271 = 0x809CL;
        uint32_t l_1288 = 0x20D07CB7L;
        int16_t l_1320 = (-1L);
        uint8_t l_1374[5];
        int32_t l_1450 = 0xAAB2BE5DL;
        int32_t l_1574[10][5][5]                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        ;
        int16_t l_1736 = 0xB9D6L;
        if ((safe_sub_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((l_1001 = (safe_add_func_uint32_t_u_u(((((g_217 = (l_982 == (g_315 = (0x1527L != ((((((safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s(p_9, (l_987 = 0x122DL))), 0xAF5DB42CL)) < (7L < g_949[2][8][7])) <= p_9) > ((((((safe_mod_func_int8_t_s_s(((((l_1000[1][6] = ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int16_t_s_s(((l_975[0][0] <= p_9) && 0x7284A069L), 6)) >= l_982), g_217)) <= p_9), p_9)), l_982)), 3)) <= l_982)) < g_188) != g_172[4]) < p_9), 0xE7L)) || g_103) <= 0x4BB63EC3L) ^ l_28) & 0x178DB0B5L) & l_982)) <= l_21) == g_949[1][4][1]))))) != 0x11L) && p_9) >= g_103), p_9))), 4294967295UL)) && l_982), (-7L))))
        {
            int32_t l_1044 = 0x5A13B012L;
            uint32_t l_1107 = 0x28F65E86L;
            int32_t l_1131 = (-4L);
            int8_t l_1145[5] = {0x88L,0x88L,0x88L,0x88L,0x88L};
            for (p_9 = 0; (p_9 <= (-19)); --p_9)
            {
                int32_t l_1012 = (-1L);
                uint16_t l_1029 = 0x9278L;
                l_1029 = (g_22 = (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(l_1012, g_543[1])), (((l_975[0][0] = (((!(~((safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(l_1000[1][6], ((0x22L > (safe_rshift_func_uint8_t_u_u(250UL, 0))) <= ((safe_mod_func_int8_t_s_s((0x271358C7L <= ((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(g_22, ((safe_sub_func_uint32_t_u_u(5UL, (0x75D2E236L <= g_172[4]))) < 1L))), p_9)) > g_866[4][0])), g_866[4][0])) == p_9)))), l_1012)) | 0x106106EEL))) ^ g_173) != 9L)) != (-5L)) < p_9))), 0)) ^ g_22), p_9)));
                if (l_1012)
                    break;
                l_1044 = ((-2L) > (safe_sub_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(0x7DL, 1)) > (safe_add_func_int32_t_s_s(0x5DAB9F54L, g_217))), (4294967295UL > ((l_1000[1][6] == ((safe_sub_func_int32_t_s_s((l_982 = p_9), ((g_173 > ((g_361 <= p_9) <= g_103)) >= g_543[1]))) == g_538)) ^ l_1000[1][6])))) ^ 0xF9C6D80AL), g_188)) != p_9), 0)), 0x7AL)));
                g_22 = (+1UL);
            }
        }
                                            while ((!l_982) )
{
{
                l_975[2][0] = g_974;
            }
}
        for (l_1288 = 0; (l_1288 <= 49); l_1288 = safe_add_func_uint32_t_u_u(l_1288, 8))
        {
            int32_t l_1386[8][6][5] =   {1L,0x13047496L,0x24F15A40L,0x76EFD044L,(-1L)}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      ;
            uint16_t l_1401 = 2UL;
            int32_t l_1426 = (-10L);
            uint8_t l_1449 = 0xD0L;
            int32_t l_1456 = 1L;
            int16_t l_1467 = 0x2779L;
            int i, j, k;
            {
                uint32_t l_1423 = 0xE576516EL;
                int32_t l_1424 = 0x76D7F62DL;
                int32_t l_1431 = 0x4C9012BCL;
                int32_t l_1432 = (-8L);
                uint8_t l_1527 = 6UL;
                if ((safe_lshift_func_int8_t_s_u((p_9 && 0xDCE4L), (safe_lshift_func_int8_t_s_u(((l_1424 = (safe_sub_func_uint16_t_u_u((g_315 = (l_27 < (((((((g_63 = (!(safe_lshift_func_int8_t_s_s((!((safe_add_func_int8_t_s_s((l_1386[6][5][0] > 0xB5EEL), p_9)) || (p_9 && (0xDC53108EL > (safe_unary_minus_func_int16_t_s((((safe_rshift_func_uint16_t_u_s((l_1179 = (safe_mod_func_int32_t_s_s(((safe_add_func_uint16_t_u_u((0x6B50CB0AL | p_9), g_4)) < 0x1DL), 0xBC2AB98CL))), 9)) == 0x0979578BL) == g_543[0]))))))), l_1359[3])))) == l_1001) == 0UL) && (-10L)) || l_1423) ^ 1UL) < 0xE469L))), g_103))) ^ 0xAFL), 2)))))
                {
                    uint16_t l_1425 = 0x3E3BL;
                    if (p_9)
                    {
                        int32_t l_1429 = 0x011288BAL;
                        int32_t l_1433 = 0x32668139L;
                        l_1425 = p_9;
                        l_1426 = ((l_1000[1][6] = g_115) <= 0x6EL);
                        l_1433 = ((safe_rshift_func_int8_t_s_u(g_217, 5)) & (((l_1424 = l_1429) == (((~0xEE002086L) & (l_1431 = ((g_63 = 2UL) > (0x60L > 0UL)))) < (0xF6L || (g_83 = g_543[2])))) == (l_1432 = ((g_866[7][4] = (-10L)) != 0x26A5L))));
                    }
                    else
                    {
                        int16_t l_1435 = 0x2B29L;
                        l_1434 = 0x50E79F57L;
                        l_1435 = g_949[2][3][1];
{
            for (l_26 = 0; l_26 < 9; l_26++)
            {
                transparent_crc(g_949[l_27][l_1450][l_26], "g_949[l_27][l_1450][l_26]", l_1431);
                if (l_1431) printf("index = [%d][%d][%d]\n", l_27, l_1450, l_26);
            }
        }
                    l_1426 = (p_9 && (safe_rshift_func_int16_t_s_s(l_1425, 10)));
                        return g_12;
                    }
                    l_975[2][0] = (g_173 ^ (safe_add_func_uint16_t_u_u((l_1423 | ((p_9 == p_9) || ((((safe_mod_func_int32_t_s_s(((l_1426 = (safe_mod_func_uint8_t_u_u(1UL, p_9))) & (g_63 = ((l_26 = p_9) ^ (~((safe_lshift_func_uint16_t_u_u((l_1450 = ((safe_sub_func_uint16_t_u_u(g_541, (g_172[4] = ((l_1449 != l_1001) || p_9)))) > g_541)), 4)) < p_9))))), l_1425)) || 0UL) | 8L) >= p_9))), 1UL)));
                }
                else
                {
                    int32_t l_1452 = 0xCF7B80C9L;
                    int32_t l_1459[1];
                                                   int16_t Bogoggl_2163 = (~(((~((~((~(l_1452)))))) ^ ((~((~((l_1633 | (g_1460 ^ (~(l_1434)))))))) ^ (~((g_63 % ((~((((~(g_247)) ^ (~(l_2163))) + (g_1129 & g_540)))) | (~(l_1456))))))))));
uint8_t Bogoghg_1460 = (~(((~((~(g_247)))) | (~(((~((((~((~(g_63)))) & (Bogoggl_2163 & g_540)) >> (~((~((l_1434 & (l_1452 & g_1129))))))))) << (l_1633 & (g_1460 % (~((l_1456 ^ l_2163)))))))))));
int32_t Bogogig_247 = (~((((g_1129 + (~(g_247))) % ((~((~((~(l_1456)))))) - (((~(Bogoggl_2163)) & l_1633) & (~(l_1434))))) + ((~(((l_1452 | g_63) & (~(l_2163))))) - ((g_540 ^ (~(Bogoghg_1460))) % (~(g_1460)))))));
uint32_t Bogogjg_540 = (~((((~((l_2163 - (~((Bogoghg_1460 | ((~(Bogogig_247)) + (~(l_1456))))))))) | (~(((l_1633 | g_1129) - (g_63 | g_540))))) ^ (~((~((~((((~(Bogoggl_2163)) % l_1434) & ((~((l_1452 - (~(g_247))))) + g_1460)))))))))));
int32_t Bogogkl_1452 = (~((Bogoggl_2163 - (((g_63 - (~(g_247))) ^ (g_1129 + (~(l_1633)))) & ((((Bogogig_247 | l_1434) ^ l_1456) + Bogoghg_1460) - (((~((g_540 % l_1452))) ^ Bogogjg_540) - (~((l_2163 + g_1460)))))))));
uint16_t Bogoglg_63 = (~(((~((~(l_1434)))) - ((~(((~(g_247)) ^ (~(Bogogkl_1452))))) ^ (~((~((~(((((g_540 ^ l_2163) - (Bogoggl_2163 + (~((Bogoghg_1460 << l_1456))))) - ((~(((~(l_1452)) % (~((~(g_1129))))))) - ((g_63 + l_1633) ^ (~(Bogogig_247))))) ^ (~((Bogogjg_540 ^ g_1460))))))))))))));
Bogoglg_63 = g_63;
                               uint32_t BGgGgl_1423 = (~(((((~((g_173 << l_1434))) && g_1129) || ((g_974 | l_26) - (l_1401 & (l_1631 ^ l_1467)))) || (~((l_1423 << l_1424))))));
int8_t BGgGgbl_1434 = (~((((((~((g_1129 && BGgGgl_1423))) + l_26) + l_1434) || (l_1423 ^ (~(g_974)))) + (~((((l_1631 || (~((l_1401 ^ l_1467)))) && g_173) + l_1424))))));
int32_t BGgGgcl_26 = (~(((~(((~(((g_974 && g_1129) << ((~(BGgGgbl_1434)) && l_26)))) | (~(l_1423))))) && ((((l_1401 + (g_173 >> l_1434)) || l_1467) + l_1424) << (BGgGgl_1423 / l_1631)))));
int16_t BGgGgdg_974 = (~(((~(((~(g_173)) % (~((g_974 % l_1467)))))) + (((l_1631 || (BGgGgbl_1434 + l_1401)) || ((~(l_1423)) ^ (~(((BGgGgcl_26 || BGgGgl_1423) || l_26))))) ^ ((l_1424 << l_1434) | g_1129)))));
uint8_t BGgGgeg_1129 = (~(((~(((~((g_173 - (~((~((g_1129 | BGgGgl_1423)))))))) - (((l_1423 & (l_1401 && BGgGgdg_974)) + (((l_1434 + BGgGgbl_1434) | (~(l_26))) + (~(BGgGgcl_26)))) + l_1424)))) + (~((~(((l_1631 - l_1467) + g_974))))))));
uint16_t BGgGgfl_1401 = (~(((((~(g_173)) && ((~((l_1631 && BGgGgl_1423))) % (~(l_26)))) + (BGgGgcl_26 % (~((l_1434 / g_1129))))) || (((g_974 & l_1423) % l_1401) && (~(((BGgGgdg_974 - (BGgGgbl_1434 && l_1424)) && ((~(BGgGgeg_1129)) + (~(l_1467))))))))));
l_1423 = (~(((~((~((~((((~(BGgGgfl_1401)) % (~(l_1434))) + l_1424))))))) / (~((((BGgGgcl_26 && l_1423) >> (~((~(g_173))))) & (((((BGgGgl_1423 && BGgGgbl_1434) + (~(l_1401))) - BGgGgeg_1129) ^ ((BGgGgdg_974 - l_26) - g_1129)) || (l_1467 % (g_974 | l_1631)))))))));
l_26 = BGgGgcl_26;
l_1401 = BGgGgfl_1401;
                               uint16_t BGgGggl_1956 = (~(((~(((~((g_217 << g_103))) + (~((l_1956 ^ l_1179)))))) + ((((~(g_161)) % (g_538 & g_83)) % (~(l_1377))) || (l_1736 / l_1401)))));
int8_t BGgGghg_83 = (~(((~((~((g_217 % l_1956))))) | (((~(l_1401)) ^ ((((g_83 - (l_1377 % l_1736)) + g_161) % (~(l_1179))) + BGgGggl_1956)) | (g_538 & g_103)))));
uint32_t BGgGgig_103 = (~(((((~((~(l_1401)))) % ((BGgGghg_83 | (~((BGgGggl_1956 && (~((~(g_161)))))))) | ((l_1179 / g_83) && (~((~(g_103))))))) ^ (~(l_1377))) / (((~((l_1956 ^ l_1736))) - g_538) >> g_217))));
int32_t BGgGgjl_1179 = (~(((~((g_103 + (BGgGghg_83 / (l_1179 + l_1736))))) & ((((~((g_538 & g_217))) && BGgGggl_1956) >> ((~(BGgGgig_103)) && (~((l_1401 << (l_1377 || l_1956)))))) + (~((~((g_83 ^ (~(g_161)))))))))));
uint8_t BGgGgkg_217 = (~((((~(l_1179)) | (~(((g_217 && (~(g_538))) - (l_1956 ^ (~((~((BGgGggl_1956 ^ l_1377)))))))))) ^ ((g_83 % (~(l_1736))) % (g_103 ^ ((~(((~((~(BGgGgjl_1179)))) | BGgGghg_83))) / ((l_1401 << g_161) ^ BGgGgig_103)))))));
uint16_t BGgGgll_1377 = (~((((~(((l_1956 - (BGgGgkg_217 % l_1179)) ^ BGgGggl_1956))) << (((~((~((g_161 && (~(g_83))))))) || (~(l_1736))) && (((~(BGgGghg_83)) % (~(g_103))) && (~(BGgGgig_103))))) / ((l_1377 >> (g_217 & BGgGgjl_1179)) - (~((g_538 ^ l_1401)))))));
if((!g_538)){
printf("l_1179=%lld\n", (long long)l_1179);
break;
}
l_1956 = BGgGggl_1956;
                    if((!g_1129)){
printf("l_2163=%lld\n", (long long)l_2163);
Bogoghg_1460 = (~(((~((~((~((l_1434 % (~(Bogoghg_1460))))))))) & (~((((g_1460 & Bogogkl_1452) ^ (~(l_1633))) + ((((Bogogjg_540 << (Bogogig_247 - g_1129)) % l_1452) & (~((((Bogoggl_2163 | (~((g_247 & (~(l_1456)))))) >> (~(Bogoglg_63))) >> ((~((~(l_2163)))) | (~(g_540))))))) >> g_63)))))));
continue;
}
LABEL_ogogm: if((Bogoglg_63>1)){
printf("g_63=%llu\n", (unsigned long long)g_63);
Bogogig_247 = (~(((~((((~((~((l_1456 << l_1633))))) % Bogogjg_540) - (Bogoglg_63 >> ((~(Bogoghg_1460)) ^ g_63))))) & ((((l_1434 ^ Bogogkl_1452) + (~(((~(g_247)) | (~((~((Bogogig_247 >> l_1452))))))))) | (~((~((~(l_2163))))))) + (g_1460 & (g_1129 + (g_540 | Bogoggl_2163)))))));
l_1452 = (~((((g_247 ^ l_1456) % (~(((~(((~((l_1434 % (Bogoglg_63 % (~(Bogoggl_2163)))))) << ((Bogogkl_1452 + (~(l_1452))) & (~((~((~((~(g_540)))))))))))) + (~((~((Bogoghg_1460 | g_63))))))))) - (~((((l_1633 % (g_1460 ^ l_2163)) >> g_1129) ^ ((~(Bogogjg_540)) | Bogogig_247)))))));
}
                }
                                               int32_t BGgGgul_1432 = (~((((((~(g_974)) | l_1631) - l_1377) + (~(((~((~(l_1431)))) % (~((~(g_1460)))))))) | (~((l_1426 - ((~((l_1432 ^ g_538))) - (~(((~(g_83)) ^ l_1450))))))))));
                    int32_t l_1493[5];
                    for (i = 0; i < 5; i++)
                        l_1493[i] = 0x26DA5657L;
                    l_1426 = (g_247 = ((((((((l_987 = ((g_247 <= ((safe_mod_func_uint32_t_u_u(((g_83 = (((((0L ^ ((safe_lshift_func_int16_t_s_s((((safe_add_func_int16_t_s_s(1L, (p_9 = (safe_sub_func_uint32_t_u_u((((l_1493[0] & (!(p_9 < ((((0x60781BCDL >= (safe_mod_func_int32_t_s_s((((safe_mod_func_int32_t_s_s((l_1271 || (((l_975[0][0] = (((safe_mod_func_int16_t_s_s(l_1493[1], (~0x8BL))) ^ l_1153) ^ l_1493[0])) < l_1423) & 0xCC6EBE87L)), p_9)) > 0xB5L) | 0UL), p_9))) != p_9) ^ 4294967287UL) <= p_9)))) > l_27) && g_540), l_1423))))) || g_172[4]) ^ l_26), l_1401)) || p_9)) && 0x6EL) != l_1493[0]) >= l_1493[4]) < 0x0103082AL)) & 1L), l_1431)) >= g_63)) != g_540)) | l_1493[3]) == l_1434) ^ 0xF2A5F255L) <= 0xB1BFL) != (-1L)) & l_1493[0]) ^ (-1L)));
                                                       if (l_1633)
                    l_1574[8][3][0] = (safe_add_func_uint16_t_u_u(((safe_unary_minus_func_uint32_t_u(p_9)) < (!(safe_rshift_func_uint8_t_u_s(((l_1179 = l_1450) < (safe_rshift_func_int8_t_s_s((g_83 = p_9), (safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(g_866[0][6], g_543[0])) & ((((~(safe_add_func_int16_t_s_s(((g_813[1][0] | (l_975[0][0] >= ((safe_add_func_uint8_t_u_u(((p_9 | (l_26 = ((l_1456 = (safe_rshift_func_uint8_t_u_s((((((safe_mod_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((((1L == 0x2590L) | 0UL) == 0x7D765DB6L), g_361)), 4)), g_1215[4])) != (-3L)), l_1527)) > 1UL) & l_1359[6]) | p_9) > 2L), 1))) | l_1493[0]))) >= l_1153), 0x0EL)) && 0xFBL))) ^ 1UL), l_1449))) < 1UL) == 0x4EL) && l_975[0][0])), l_975[0][0])), 0x54L))))), 1)))), g_173));
                l_1426 = p_9;
            }
        }
    }
    else
    {
        uint16_t l_1806 = 0xCFCDL;
        int32_t l_1813 = 0xA2F6670EL;
        int8_t l_1829 = 0xF1L;
        int32_t l_1866[3][9] = {{(-1L),0x50DE20A4L,(-1L),0x684B7A88L,0xFFD23646L,0x69C74DB6L,0xC9D6D157L,1L,1L},{0x5130844BL,0x50DE20A4L,1L,0xFFD23646L,1L,0x50DE20A4L,0x5130844BL,0xC9D6D157L,0x703A697CL},{0xC9D6D157L,0x69C74DB6L,0xFFD23646L,0x684B7A88L,(-1L),0x50DE20A4L,(-1L),0x684B7A88L,0xFFD23646L}};
        int32_t l_1867 = 0x9412EF4CL;
        uint32_t l_1954[5][7][5] = {{{18446744073709551615UL,0x2D7E9CF2L,0x99BF8AD8L,0xDE233414L,18446744073709551615UL},{18446744073709551612UL,1UL,8UL,0UL,0xBB8041F1L},{0x214A9EA3L,0xDA497574L,0UL,0x2D7E9CF2L,18446744073709551615UL},{0xA197DEFCL,0UL,0UL,0xA197DEFCL,0xFDB24C69L},{18446744073709551615UL,0x70947AEBL,0xAB58004CL,0x177B7774L,0UL},{18446744073709551613UL,4UL,0xBB8041F1L,0xFDB24C69L,0x5483EC4DL},{0x99BF8AD8L,1UL,18446744073709551609UL,18446744073709551615UL,0x8EDD1C86L}},{{1UL,18446744073709551613UL,1UL,1UL,0x4BE9CFC3L},{18446744073709551615UL,0x70947AEBL,0x107B98D8L,0x5A88219EL,0xAB58004CL},{0xA197DEFCL,18446744073709551612UL,4UL,0UL,18446744073709551615UL},{0x7DF9D7B6L,18446744073709551615UL,0x107B98D8L,18446744073709551612UL,0x107B98D8L},{0xBB8041F1L,0xBB8041F1L,1UL,0UL,0xFDB24C69L},{0UL,0x0E457A2DL,18446744073709551609UL,1UL,0x6F310635L},{18446744073709551609UL,0x5483EC4DL,0xBB8041F1L,8UL,18446744073709551608UL}},{{1UL,0x0E457A2DL,0x99BF8AD8L,0x099BD9B8L,1UL},{18446744073709551615UL,0xBB8041F1L,0UL,0xA197DEFCL,0x1231ACB6L},{2UL,18446744073709551615UL,0UL,0xDE233414L,0UL},{0UL,18446744073709551612UL,18446744073709551608UL,0x5483EC4DL,1UL},{2UL,0x70947AEBL,0UL,0x70947AEBL,2UL},{18446744073709551615UL,18446744073709551613UL,1UL,18446744073709551608UL,0xBB8041F1L},{1UL,1UL,0xAB58004CL,18446744073709551607UL,0x862F632DL}},{{18446744073709551609UL,4UL,0x86D70A80L,18446744073709551613UL,0xBB8041F1L},{0UL,18446744073709551607UL,18446744073709551615UL,0x38C0BC05L,2UL},{0xBB8041F1L,0UL,0xA197DEFCL,0x1231ACB6L,1UL},{0x7DF9D7B6L,0x756BE40BL,0x214A9EA3L,0xDA497574L,0UL},{0xA197DEFCL,1UL,18446744073709551612UL,0x1231ACB6L,0x1231ACB6L},{18446744073709551615UL,0x5A88219EL,18446744073709551615UL,0x38C0BC05L,1UL},{1UL,0UL,0xFDB24C69L,18446744073709551613UL,18446744073709551608UL}},{{0x99BF8AD8L,0xE90C99D2L,2UL,18446744073709551607UL,0x6F310635L},{18446744073709551613UL,0x1231ACB6L,0xFDB24C69L,18446744073709551608UL,0xFDB24C69L},{0x214A9EA3L,0x5478B9A4L,18446744073709551615UL,0x70947AEBL,0x107B98D8L},{1UL,0x4BE9CFC3L,18446744073709551612UL,0x5483EC4DL,18446744073709551615UL},{0x862F632DL,1UL,0x214A9EA3L,0xDE233414L,0xAB58004CL},{8UL,0x4BE9CFC3L,0xA197DEFCL,0xA197DEFCL,0x4BE9CFC3L},{0x6F310635L,0x5478B9A4L,18446744073709551615UL,0x099BD9B8L,0x8EDD1C86L}}};
        uint32_t l_2001 = 0x2D326036L;
        uint8_t l_2002 = 0x26L;
        int16_t l_2117[2][6][4] = {{{(-10L),0L,0L,0L},{0x0FD9L,0x0FD9L,0x74D4L,0L},{0L,(-10L),0x74D4L,(-10L)},{0x0FD9L,0x0E78L,0L,0x74D4L},{(-10L),0x0E78L,0x0E78L,(-10L)},{0x0E78L,(-10L),0x0FD9L,0L}},{{0x0E78L,0x0FD9L,0x0E78L,0L},{(-10L),0L,0L,0L},{0x0FD9L,0x0FD9L,0x74D4L,0L},{0L,(-10L),0x74D4L,(-10L)},{(-5L),0L,0x74D4L,0x0FD9L},{0x0E78L,0L,0L,0x0E78L}}};
        int32_t l_2155 = 0xBD390F35L;
        uint16_t l_2179 = 0UL;
        uint16_t l_2239[9][7][4] = {{{8UL,0x260EL,0xC0A7L,65526UL},{0xE758L,4UL,65526UL,0UL},{65526UL,0UL,65532UL,0UL},{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,8UL}},{{9UL,8UL,1UL,0x260EL},{0x9015L,0xE758L,65532UL,1UL},{65526UL,0xE758L,65526UL,0x260EL},{0xE758L,8UL,0xC0A7L,8UL},{8UL,1UL,0x9015L,8UL},{0x3A76L,0x9015L,0x9015L,0x3A76L},{8UL,0x260EL,0xC0A7L,65526UL}},{{0xE758L,4UL,65526UL,0UL},{65526UL,0UL,65532UL,0UL},{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,8UL},{9UL,8UL,1UL,0x260EL}},{{0x9015L,0xE758L,65532UL,1UL},{65526UL,0xE758L,65526UL,0x260EL},{0xE758L,8UL,0xC0A7L,8UL},{8UL,1UL,0x9015L,8UL},{0x3A76L,0x9015L,0x9015L,0x3A76L},{8UL,0x260EL,0xC0A7L,65526UL},{0xE758L,4UL,65526UL,0UL}},{{65526UL,0UL,65532UL,0UL},{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,8UL},{9UL,8UL,1UL,0x260EL},{0x9015L,0xE758L,65532UL,1UL}},{{65526UL,0xE758L,65526UL,0x260EL},{0xE758L,8UL,0xC0A7L,8UL},{8UL,1UL,0x9015L,8UL},{0x3A76L,0x9015L,0x9015L,0x3A76L},{8UL,0x260EL,0xC0A7L,65526UL},{0xE758L,4UL,65526UL,0UL},{65526UL,0UL,65532UL,0UL}},{{0x9015L,4UL,1UL,65526UL},{9UL,0x260EL,0UL,0x3A76L},{1UL,0x9015L,8UL,8UL},{1UL,1UL,0UL,0x260EL},{65526UL,0x9015L,0UL,4UL},{0x3A76L,8UL,9UL,0UL},{8UL,8UL,8UL,4UL}},{{8UL,0x9015L,65532UL,0x260EL},{0x260EL,0UL,0x3A76L,0x9015L},{1UL,0x3A76L,0x3A76L,1UL},{0x260EL,4UL,65532UL,8UL},{8UL,0xC0A7L,8UL,0xE758L},{8UL,0xE758L,9UL,0xE758L},{0x3A76L,0xC0A7L,0UL,8UL}},{{65526UL,4UL,0xE758L,1UL},{0UL,0x3A76L,0x9015L,0x9015L},{0UL,0UL,0xE758L,0x260EL},{65526UL,0x9015L,0UL,4UL},{0x3A76L,8UL,9UL,0UL},{8UL,8UL,8UL,4UL},{8UL,0x9015L,65532UL,0x260EL}}};
        int i, j, k;
        {
            int16_t l_1839 = (-8L);
            int32_t l_1848 = 1L;
            int32_t l_1849 = 0xE7F06EBBL;
            uint8_t l_1955[3];
            int32_t l_2020 = 7L;
            uint16_t l_2112 = 0xEC38L;
            uint16_t l_2240 = 0UL;
for (l_2155 = 0; l_2155 < 1; l_2155++)
            l_975[l_26][l_2155] = 0x717E753EL;
                    int32_t l_1914 = 6L;
                    int32_t l_1935[9][9] = {{1L,(-8L),7L,0xD35C264CL,0xD35C264CL,7L,(-8L),1L,(-1L)},{0xC213583BL,0xD35C264CL,1L,1L,0x740A6CC5L,0xE38A8284L,(-8L),0x740A6CC5L,0xB1227660L},{4L,0xC213583BL,1L,0L,(-8L),1L,0x4B16B3AEL,0xE35208FFL,(-1L)},{0L,0xC213583BL,(-1L),(-8L),0xE35208FFL,(-5L),0L,0x4B16B3AEL,1L},{0x4B16B3AEL,0xD35C264CL,0xE38A8284L,0L,4L,(-5L),4L,0L,0xE38A8284L},{(-8L),(-8L),(-9L),1L,(-10L),1L,0xC213583BL,0x4B16B3AEL,(-5L)},{(-8L),0L,1L,0xD35C264CL,0L,0xE38A8284L,1L,0xE35208FFL,0xB0495FE9L},{0x4B16B3AEL,0L,(-9L),(-5L),0L,7L,(-5L),0x740A6CC5L,(-4L)},{0L,0x3D793A73L,0xE38A8284L,4L,(-10L),(-4L),1L,1L,(-4L)}};
{
            uint32_t l_2247[3][1][10] = {{{0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L}},{{0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L}},{{0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L,0x87E54647L}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1955[i] = 0x9CL;
            l_26 = (l_1848 = ((safe_mod_func_uint16_t_u_u(l_1954[3][0][1], (safe_add_func_int8_t_s_s((((g_813[2][0] = (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((((((safe_rshift_func_uint16_t_u_u(g_188, l_1848)) > (l_975[2][0] = (l_2239[3][2][0] < (g_359[1][6] ^ l_2240)))) & ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((j = ((safe_add_func_uint16_t_u_u((l_2247[1][0][8] <= (g_4 = (safe_mod_func_int32_t_s_s(l_1955[1], g_188)))), g_188)) < 1UL)), 0x9CFB623FL)), l_1077)) <= l_2163)) >= 0x2C3CBB80L) > g_188))), 0xBFL))) <= l_2239[5][4][1]) ^ 0xF637093EL), g_3261)))) < g_188));
        }
                    for (g_22 = 5; (g_22 >= 2); g_22 -= 1)
                    {
                        int i;
                        g_247 = (l_1359[(g_22 + 1)] == ((safe_lshift_func_uint16_t_u_s(((((l_1956 = ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((l_1359[(g_22 + 1)] && l_1001) == g_359[3][2]), ((safe_sub_func_uint8_t_u_u((l_1849 = ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(1L, (g_1460 == 0x2B504DA9L))), 9UL)) > ((safe_lshift_func_uint8_t_u_u(p_9, p_9)) || l_1954[3][0][1]))), g_172[4])) != l_1955[1]))), g_173)), 0x4C755050L)), 0)) <= p_9)) <= p_9) || p_9) < p_9), 13)) ^ g_315));
                        g_247 = ((((+((safe_add_func_uint16_t_u_u((g_315 = (safe_unary_minus_func_uint32_t_u(l_1955[1]))), (1UL || (safe_rshift_func_int16_t_s_s(((((safe_lshift_func_uint8_t_u_u((((g_543[2] || 1UL) > g_115) && g_866[0][9]), ((safe_sub_func_uint8_t_u_u((l_1935[4][2] = (safe_add_func_int16_t_s_s((g_188 = g_538), (safe_sub_func_int16_t_s_s(g_866[4][0], (((safe_lshift_func_int16_t_s_u((l_1359[(g_22 + 1)] ^ g_949[1][7][4]), g_217)) && l_1848) == l_1849)))))), p_9)) || p_9))) ^ 0L) || 4294967295UL) < p_9), 11))))) < p_9)) & 6L) >= 3L) != l_1359[(g_22 + 1)]);
                        g_247 = p_9;
                        return g_359[9][0];
                    }
        }
    }
                    return p_9;
}
static int32_t func_15(uint32_t p_16, int8_t p_17, uint32_t p_18, uint32_t p_19, uint32_t p_20)
{
    uint32_t l_973 = 0xD1EA04B1L;
    return l_973;
}
static int32_t func_29(uint8_t p_30, uint8_t p_31, uint16_t p_32, uint32_t p_33, int32_t p_34)
{
    uint32_t l_932[6][4] = {{0x30C08275L,0x09916C09L,0x09916C09L,0x30C08275L},{0UL,0x09916C09L,4UL,0x09916C09L},{0x09916C09L,0x8539AD46L,4UL,4UL},{0UL,0UL,0x09916C09L,4UL},{0x30C08275L,0x8539AD46L,0x30C08275L,0x09916C09L},{0x30C08275L,0x09916C09L,0x09916C09L,0x30C08275L}};
    int32_t l_950 = 0x12F1490EL;
    int i, j;
    for (g_22 = (-5); (g_22 < (-7)); --g_22)
    {
        int8_t l_931 = (-8L);
{
        for (j = 0; j < 4; j++)
        {
            for (g_3484 = 0; g_3484 < 10; g_3484++)
            {
                transparent_crc(g_2177[g_3484][j][g_3484], "g_2177[g_3484][j][g_3484]", g_2576);
                if (g_2576) printf("index = [%d][%d][%d]\n", g_3484, j, g_3484);
            }
        }
    }
                    g_247 = (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(p_33)), 0xEACFE029L)), 6));
        for (g_63 = 0; (g_63 != 54); g_63++)
        {
            uint32_t l_942 = 0xA7B52D8FL;
            p_34 = (p_34 < ((((safe_sub_func_int16_t_s_s((-2L), ((((safe_mod_func_int32_t_s_s((safe_mod_func_int32_t_s_s(8L, (safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(0x07L, (((safe_mod_func_uint8_t_u_u(g_247, (safe_sub_func_int32_t_s_s(g_359[9][0], (safe_mod_func_uint16_t_u_u((g_813[1][0] < (safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((-9L) != (safe_lshift_func_int16_t_s_u(1L, 11))), g_172[1])), p_32))), 0xCC61L)))))) != l_931) < 0xE70A6146L))), 1UL)))), g_813[1][0])) == 4294967295UL) ^ p_31) || g_217))) ^ g_315) | l_931) | g_115));
            g_949[0][6][1] = ((l_932[1][1] ^ (safe_lshift_func_uint16_t_u_s(g_361, 11))) && (!(safe_add_func_uint8_t_u_u(p_31, (((safe_rshift_func_uint16_t_u_u(g_813[1][0], (safe_mod_func_uint8_t_u_u((l_942 || (p_33 > (l_932[1][1] == (safe_add_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s((g_247 = (!(g_359[8][0] = (((((0xADL ^ (safe_sub_func_int16_t_s_s(p_34, (-1L)))) ^ (-1L)) ^ p_30) > 5UL) | (-5L))))))), p_32))))), g_172[4])))) != 250UL) ^ g_4)))));
            l_950 = l_932[1][1];
g_1129 += 1;
                    for (p_30 = 0; (p_30 <= 7); p_30 += 1)
            {
                int i, j;
{
                    i = 0x647B4652L;
                }
                    for (g_161 = 2; (g_161 <= 7); g_161 += 1)
                {
                    p_34 = 0x647B4652L;
                }
                g_247 = (g_866[p_30][(p_30 + 2)] & 1UL);
            }
        }
        l_950 = 0L;
    }
    return p_31;
}
static int8_t func_35(int8_t p_36, int16_t p_37, int32_t p_38, int32_t p_39)
{
    int32_t l_521 = 0xBC8555D8L;
    int32_t l_522 = 0x4F3B9912L;
    int32_t l_539 = 0x4D9E0D6BL;
    int32_t l_542 = 1L;
    g_22 = ((safe_lshift_func_uint16_t_u_u(g_4, 1)) | g_4);
    p_39 = func_42(p_36, func_46(g_4), ((l_521 == (((l_522 = 0x88L) && (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(((g_543[1] = (((0xFA1EL || (l_542 = (((safe_sub_func_int8_t_s_s((g_541 = ((g_4 == (((((((safe_unary_minus_func_int8_t_s((g_540 = (safe_sub_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((l_539 = ((safe_mod_func_int8_t_s_s((l_522 = p_37), ((((g_538 = g_4) >= l_521) == p_37) || p_38))) ^ p_39)), 4294967294UL)) ^ 1L), g_4))))) > l_521) & 0x37L) && l_522) && 65535UL) & 1UL) & p_37)) ^ p_38)), l_521)) <= (-9L)) != p_37))) & 4294967295UL) < g_4)) || 0x1DL), p_37)), 5)), g_4))) > g_4)) ^ l_521));
                                        if ((!l_539) )
{
{
    uint8_t l_71 = 0UL;
    int32_t l_75[2][3][6] = {{{(-2L),(-2L),0L,0xA11B98B5L,3L,(-1L)},{1L,0xD8A5C089L,0L,0L,0x473F1902L,0L},{0L,1L,0L,4L,(-2L),(-1L)}},{{0x2A83C5EEL,4L,0L,0xAF0CFC20L,7L,7L},{0xAF0CFC20L,7L,7L,0xAF0CFC20L,0L,4L},{0x2A83C5EEL,(-1L),(-2L),0xD8A5C089L,(-1L),0xA11B98B5L}}};
    uint16_t l_78[8] = {0x58C9L,0x2F22L,0x58C9L,0x2F22L,0x58C9L,0x2F22L,0x58C9L,0x2F22L};
    int i, j, k;
    for (g_103 = 0; (g_103 > 12); g_103 = safe_add_func_uint16_t_u_u(g_103, 7))
    {
        uint32_t l_72[6] = {18446744073709551606UL,18446744073709551606UL,0xEFD7F9B6L,18446744073709551606UL,18446744073709551606UL,0xEFD7F9B6L};
        int i;
        l_521 = ((g_63 < ((((safe_rshift_func_uint16_t_u_s(((((l_72[5] = (~l_71)) != g_63) | ((0xE2L < (safe_rshift_func_uint16_t_u_s(((0L && 0UL) ^ (7L > (((l_521 ^ l_71) == l_521) < (-1L)))), 15))) == 0x2DL)) & g_103), 8)) ^ 0x12ECL) | l_71) <= 0x319F56C0L)) >= 255UL);
    }
    for (l_521 = 1; (l_521 >= 0); l_521 -= 1)
    {
        return l_75[0][0][0];
    }
    l_78[4] = (safe_mod_func_int32_t_s_s(l_521, g_103));
    return g_103;
}
}
                    return g_359[9][0];
}
static int32_t func_42(int16_t p_43, int32_t p_44, uint32_t p_45)
{
    int8_t l_545[3];
    int32_t l_576 = (-3L);
    int32_t l_577 = (-9L);
    int32_t l_608 = 0xEF9BE18AL;
    int32_t l_609 = (-9L);
    int32_t l_892[7];
    int i;
    for (i = 0; i < 3; i++)
        l_545[i] = 0x82L;
    for (i = 0; i < 7; i++)
        l_892[i] = 0x225A8AF4L;
    p_44 = ((g_173 = ((4UL <= (l_577 = (+(l_545[2] > (1UL | (safe_sub_func_int8_t_s_s((!(((safe_lshift_func_int16_t_s_s(p_45, 7)) & ((0xEDL || ((safe_lshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((l_576 = (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((g_83 > (safe_unary_minus_func_uint8_t_u(((+(safe_add_func_int8_t_s_s((-7L), ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_s(0x0162L, 4)) && (safe_add_func_uint32_t_u_u((+((p_45 & 1L) ^ p_44)), g_543[0]))), 14)), 1L)) & p_43)))) > p_43)))), g_22)), l_545[2])), 2UL))), p_44)), g_217)) & 1UL)) <= (-8L))) && p_45)), g_115))))))) < 0L)) | l_545[2]);
    p_44 = (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(l_577, ((l_609 = ((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_608 = (((((((safe_lshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((p_43 > (safe_add_func_int16_t_s_s(0xFDDDL, (safe_add_func_uint8_t_u_u(0x59L, (((safe_mod_func_int8_t_s_s((safe_add_func_int16_t_s_s((g_543[1] >= (p_45 >= 0UL)), ((safe_lshift_func_int8_t_s_s((l_576 = l_577), ((l_577 < g_543[1]) == 255UL))) != 0x98C1L))), p_45)) & 1UL) < 0xBCL)))))), g_359[7][2])), p_43)) < 9UL) < p_44) && l_576) && p_45) > 4294967295UL) | l_577)), 0xE706L)), g_541)) && g_188)) || g_538))) < 0x0A13L), 10)), 0x855A41B0L));
    return p_45;
}
static int32_t func_46(int8_t p_47)
{
    int32_t l_309 = 0x5E625162L;
    return g_188;
}
static int32_t func_48(uint32_t p_49, int16_t p_50)
{
    int32_t l_80 = 0x7FAA682DL;
    return l_80;
}
static int8_t func_57(int16_t p_58, uint32_t p_59, uint32_t p_60, int32_t p_61)
{
    uint8_t l_71 = 0UL;
    int32_t l_75[2][3][6] = {{{(-2L),(-2L),0L,0xA11B98B5L,3L,(-1L)},{1L,0xD8A5C089L,0L,0L,0x473F1902L,0L},{0L,1L,0L,4L,(-2L),(-1L)}},{{0x2A83C5EEL,4L,0L,0xAF0CFC20L,7L,7L},{0xAF0CFC20L,7L,7L,0xAF0CFC20L,0L,4L},{0x2A83C5EEL,(-1L),(-2L),0xD8A5C089L,(-1L),0xA11B98B5L}}};
    uint16_t l_78[8] = {0x58C9L,0x2F22L,0x58C9L,0x2F22L,0x58C9L,0x2F22L,0x58C9L,0x2F22L};
    int i, j, k;
                                        if (((g_63>65535) && (g_63 < l_71)) )
{
g_1460 += 1;
}
      for (p_59 = 0; (p_59 > 12); p_59 = safe_add_func_uint16_t_u_u(p_59, 7))
    {
        uint32_t l_72[6] = {18446744073709551606UL,18446744073709551606UL,0xEFD7F9B6L,18446744073709551606UL,18446744073709551606UL,0xEFD7F9B6L};
        int i;
        g_22 = ((g_63 < ((((safe_rshift_func_uint16_t_u_s(((((l_72[5] = (~l_71)) != g_63) | ((0xE2L < (safe_rshift_func_uint16_t_u_s(((0L && 0UL) ^ (7L > (((g_22 ^ l_71) == g_22) < (-1L)))), 15))) == 0x2DL)) & p_60), 8)) ^ 0x12ECL) | l_71) <= 0x319F56C0L)) >= 255UL);
    }
    for (g_22 = 1; (g_22 >= 0); g_22 -= 1)
    {
        return l_75[0][0][0];
    }
    l_78[4] = (safe_mod_func_int32_t_s_s(g_22, p_59));
{
                    j = 0x5D495BDFL;
                }
      return p_60;
}
int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    func_1();
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_2710, "g_2710", print_hash_value);
}