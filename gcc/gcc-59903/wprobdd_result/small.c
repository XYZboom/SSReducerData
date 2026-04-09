typedef        char int8_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short     uint16_t;
typedef          int uint32_t;
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
 safe_rshift_func_uint16_t_u_u (uint16_t left,          int right )
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
       uint16_t g_32          ;
       int32_t g_80              ;
       uint32_t g_81[4]                                                    ;
       struct S0 g_152[2]                                                                  ;
       uint16_t g_203[3]                            ;
       struct S0 func_129(                                                             );
       uint8_t func_99(         p_100)
{
    struct S0 l_147 = { 5L                                   };
    if (                                                                                                                                                                                                                                                                                                                                              func_129(                                                                                                                                                                                                                                                                                                             p_100 , l_147                    )              , p_100                                                                                         )
                               ;
}
       struct S0 func_129(int32_t p_130, struct S0 p_131, uint32_t p_132               )
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
            g_152[0] = l_151;
            l_151.f3 = g_81[p_131.f0];
                struct S0 l_196                                    ;
                    g_80 =                                                                                                             safe_rshift_func_uint16_t_u_u( l_151.f3 ^= g_4[7][0][1] ,                                                                                     safe_sub_func_uint32_t_u_u(g_4         ,                                   l_195 =                             (   safe_lshift_func_uint8_t_u_s( safe_mod_func_int32_t_s_s( g_152[0].f3 |=  safe_add_func_uint16_t_u_u( safe_div_func_uint16_t_u_u                                                         , g_32)  , 0xBCA6F5D4L) , 2)                        && p_131.f1) | g_23[1]                               )                                               )                                                                                           < p_131.f1  ;
                    for (l_164 = 0;  l_164 <= 2 ; l_164 += 1)
                    {
                        g_152[0] = l_196;
                        g_203[2]++;
                    }
        }
    }
    }
}
int main (                      )
{
}
