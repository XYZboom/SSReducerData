                 unsigned 
                g_23
                ;
                 unsigned 
             l_148
                ;
                 short 
            l_2
                ;
                 int 
               g_4
                ;
                 unsigned 
                g_32
                ;
        unsigned 
            l_110
                ;int 
               g_80
                ;
        unsigned char
 safe_lshift_func_uint8_t_u_s (
        unsigned char
                                       left, int right )
{
  return
                                                    left >                 right     ?
      left   :
     left <<       right  ;
}
        unsigned
 safe_add_func_uint16_t_u_u (
        unsigned short
                                      ui1,
        unsigned
                                                    ui2 )
{
  return ui1 + ui2;
}
        unsigned
 safe_div_func_uint16_t_u_u (                           )
{
}
        unsigned
 safe_rshift_func_uint16_t_u_u (
        unsigned
                                         left, unsigned     right )
{
}
        unsigned
 safe_sub_func_uint32_t_u_u (
        unsigned
                                      ui1,
        unsigned
                                                    ui2 )
{
}
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
                 short
            f4;
                             }
                                       ;
        unsigned
                g_81[4]                                                    ;
       struct S0 g_152[2]                                                                  ;
        unsigned
                g_203[3]                            ;
static struct S0 func_76(
        unsigned
                                      ,
        short
                                                    ,
        unsigned char
                                                                  );
static struct S0 func_129(
        int
                                       , struct S0      ,
        unsigned
                                                                        ,
        short
                                                                                       );
       struct S0 func_1(    )
                {
                                        func_76(l_2                      ,                      g_32  ,                                                                                                                                                                                                                                                                                                                                                                     l_2                             )                                     ;
                }
       struct S0 func_76(
        unsigned
                                  p_77,
        short
                                                p_78,
        unsigned char
                                                              p_79)
{
    struct S0 l_147 = { 5L                                   };
    if (                                                                                                                                                                                                                                                                                                                                              func_129(
 0
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  , l_147, l_148, l_110      )              ,
 0
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            )
                               ;
}
       struct S0 func_129(
        int
                                  p_130, struct S0 p_131,
        unsigned
                                                                   p_132,
        short
                                                                                  p_133)
{
    struct S0 l_151                             ;
        int
                l_164
                   ,
            l_195
                             ;
    for (         ;  l_195      ;           )
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
                struct S0 l_196                                    ;
                    g_80 =                                                                                                             safe_rshift_func_uint16_t_u_u( l_151.f3 ^=
               g_4
                                                                                                                                                                                               ,                                                                                     safe_sub_func_uint32_t_u_u(g_4         ,                                   l_195 =                             (   safe_lshift_func_uint8_t_u_s(                            g_152[0].f3 |=  safe_add_func_uint16_t_u_u( safe_div_func_uint16_t_u_u                                                         , g_32)
         %
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           0xBCA6F5D4L  , 2)                        && p_131.f1) |
                g_23
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         )                                               )                                                                                           < p_131.f1  ;
                         l_164 = 0
       ;for ( ;
                                     l_164 <= 2
                 ;
                                                  l_164 += 1
                           )  {
                        g_152[0] = l_196;
                        g_203[2]++;
                                        }
                                        }
                                        }
    }
    return p_131;
}
int main (                      )
{
}
