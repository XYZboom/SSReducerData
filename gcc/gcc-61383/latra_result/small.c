                 unsigned 
  g_176
                ;
                 signed 
  g_7
                ;             signed
  g_181
                ;
        signed
 safe_mod_func_int8_t_s_s (
        signed
                                  si1,
        signed
                                              si2 )
{
  return
      si2 == 0                                         ?
      si1   :
     si1 % si2 ;
}
        short
 safe_lshift_func_int16_t_s_s (
        short
                                       left, int right )
{
  return
      left
                          ;
}
        int
 safe_add_func_int32_t_s_s (
        int
                                    si1,
        int
                                                 si2 )
{
  return
       si1    &&  si2    &&  si1 >   2147483647 -si2    ||   si1<0  &&  si2<0  &&  si1                            ?
      si1   :
     si1 + si2 ;
}
static
        unsigned
  g_244
  =
  0x01B28DB7L;
         void
func_39
                      (
   p_40
                                         )  {
  for
    (
      ;
      g_176
      <
      12 ;
     g_176
     =
     safe_add_func_int32_t_s_s
     (g_176,
      3))
  {
        int
      l_220
                             ;
    if ( 0x4F92L <  safe_lshift_func_int16_t_s_s (                                                                                    g_244      |                                (l_220 =  safe_mod_func_int8_t_s_s (                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   p_40 , p_40) )                                                                                         , 6)  )
        ;
    else
    {
        signed
 l_319
 =
 0xE3L;
      if ( p_40 <=               l_319                                                                                                                                                                                                                                                                                                                                                                                                         )
              ;
      else
      if (l_220)
 break;
    }
  }
         }
        int
func_2
  (
        signed
   p_3,
        unsigned
   p_4,
        unsigned
   p_5
)
{
        unsigned
    l_8
    =
    0x4F147909L;
    if (          p_4,                                                                                                                   func_39 (                                                                                                   g_181 )                                                              , l_8                         )
    {
        unsigned
 l_867
 =
 1UL;
      return
 l_867;
    }
}
int
main
  (
)
{
        short
    l_6
    =
    0L;
  if (      func_2 (l_6, g_7, l_6)                                                                                                                                                                                                                                                                                                                                                                                           )
                  ;
  return
    0;
}
