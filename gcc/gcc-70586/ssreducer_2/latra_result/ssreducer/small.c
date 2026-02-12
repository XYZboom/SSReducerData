                 char 
                    l_1955
                ;
                 signed 
              g_4
                ;
        unsigned 
                         l_1423
                ;
        unsigned 
                g_813
                ;
                 int 
               g_1215
                ;
                 short 
               g_188
                ;
                 unsigned 
                 l_1288
                ;int 
            l_26
                ;
        signed
 safe_lshift_func_int8_t_s_u (
        signed
                                     left  )
{
  return
     left <<                ((unsigned int)1)  ;
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
        unsigned
 safe_sub_func_uint32_t_u_u (
        unsigned
                                      ui1,
        unsigned
                                                    ui2 )
{
  return ui1 - ui2;
}
        unsigned
                g_540 = 0x03F238A4L;
static
        unsigned
                func_8(
        short
                                  );
static
        int
               func_1()
{
    if (
                                                                      func_8(           1 )                                  );
}
        unsigned
                func_8(
        short
                               p_9)
{
                                                                                                                        l_26 =                             safe_mod_func_int32_t_s_s(          p_9 , g_4)                                                                            ;
    if (g_540)
    {
            for (p_9 = 0;  p_9          ; );
                                                 l_1288 = 0
       ;for ( ;
                                                              l_1288 <= 49
                 ;
                                                                             l_1288 =                            l_1288
             +
                                                                                                                         8
                           )  {
                if ( safe_lshift_func_int8_t_s_u( p_9 && 0xDCE4L                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ) )
                    if (p_9)
                    {
                        }
                    else
                        return           1 ;
                else
                {
        l_1423 =                   ((unsigned int)1)                                                                                                                                                                                                                                                                                   ;
}
                                                                                                                                                                                    p_9 =  safe_sub_func_uint32_t_u_u(                               0x60781BCDL >=  safe_mod_func_int32_t_s_s(   safe_mod_func_int32_t_s_s(                                                                         l_1423                 , p_9)  > 0xB5L        , p_9)   != p_9  ^ 4294967287UL                              , l_1423)                                                                                                                                                                                                                                            ;
                                                                                                                                                                                                                                                                                                                                        l_26 =                                                                  safe_mod_func_int32_t_s_s(           1  ,
               g_1215
                                                                                                                                                                                                                                                                                                                                                                                                                                                                   )                                                                                                                                                                                           ;
                                        }
    }
    else
                g_813
                                                                                           =                                                                                                                                                                     safe_mod_func_int32_t_s_s(                                                        safe_mod_func_int32_t_s_s(
                    l_1955
                                                                                                                                                                                                                                                                                                                                                                                      , g_188)              , 0x9CFB623FL)                                                                                                                     ;
                    return p_9;
}
int main (                      )
{
    func_1();
    }
