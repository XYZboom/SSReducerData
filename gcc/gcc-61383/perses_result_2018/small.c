typedef signed      int8_t;
typedef short     int16_t;
typedef int int32_t;
typedef unsigned      uint8_t;
typedef          short     uint16_t;
typedef unsigned     uint32_t;
       int8_t
 safe_mul_func_int8_t_s_s (                       )
{
}
       int8_t
 safe_mod_func_int8_t_s_s (int8_t si1, int8_t si2 )
{
  return
      si2 == 0                                         ?
      si1   :
     si1 % si2 ;
}
       int8_t
 safe_rshift_func_int8_t_s_s (       left            )
{
  return
      left
                          ;
}
       int16_t
 safe_lshift_func_int16_t_s_s (int16_t left, int right )
{
  return
      left
                          ;
}
       int32_t
 safe_add_func_int32_t_s_s (int32_t si1, int32_t si2 )
{
  return
       si1    &&  si2    &&  si1 >   2147483647 -si2    ||   si1<0  &&  si2<0  &&  si1                            ?
      si1   :
     si1 + si2 ;
}
       uint16_t
 safe_lshift_func_uint16_t_u_u (uint16_t left, unsigned     right )
{
  return
     left                          ;
}
       uint16_t
 safe_rshift_func_uint16_t_u_u (                            right )
{
  return
                    right
                                   ;
}
             ;
       void
crc32_8bytes (            )
{
}
  int8_t
  g_7
  =
    6L ;
  int32_t
  g_21
    ;
  uint16_t
  g_94
         ;
  uint32_t
  g_129
     ;
  uint8_t
  g_176
       ;
  int8_t
  g_181
    ;
static
  uint32_t
  g_244
  =
  0x01B28DB7L;
  uint32_t
  g_833
     ;
static
  int32_t
func_2
(int8_t
   ,
uint8_t
   ,
uint32_t
);
static
  const
  uint8_t
func_30
(int16_t
    ,
int16_t
);
static
  uint16_t
func_39
(int8_t
);
static
  int32_t
func_46
(uint32_t
);
static
  uint16_t
func_50
(uint16_t
    ,
uint8_t
    ,
uint16_t
    ,
int32_t
);
       uint16_t
func_1 (
)
{
  int16_t
    l_6
    =
    0L;
  if (      func_2 (l_6, g_7, l_6)                                                                                                                                                                                                                                                                                                                                                                                           )
           ;
  else
  {
    for
      (
            ;
    ;
       safe_add_func_int32_t_s_s
   )
   ;
  }
}
       int32_t
func_2
  (int8_t
   p_3,
   uint8_t
   p_4,
   uint32_t
   p_5
)
{
  uint32_t
    l_8
    =
    0x4F147909L;
    if (          p_4,                                                func_30 (          safe_lshift_func_uint16_t_u_u (65535UL,         func_39 ( (         func_46 (g_7)                                                                       ) & g_181 ) )             , g_833)                                       , l_8                         )
    {
      uint8_t
 l_867
 =
 1UL;
      return
 l_867;
    }
}
       uint16_t
func_22
  (
   p_26
)
{
}
       const uint8_t
func_30
  (int16_t
   p_31,
   int16_t
   p_32
)
{
           ;
}
       int16_t
func_33
  (
   p_34
)
{
}
       uint16_t
func_39
  (
   p_40
)
{
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
    int32_t
      l_220
                 ;
             ;
    if ( 0x4F92L <  safe_lshift_func_int16_t_s_s (                                                     (                              g_244      |  (                              l_220 =  safe_mod_func_int8_t_s_s (                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   p_40 , p_40)                                    )         )                                            , 6)  )
    {
      if (                                                                                                                                                                                                                                                                                                                                                                                                 g_244                                                                                                                                                                                     )
        ;
    }
    else
    {
      int8_t
 l_319
 =
 0xE3L;
      if ( p_40 <=               l_319                                                                                                                                                                                                                                                                                                                                                                                                         )
          ;
      else
 {
      if (l_220)
 break;
    }
    }
  }
  return
    g_129;
}
       uint16_t
func_41
  (
   p_44
)
{
  int32_t
    l_200
               ;
}
       int32_t
func_46
  (uint32_t
   p_47
)
{
  int32_t
    l_72
    =
    0xCA7DBC8BL;
      func_50
      (g_21,
                                        g_7                                                                                                                                                                                                                                                                                                                                                       , g_21, p_47)     ;
  return
    l_72;
}
       uint16_t
func_50
  (uint16_t
   p_51,
   uint8_t
   p_52,
   uint16_t
   p_53,
   int32_t
   p_54
)
{
    for
      (
            ;
        g_94
    ;
       safe_add_func_int32_t_s_s
   )
      ;
}
       uint8_t
func_55
  (
   p_56
)
{
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
