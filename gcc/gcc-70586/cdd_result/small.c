typedef        char int8_t;
typedef short     int16_t;
typedef int int32_t;
typedef          char uint8_t;
typedef                int uint16_t;
typedef          int uint32_t;
       int8_t
 safe_add_func_int8_t_s_s (int8_t si1, int8_t si2 )
{
  return
           si2 ;
}
       int32_t
 safe_mod_func_int32_t_s_s (int32_t si1, int32_t si2 )
{
  return
      si2 == 0  ||   si1                     &&  si2            ?
      si1   :
     si1 % si2 ;
}
       uint32_t
 safe_add_func_uint32_t_u_u (uint32_t ui1, uint32_t ui2 )
{
  return ui1 + ui2;
}
       uint32_t
 safe_sub_func_uint32_t_u_u (uint32_t ui1, uint32_t ui2 )
{
  return ui1 - ui2;
}
       int8_t g_4        ;
       uint16_t g_63          ;
       int16_t g_188          ;
       uint16_t g_538 = 0x2A52L;
       uint32_t g_540 = 0x03F238A4L;
       uint16_t g_813[7][1]                                              ;
       int16_t g_974        ;
static uint16_t func_8(int16_t    );
static int32_t func_1(    )
{
    uint32_t l_5[6][7] =  {0x327439CBL                                                }                                                                                                                                                                                                                                       ;
    if (                                                                                              func_8(l_5[1][6])                              )
                                     ;
}
       uint16_t func_8(int16_t p_9)
{
    int32_t l_26 = 0xD437F1BDL;
                                                g_974 =                                                                                                                                             safe_mod_func_int32_t_s_s(   g_4        , g_4)                                                                                      ;
    if (g_540)
    {
        uint32_t l_1288              ;
        for (l_1288 = 0;  l_1288 <= 49 ; l_1288 = safe_add_func_uint32_t_u_u(l_1288, 8))
        {
            int i      ;
                uint32_t l_1423              ;
                if (                                                                                                                                                                                     safe_add_func_int8_t_s_s(                   0xB5EEL , p_9)                                                                                                                                                                                                                                                                                                                                                                 )
                                                    ;
                else
                {
int32_t BGgGgcl_26 =                                                        l_26                                                                                                           ;
uint16_t BGgGgfl_1401 =                                                                    BGgGgcl_26                                                                                                                                                       ;
l_1423 =                   BGgGgfl_1401                                                                                                                                                                                                                               ;
if( !g_538 )
break;
printf("g_63=%llu\n", (         long long)g_63);
                }
                    int32_t l_1493[5];
                    for (i = 0; i < 5; i++)
                        l_1493[i] = 0x26DA5657L;
                                                                                                                                                                                  p_9 =  safe_sub_func_uint32_t_u_u(                         ( (0x60781BCDL >=  safe_mod_func_int32_t_s_s(   safe_mod_func_int32_t_s_s(                                                                                           l_1493[0]                            , p_9)  > 0xB5L        , p_9) ) != p_9  ^ 4294967287UL)                             , l_1423)                                                                                                                                                                                                                           ;
                                                                                                                                                                                                                                                                                                                                                                                                                               l_26 =                                                                                                                                                                                     0UL                                                                                                                                                                                                                                                     ;
        }
    }
    else
    {
            uint8_t l_1955[3];
                                                                                                        g_813[2][0] =                                                                                                                                                                                                                safe_mod_func_int32_t_s_s                                  (                            safe_mod_func_int32_t_s_s(l_1955[1], g_188)   , g_188)                                                                                                                                            ;
    }
                    return p_9;
}
int main (                      )
{
    func_1();
}
