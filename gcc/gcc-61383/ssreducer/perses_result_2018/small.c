typedef signed      int8_t;
typedef short     int16_t;
typedef int int32_t;
typedef unsigned      uint8_t;
typedef unsigned           uint16_t;
typedef unsigned     uint32_t;
       int8_t
 safe_mod_func_int8_t_s_s (        si2 )
{
  return
      si2 == 0                                                 ?
               1    :
              1  % si2 ;
}
       int16_t
 safe_rshift_func_int16_t_s_u (        left  )
{
  return
      left                                                    ?
      left   :
                                           1   ;
}
       int32_t
 safe_add_func_int32_t_s_s (        si1  )
{
  return
     si1 +           1  ;
}
       uint16_t
 safe_lshift_func_uint16_t_u_u (uint16_t left, unsigned     right )
{
  return
      left
                                   ;
}
  int8_t
  g_7
  =
    6L ;
  int32_t
  g_21
    ;
  uint8_t
  g_176
       ;
  int8_t
  g_181
    ;
  int32_t
func_2
(
uint8_t
);
  uint16_t
func_39
(int8_t
);
       uint16_t
func_1 ()
{
  if (      func_2 ( g_7 )                                                                                                                 )
  {
    }
}
       int32_t
func_2
  (
   uint8_t
   p_4
   )
{
  uint32_t
    l_8
               ;
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
    if (              1L & l_8  ||                                                   safe_lshift_func_uint16_t_u_u (65535UL,  func_39 (                         g_181 ) )                                                   , l_8              )
      return
           1 ;
  }
}
       uint16_t
func_39
  (
   p_40
)
{
  for
    (g_176
     =
     0;
      g_176
      <
      12 ;
     g_176
     =
     safe_add_func_int32_t_s_s
     (g_176
      ))
  {
    int32_t
      l_220
                 ;
    if (                                           (                                                                                                   (l_220 =  safe_mod_func_int8_t_s_s ( p_40) )                                                                               || 0x282EL) !=           1      )
    {
      }
    else
      if ( p_40 <=                1                       )
                                                                                                                                                                                                                                                ;
      else
      {
      if (l_220)
 break;
                              g_7 = p_40                ;
 }
  }
  return
               1 ;
}
int
main
  (
)
{
  func_1
    ();
  return
    0;
}
