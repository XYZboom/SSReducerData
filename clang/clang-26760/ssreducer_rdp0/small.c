typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
static int8_t
(safe_add_func_int8_t_s_s)(  )
{}
static int8_t
(safe_sub_func_int8_t_s_s)(  )
{}
static int8_t
(safe_mod_func_int8_t_s_s)(  )
{}
static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1  )
{}
static int16_t
(safe_lshift_func_int16_t_s_u)(  )
{}
static int32_t
(safe_mod_func_int32_t_s_s)(  )
{}
static uint16_t
(safe_lshift_func_uint16_t_u_u)( unsigned int right )
{}
static uint16_t
(safe_rshift_func_uint16_t_u_s)( int right )
{}
static uint32_t
(safe_mul_func_uint32_t_u_u)(  )
{}
static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;
static void
crc32_gentab ()
{}
static void
crc32_byte () {}
static void
transparent_crc (  )
{}
static const uint8_t g_18 = 0x96L;
static uint32_t g_22 = 18446744073709551615UL;
static uint8_t g_59 = 0x26L;
static int8_t g_89 = 0xE8L;
static int8_t g_100 = 0x2FL;
static int16_t g_101 = 0x8DB7L;
static int32_t g_120[5] = {0x9873F28DL, 0x9873F28DL, 0x9873F28DL, 0x9873F28DL, 0x9873F28DL};
static uint32_t g_143 = 4294967295UL;
static int16_t g_540 = 0xE6F4L;
static int16_t g_694 = 0L;
static int8_t g_717 = 0x46L;
static uint32_t g_777 = 0xDDF76E03L;
static uint32_t g_1168 = 0x7D4DB357L;
static uint8_t g_1171 = 7UL;
static uint16_t g_1217 = 0xB6F3L;
static int16_t g_1482[4][3][4] = {{{0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}}, {{0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}}, {{0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}}, {{0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}, {0L, 1L, (-1L), 0x7568L}}};
static int32_t g_1540[6][2] = {{3L, (-8L)}, {3L, (-8L)}, {3L, (-8L)}, {3L, (-8L)}, {3L, (-8L)}, {3L, (-8L)}};
static int32_t g_1548[10][8][3] = {{{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}, {{6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}, {6L, 1L, 0x1E78C61EL}}};
static int32_t g_2100 = (-1L);
static uint32_t g_2467 = 0x7A51E780L;
static int32_t g_2469 = 1L;
static int32_t g_2470[3][1][10] = {{{0xD1D11586L, (-1L), (-6L), (-6L), (-1L), 0xD1D11586L, (-1L), (-6L), (-6L), (-1L)}}, {{0xD1D11586L, (-1L), (-6L), (-6L), (-1L), 0xD1D11586L, (-1L), (-6L), (-6L), (-1L)}}, {{0xD1D11586L, (-1L), (-6L), (-6L), (-1L), 0xD1D11586L, (-1L), (-6L), (-6L), (-1L)}}};
static int32_t func_3( uint16_t p_5   );
static int16_t func_10( uint8_t p_12 );
static int32_t func_19();
static int16_t func_25();
static int16_t func_28(int32_t p_29 );
static int16_t func_33(uint32_t p_34 );
static int32_t func_46(    );
static uint16_t func_1()
{
    uint32_t l_2[1];
    int16_t l_9 = 0x4210L;
    uint32_t BOoOog_22 = (~(((-((g_101 - ((-(g_1217)) | g_694)))) & (~(((g_22 * g_59) ^ (((~(((-(g_143)) || (~(g_1168))))) - ((-(g_89)) | g_2469)) * g_1171)))))));
g_22 = BOoOog_22;
if ((g_100<=47))
                    g_120[1] = func_3( (func_10( ((safe_lshift_func_uint16_t_u_u( (func_19() , (((g_1171 < g_120[1]) != g_89) & l_2[0])))) , l_9) ) != g_1168)   );
                                       }
static int32_t func_3( uint16_t p_5   )
{}
static int16_t func_10( uint8_t p_12 )
{}
static int32_t func_19()
{
    uint32_t l_21 = 8UL;
    g_1482[2][1][1] |= (safe_rshift_func_uint16_t_u_s( func_25()));
    }
static int16_t func_25()
{
    uint32_t l_27 = 4294967294UL;
    g_120[1] = (0x0415L > ((func_28((l_27 , (safe_mod_func_int16_t_s_s(func_33((safe_mod_func_int32_t_s_s( )) ) ))) ) ^ 5UL) == g_1168));
    for (g_59 = 26; (g_59 == 51); )
    ;;
    }
static int16_t func_28(int32_t p_29 )
{}
static int16_t func_33(uint32_t p_34 )
{
    int8_t l_790 = 0xCFL;
    int32_t l_793 = (-10L);
    int32_t l_919 = 0x24F96B7BL;
    uint8_t l_1007 = 0x6CL;
    uint32_t l_1052 = 0xC1E7B1A1L;
    uint32_t l_1281 = 0x7B51DD50L;
    int32_t l_1327 = 0xC40777EBL;
    int32_t l_1329 = 0x90371E5EL;
    uint32_t l_1433 = 18446744073709551615UL;
    for (; (g_59 != 4); )
    {
        if ((safe_lshift_func_int16_t_s_u( )))
        {
            }
        else
        {
            if (p_34)
                    {
if ((l_1281 == g_540))
    {
        for (; (l_793 <= 24); )
        {
            if ((0x4DF543CEL && l_790))
            {
                }
            else
            {
                for (l_919 = 0; (l_919 != (-11)); );;
            }
            };
        }
    else;
                    }
                    }
    };
    {
        int32_t l_1081 = 1L;
        uint8_t l_1361 = 0x58L;
        int32_t l_1369 = (-7L);
        if((!((g_777<=3723980291U)) || !((!l_1361)))){
uint32_t B4o4ol_1052 = (~(((~((g_100 & l_1081))) * (((((~(l_1369)) | (l_1007 << g_694)) && ((l_919 ^ l_1327) * l_1433)) * l_790) & (-(l_1052))))));
int32_t B4o4obl_919 = (-((((~((~(l_919)))) && l_1007) * (~(((~(((~((l_1081 - l_1327))) - (~(l_790))))) ^ (((-((l_1369 ^ l_1433))) >> (~(((~(g_694)) | g_100)))) && (~((l_1052 & (~(B4o4ol_1052))))))))))));
int8_t B4o4ocg_100 = (~(((((~(l_1081)) | (g_100 && (l_1007 && l_1052))) & (((~(l_919)) * g_694) | l_1433)) - ((~((-(((~((-((B4o4ol_1052 ^ B4o4obl_919))))) ^ (~(l_790))))))) - ((~(l_1369)) ^ l_1327)))));
int32_t B4o4odl_1369 = (~(((-(((~((~(l_919)))) & l_790))) ^ ((~((-((B4o4ocg_100 * l_1369))))) ^ ((((-((l_1433 >> g_694))) * ((-(l_1327)) | l_1007)) - B4o4ol_1052) & ((g_100 && (l_1052 & B4o4obl_919)) ^ l_1081))))));
int8_t B4o4oel_790 = (-(((~((-(((-((~(l_919)))) & (-((-(l_1327))))))))) & (~(((~((((~(((~(l_790)) & g_694))) && l_1433) | ((l_1081 & B4o4obl_919) && g_100)))) | ((B4o4odl_1369 ^ l_1369) && ((-(((B4o4ocg_100 && l_1052) * l_1007))) && B4o4ol_1052))))))));
uint32_t B4o4ofl_1433 = (~(((~((-((l_1052 >> ((-(g_694)) && l_1327)))))) ^ (-(((~(((~((((~(l_1007)) * B4o4oel_790) - (B4o4odl_1369 && B4o4ocg_100)))) && ((l_1369 | (~(l_919))) - (-(l_1081)))))) * ((l_790 ^ ((-((~(B4o4obl_919)))) & (~(((~(l_1433)) && (~(B4o4ol_1052))))))) & (~((~(g_100)))))))))));
if((B4o4ocg_100 < g_100)){
LABEL_4o4og:;
l_1052 = (~((((-(((l_1052 >> l_1081) | (~((~(B4o4ocg_100))))))) ^ (((g_100 * (B4o4oel_790 & (-((~(l_1007)))))) - (((g_694 - B4o4obl_919) ^ l_919) | (~(l_790)))) && (B4o4odl_1369 && (~((l_1433 ^ l_1327)))))) & (~((B4o4ofl_1433 * (B4o4ol_1052 - l_1369)))))));
if((l_790 < B4o4oel_790)){
l_1052 = (~(((~((((-(l_1007)) - (~((l_1327 << l_919)))) && (-(((((B4o4oel_790 << ((~(l_1369)) << (~((B4o4odl_1369 | g_100))))) & (-((l_1052 & B4o4ofl_1433)))) | B4o4ocg_100) << (-((~((((g_694 << l_1433) * l_790) | B4o4ol_1052))))))))))) << ((~(B4o4obl_919)) | (~(l_1081))))));
goto LABEL_4o4og;
}
}
}
    }
}
static int32_t func_46(    )
{}
int main ()
{
    int i, j, k;
    func_1();
    for (; i < 3; )
    ;;
    }