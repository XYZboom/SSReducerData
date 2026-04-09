        unsigned
             l_148
                ;
        unsigned
            l_110
                ;
        int
               g_80
                ;
        unsigned
               g_22
                ;
        int
               g_4
                ;signed
 safe_lshift_func_int8_t_s_u (
        signed
                                     left, unsigned     right )
{}
        short
 safe_mod_func_int16_t_s_s (
        short
                                    si1,
        short
                                                 si2 )
{}
                 char
 safe_lshift_func_uint8_t_u_s (
        unsigned
                                       left, int right )
{
  return
                                                    left >                 right     ?
      left   :
     left <<       right  ;
}
        unsigned
 safe_rshift_func_uint16_t_u_u (
        unsigned
                                         left, unsigned     right )
{}
        unsigned
 safe_sub_func_uint32_t_u_u (
        unsigned
                                      ui1,
        unsigned
                                                    ui2 )
{}
 struct
              S0
                 { signed
          f0
                   ,
          f1
                             ;
        int
                l_164
                   ,
           f3
                             ;
        unsigned
            f2
                   ,
            f4
                             ; }
                                       ;
        unsigned
                g_23[ ] = {0x69C1477AL                        };
        unsigned
                g_81[4]                                                    ;
       struct S0 g_152[2]                                                                  ;
        unsigned
                g_203[3]                            ;
static struct S0 func_129(
        int
                                       , struct S0      ,
        unsigned
                                                                        ,
        short
                                                                                       );
        unsigned
               func_99(         p_100)
{
    struct S0 l_147 = { 5L                                   };
if (                                                                                                                                                                                                                                                                                                                                              func_129(                                                                                                                                                                                                                                                                                                             p_100 , l_147, l_148, l_110      )              , p_100                                                                                         );
}
       struct S0 func_129(
        int
                                  p_130, struct S0 p_131,
        unsigned
                                                                   p_132,
        short
                                                                                  p_133)
{
    struct S0 l_151 = {0x15L, 5L               };
        int
                l_164
                   ,
            l_195
                             ;
for (         ;  l_195      ; )
    {
     p_132 = 0
       ;for ( ;
                 p_132 <= 39
                 ;
                               ++p_132
                           )  {
             p_131.f0 = 0
       ;for ( ;
                            p_131.f0 <= 2
                 ;
                                            p_131.f0 += 1
                           )  {
            g_152[0] = l_151;
            l_151.f3 = g_81[p_131.f0];
            if (  g_23           <                                              safe_mod_func_int16_t_s_s(0x58C3L,                               safe_lshift_func_int8_t_s_u(p_132,  --g_22 )                                         )                                            ^ l_151.f1 )
            {
                struct S0 l_196                                    ;
                    g_80 =                                                                                                             safe_rshift_func_uint16_t_u_u(             g_4          ,                                                                                     safe_sub_func_uint32_t_u_u(g_4         ,                                   l_195 =                             (   safe_lshift_func_uint8_t_u_s(                            g_152[0].f3                                                                                                                                            , 2)                        && p_131.f1) | g_23[1]                               )                                               )                                                                                           < p_131.f1  ;
                    for (l_164 = 0;  l_164 <= 2 ; l_164 += 1)
                    {
                        g_152[0] = l_196;
                        g_203[2]++;
                    }
                }
                                        }
                                        }
    }
    return p_131;
}
int main ( )
{}
