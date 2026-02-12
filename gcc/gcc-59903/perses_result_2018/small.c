typedef signed      int8_t;
typedef short     int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short     uint16_t;
typedef unsigned     uint32_t;
       int8_t
 safe_lshift_func_int8_t_s_s (       left            )
{
  return
      left
                          ;
}
       int8_t
 safe_lshift_func_int8_t_s_u (                                )
{
}
       int16_t
 safe_mod_func_int16_t_s_s (                         )
{
}
       int32_t
 safe_mod_func_int32_t_s_s (int32_t si1, int32_t si2 )
{
  return
     si1 % si2 ;
}
       uint8_t
 safe_lshift_func_uint8_t_u_s (uint8_t left, int right )
{
  return
                                                    left >                 right     ?
      left   :
     left <<       right  ;
}
       uint8_t
 safe_lshift_func_uint8_t_u_u (        left                     )
{
  return
                                   ;
}
       uint16_t
 safe_add_func_uint16_t_u_u (uint16_t ui1, uint16_t ui2 )
{
  return ui1 + ui2;
}
       uint16_t
 safe_div_func_uint16_t_u_u (                           )
{
}
       uint16_t
 safe_rshift_func_uint16_t_u_u (uint16_t left, unsigned     right )
{
}
       uint32_t
 safe_sub_func_uint32_t_u_u (uint32_t ui1, uint32_t ui2 )
{
}
struct S0 {
   int8_t f0;
   int8_t f1;
   uint32_t f2;
   int32_t f3;
   uint16_t f4;
};
       int32_t g_4[10][4][2]                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             ;
       uint32_t g_23[3]                                        ;
       uint16_t g_32 = 0xB7A2L;
                                                                                                                                                                                                                                                                                                                                                                                                                                                         ;
       int32_t g_80              ;
       uint32_t g_81[4]                                                    ;
       struct S0 g_152[2]                                                                  ;
       uint16_t g_203[3]                            ;
       struct S0 g_283                                              ;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         ;
static struct S0 func_76(uint32_t     , int16_t     , uint8_t     );
static uint8_t func_99(              );
static struct S0 func_129(int32_t      , struct S0      , uint32_t      , int16_t      );
       struct S0 func_1(    )
{
    int16_t l_2                                                                                                                                   ;
                {
                                        func_76(l_2                      ,  g_81[2] |=          g_32  ,                                                                                                                                                                                                                                                                                                                                                                     l_2                             )                                     ;
                }
        for (                ;                    ; g_4[7][0][1] -= 1)
        {
        }
}
       int32_t func_17(int32_t p_18, uint16_t p_19, uint8_t p_20, uint32_t p_21)
{
             g_23[2] = p_20 ;
}
       uint8_t func_72(                                           )
    {
    }
       struct S0 func_76(uint32_t p_77, int16_t p_78, uint8_t p_79)
{
                                                                                 func_99(                                                                   func_17(p_79, p_78,  func_17                                                                               , p_78)                      )                                 ;
}
       uint8_t func_99(         p_100)
{
    uint8_t l_110                                                                                                                                                                                                                                                                                                                              ;
    struct S0 l_147 = { 5L                                   };
    uint32_t l_148               ;
    if (                                                                                                                                                                                                                                                                                                                                              func_129(                                                                                                                                                                                                                                                                                                             p_100 , l_147, l_148, l_110      )              , p_100                                                                                         )
                               ;
}
       int16_t func_121(                             )
{
}
       struct S0 func_129(int32_t p_130, struct S0 p_131, uint32_t p_132, int16_t p_133)
{
    struct S0 l_151                             ;
    int32_t l_195              ;
    for (         ;  l_195      ;           )
    {
for (p_132 = 0;  p_132 <= 39 ; ++p_132)
    {
        int32_t l_164        ;
        for (p_131.f0 = 0;  p_131.f0 <= 2 ; p_131.f0 += 1)
        {
            struct S0 l_166                         ;
            g_152[0] = l_151;
            l_151.f3 = g_81[p_131.f0];
                struct S0 l_196                                    ;
                    g_80 =                               (                                                                             safe_rshift_func_uint16_t_u_u( l_151.f3 ^= g_4[7][0][1] ,                                                                                     safe_sub_func_uint32_t_u_u(g_4         ,                                   l_195 =                             (   safe_lshift_func_uint8_t_u_s( safe_mod_func_int32_t_s_s( g_152[0].f3 |=  safe_add_func_uint16_t_u_u( safe_div_func_uint16_t_u_u                                                         , g_32)  , 0xBCA6F5D4L) , 2)                        && p_131.f1) | g_23[1]                               )                                               )                                                                       ==  -10L )          < p_131.f1  ;
                    for (l_164 = 0;  l_164 <= 2 ; l_164 += 1)
                    {
                        g_152[0] = l_196;
                        g_203[2]++;
                    }
                                            g_152[0].f4 =                                 safe_lshift_func_uint8_t_u_u                                                                                                                                                                                                                                                                                                                                                                                                             ;
        }
    }
    }
    return p_131;
}
int main (                      )
{
            ;
}
