typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
static void
platform_main_end(uint32_t crc )
{
 printf ("checksum = %X\n", crc);
}
static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1  )
{
  return
    (si1 - ((int16_t)1));
}
static int16_t
(safe_mod_func_int16_t_s_s)( int16_t si2 )
{
  return
    ((si2 == 0) || ((((int16_t)1) == (-32767-1)) && (si2 == (-1)))) ?
    ((((int16_t)1))) :
    (((int16_t)1) % si2);
}
static int16_t
(safe_div_func_int16_t_s_s)(int16_t si1  )
{
  return
    ((((int16_t)1) == 0) || ((si1 == (-32767-1)) && (((int16_t)1) == (-1)))) ?
    ((si1)) :
    (si1 / ((int16_t)1));
}
static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1  )
{
  return
    (((si1>0) && (((int32_t)1)>0) && (si1 > ((2147483647)-((int32_t)1)))) || ((si1<0) && (((int32_t)1)<0) && (si1 < ((-2147483647-1)-((int32_t)1))))) ?
    ((si1)) :
    (si1 + ((int32_t)1));
}
static int32_t
(safe_mod_func_int32_t_s_s)(int32_t si1  )
{
  return
    ((((int32_t)1) == 0) || ((si1 == (-2147483647-1)) && (((int32_t)1) == (-1)))) ?
    ((si1)) :
    (si1 % ((int32_t)1));
}
static uint8_t
(safe_mod_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void
crc32_gentab ()
{
 uint32_t crc;
 int i, j;
 for (i = 0; i < 256; i++) {
  crc = i;
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
 crc32_byte ((val>>8) & 0xff);
 }
static void
transparent_crc (uint64_t val  )
{
 crc32_8bytes(val);
 }
static int32_t g_506 = 1L;
static int32_t g_573 = 1L;
static int16_t g_1352 = (-10L);
static int8_t g_4689 = 9L;
inline static int32_t func_2(uint8_t p_3   );
static uint16_t func_15(int16_t p_16 );
inline static int16_t func_18(  const uint16_t p_21);
inline static uint32_t func_28(   const uint16_t p_32);
static uint8_t func_37(uint16_t p_38    );
inline static uint16_t func_43(int32_t p_44);
inline static int8_t func_1()
{
    int16_t l_5913 = 0x1E08L;
    uint32_t l_6137 = 0x0644BDCEL;
    func_2(((safe_div_func_int16_t_s_s(((((((((uint8_t)1)) , (((int8_t)1)))) <= (!((func_15((((uint8_t)1) > (func_18(  (((safe_mod_func_int16_t_s_s( (func_28(   ((uint8_t)1)) , 1UL))) <= 1UL) && ((uint16_t)1))) | ((int32_t)1))) ) <= 0x5718L) , ((uint32_t)1)))) < ((int32_t)1)) ^ 4294967295UL) )) == ((int32_t)1))   );
                                   int32_t l_6280 = 0L;
        int32_t l_6479[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_6479[i] = (-1L);
        {
            for (l_5913 = (-28); (l_5913 < (-7)); l_5913 = safe_add_func_int32_t_s_s(l_5913 ));
            for (; (g_506 >= 0); g_506 -= 1)
            {
                int32_t BGCGCl_6280 = (~(((~(((((((uint16_t)1) + (~(((int8_t)1)))) - (~(((~(((int8_t)1))) + (~(l_6137)))))) | (~((~(g_573))))) && ((~((((uint8_t)1) && l_5913))) | (~(((~(((uint8_t)1))) && ((int16_t)1)))))))) - (~(l_6280)))));
int8_t BGCGCdl_6486 = (~(((~((((((int8_t)1) - (~(((uint8_t)1)))) << (BGCGCl_6280 & (~((l_5913 & (~(((int8_t)1)))))))) && (~(((~((((l_6280 | ((uint32_t)1)) >> ((int8_t)1)) && (~(((~((~(g_573)))) >> (((int16_t)1) / ((uint8_t)1)))))))) + ((uint16_t)1))))))) + (~((~(l_6137)))))));
int16_t BGCGCel_5913 = (~(((((l_6280 ^ ((((int8_t)1) - ((uint8_t)1)) | ((~(((uint16_t)1))) - (((int8_t)1) && BGCGCdl_6486)))) ^ (((int8_t)1) + (l_5913 && (~(((uint8_t)1)))))) | ((((uint32_t)1) / (~(BGCGCl_6280))) >> (~((~((g_573 && l_6137))))))) ^ ((int16_t)1))));
if((BGCGCdl_6486 > BGCGCl_6280)){
BGCGCl_6280 = l_6280;
BGCGCdl_6486 = ((int8_t)1);
BGCGCel_5913 = l_5913;
l_6280 = (~((((((~(((uint8_t)1))) - (((int16_t)1) >> BGCGCdl_6486)) && (~(((uint8_t)1)))) & (~((~(((uint16_t)1)))))) | ((((~(((int8_t)1))) & ((((int8_t)1) >> g_573) & (((~(BGCGCel_5913)) / l_6137) - l_5913))) && (~(((int8_t)1)))) >> (~(((~(((((uint32_t)1) / (~(((uint16_t)1)))) + l_6280))) | BGCGCl_6280)))))));
}
l_5913 = BGCGCel_5913;
}
        }
        {
            for (i = 0; i < 10; i++)
                { while ((l_5913 > ((int32_t)1)) )
{
l_5913 -= 1;
}
                    }
            if ((safe_mod_func_int32_t_s_s(((((int8_t)1)) & (((uint16_t)1) != ((safe_sub_func_int16_t_s_s(((((int32_t)1) , ((((!((const int8_t)1)) != ((((((g_4689 = (safe_mod_func_uint8_t_u_u((((((uint16_t)1)) < ((int32_t)1)) | l_5913), l_6479[0]))) && 0xE4L) > ((uint32_t)1)) == ((uint8_t)1)) != ((uint32_t)1)))) <= ((int16_t)1)) != 0xDCL)) & 1UL) ))))) )))
                                            ;
            else;
        }
}
inline static int32_t func_2(uint8_t p_3   )
{
    }
static uint16_t func_15(int16_t p_16 )
{
    return ((int16_t)1);
}
inline static int16_t func_18(  const uint16_t p_21)
{
    return p_21;
}
inline static uint32_t func_28(   const uint16_t p_32)
{
    (((+(((int16_t)1) & (((int16_t)1)))) >= func_37(func_43((((uint16_t)1) != (((uint8_t)1))))    )) < ((uint8_t)1));
    }
static uint8_t func_37(uint16_t p_38    )
{
    return ((int16_t)1);
}
inline static uint16_t func_43(int32_t p_44)
{
    int32_t l_4273 = 0L;
    g_1352 = (~(((((((int16_t)1) && ((((int32_t)1) + ((int16_t)1)) ^ (~(((uint32_t)1))))) & (~((~(((int32_t)1)))))) & ((~(((uint32_t)1))) | (~((~((~(((uint32_t)1))))))))) * (~((~((~(((((~(g_573)) + (((uint8_t)1) * ((int8_t)1))) ^ ((((uint8_t)1) % (~((g_1352 | ((int32_t)1))))) && ((~(((int16_t)1))) * ((uint32_t)1)))) & ((uint8_t)1)))))))))));
g_573 = (~((((~(((int32_t)1))) && (~((~((((int16_t)1) * ((uint8_t)1))))))) && (~((~((((~((((uint8_t)1) ^ g_573))) + (((uint32_t)1) && (((((int32_t)1) && (~(((int8_t)1)))) >> ((~(g_1352)) * ((int16_t)1))) + (~((((uint8_t)1) && ((uint32_t)1))))))) + (~((((int32_t)1) & (~((((uint32_t)1) | ((~(((uint32_t)1))) & (~(((int16_t)1))))))))))))))))));
                               if(!(((!((int32_t)1)) && (((uint8_t)1)<=254)))){
g_573 = (~((((~((((int8_t)1) % (~((~((((uint32_t)1) || ((~(((int32_t)1))) || (((uint8_t)1) || ((uint32_t)1))))))))))) ^ g_506) & ((~((((~(((int8_t)1))) || (((int32_t)1) || ((int8_t)1))) >> (~(g_1352))))) % (~((((~(((int32_t)1))) % ((((uint32_t)1) >> l_4273) << ((~((~(((uint8_t)1))))) || (~(((int32_t)1)))))) >> (~(g_573)))))))));
}
                                   lbl_3967:
    {
        for (; (((int8_t)1) != 22); )
        {
            if ((((uint16_t)1) != (-9L)))
            {
                return ((uint16_t)1);
            }
            else;
        };
    }
}
int main ( )
{
    crc32_gentab();
    func_1();
    transparent_crc(g_4689  );
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL );
    return 0;
}