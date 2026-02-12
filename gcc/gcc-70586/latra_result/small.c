                       int 
                g_813
                ;
                 unsigned 
                    l_1955
                ;
                 unsigned 
                         l_1423
                ;
                 int 
            l_26
                ;
                 int 
               g_1215
                ;
                 signed 
              g_4
                ;
                 int 
            l_27
                ;short 
               g_188
                ;
                 int
                l_1179
                ;
        signed
 safe_lshift_func_int8_t_s_u (
        signed
                                     left,          int right )
{
  return
      left
                                   ;
}
        int
 safe_mod_func_int32_t_s_s (
        int
                                    si1,
        int
                                                 si2 )
{
  return
      si2 == 0  ||   si1                     &&  si2            ?
      si1   :
     si1 % si2 ;
}
                       int
 safe_rshift_func_uint16_t_u_s (
                       int
                                         left, int right )
{
}
        unsigned
                g_540 = 0x03F238A4L;
static
        unsigned
               g_1129 = 252UL;
static
                       int
                func_8
                (
        short
                               p_9
                               )  {
                                                                                                                                                 l_27 =                                             safe_mod_func_int32_t_s_s(          p_9 , g_4)                                                                                      ;
    if (g_540)
    {
        short
                l_1271 = 0x809CL;
        unsigned
                 l_1288
                             ;
             l_1288 = 0
       ;for ( ;
                          l_1288 <= 49
                 ;
                                         l_1288 =                            l_1288
             +
                                                                                     8
                           )  {
        int
                    l_1386[8][6][5] =   {   0x13047496L                              }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      ;
                if ( safe_lshift_func_int8_t_s_u( p_9            ,                                                                                                                                                                 l_1386[6][5][0]
         +
                                                                                                                                                                                                                                                               p_9   ||  p_9 &&                                                    safe_rshift_func_uint16_t_u_s( l_1179 =  safe_mod_func_int32_t_s_s(                                            p_9                 , 0xBC2AB98CL)  , 9)                                                                                                                                        ) )
                                             ;
                else
                {
        unsigned
                                        BGgGgl_1423 =                                                      l_26                                                                ;
        int
        BGgGgcl_26 =                                                                                                                                              BGgGgl_1423              ;
l_1423 =                                                                         BGgGgcl_26                                                                                                                                                                           ;
                    if( !g_1129 )
continue;
                }
                                                                                                                                                                                  p_9 =                                              (p_9 < ((  0x60781BCDL >=  safe_mod_func_int32_t_s_s(   safe_mod_func_int32_t_s_s( l_1271                                                                                                                         , p_9)  > 0xB5L        , p_9)           ^ 4294967287UL) <= p_9))
             -
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             l_1423                                                                                                                                                                                                                            ;
                                                                                                                                                                                                                                                                                                                                                                                                                               l_26 =                                                                           safe_mod_func_int32_t_s_s(                                                                                        0x7D765DB6L               ,
               g_1215
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       )                                                                                                                                                                                                          ;
                                        }
    }
    else
                g_813
                                                                                                                    =                                                                                                                                                                                                                safe_mod_func_int32_t_s_s(                                                              safe_mod_func_int32_t_s_s(
                    l_1955
                                                                                                                                                                                                                                                                                                                                                                                                                                                                , g_188)                    , 0x9CFB623FL)                                                                                                                     ;
                    return p_9;
                                            }
static
        int
               func_1(    )
{
    if (
                                                                                                      func_8(    1    )                              )
                                     ;
}
int main (                      )
{
    func_1();
}
