        signed
  g_181
                ;
                 unsigned
    l_8
                ;
                 signed
 safe_mod_func_int8_t_s_s (        si2 )
{
  return
      si2 == 0                                                 ?
               1    :
              1  % si2 ;
}
        short
 safe_rshift_func_int16_t_s_u (        left  )
{
  return
      left                                                    ?
      left   :
                                           1   ;
}
    unsigned
 safe_rshift_func_uint16_t_u_u (         left  )
{
  return
                                   1
                                               ;
}
        signed
  g_7
  =
    6L ;
  void *
  g_21
    ;
        short
  g_245
  =
    5L ;
        unsigned
func_39
                (
   p_40
                               )  {
  for
    ( ;
         ;
     )
  {
    void *
      l_220
                 ;
    if (                                           (                                                                                                   (l_220 =  safe_mod_func_int8_t_s_s ( p_40) )                                                                                || 0x282EL) !=            1      )
    {
      }
    else
      if ( p_40 <=                                   1    )
      {
 if (g_245)
   break;
 }
      else
      {
 if (p_40)
 {
      if (l_220)
 break;
 continue;
      }
 if (  p_40 =              1                     )
 {
   }
 }
  }
  return
               1 ;
                                            }
        unsigned
func_41
                (
   p_42
                               )  {
  return
               1 ;
                                            }
       void *
func_46
                (
   p_47
                               )  {
                                                                                              g_7 =             1                                ;
  return
               1 ;
                                            }
       void *
func_2
  (
   p_4
   )
{
  l_8 = g_7;
  for
    (
         ;
         ;
     )
  {
    g_21
      =
                                        safe_rshift_func_int16_t_s_u (g_7 )     ;
    if (              1L & l_8  ||                                                                                            func_39 ( (func_41 (func_46 (g_7)   ) ^ 4UL) & g_181 )                                                     , l_8              )
      return
           1 ;
  }
  }
int
main
  (
)
{
  if (      func_2 ( g_7 )                                                                                                                  )
  {
    }
                                                g_245 =           1  <                                                  safe_rshift_func_uint16_t_u_u (                                                                                                                              1                                       )                                     ;
  }
