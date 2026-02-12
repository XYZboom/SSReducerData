typedef signed      int8_t;
typedef short     int16_t;
typedef int int32_t;
typedef unsigned      uint8_t;
typedef unsigned           uint16_t;
typedef unsigned     uint32_t;
       int8_t
 safe_add_func_int8_t_s_s (                       )
{
}
       int8_t
 safe_lshift_func_int8_t_s_s (                       )
{
}
       int8_t
 safe_lshift_func_int8_t_s_u (       left                     )
{
  return
      left
                                   ;
}
       int8_t
 safe_rshift_func_int8_t_s_s (                       )
{
}
       int16_t
 safe_add_func_int16_t_s_s (                         )
{
}
       int16_t
 safe_sub_func_int16_t_s_s (int16_t si1, int16_t si2 )
{
  return
     si1 - si2 ;
}
       int16_t
 safe_lshift_func_int16_t_s_s (                        )
{
}
       int16_t
 safe_lshift_func_int16_t_s_u (                                 )
{
}
       int32_t
 safe_add_func_int32_t_s_s (        si1              )
{
  return
       si1
               ;
}
       int32_t
 safe_mod_func_int32_t_s_s (                         )
{
}
       uint8_t
 safe_sub_func_uint8_t_u_u (                         )
{
}
       uint16_t
 safe_lshift_func_uint16_t_u_u (                                  )
{
}
       uint32_t
 safe_sub_func_uint32_t_u_u (uint32_t ui1, uint32_t ui2 )
{
  return ui1 - ui2;
}
       uint32_t
 safe_mod_func_uint32_t_u_u (uint32_t ui1, uint32_t ui2 )
{
  return
     ui1       ;
}
  int32_t
  g_3
             ;
  int32_t
  g_54
             ;
  int32_t
  g_201
             ;
             ;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                ;
  int16_t
  g_521
       ;
  uint8_t
  g_588
       ;
  uint16_t
  g_774
         ;
  volatile
  uint32_t
  g_1265
  [5]
  [8]
              ;
  uint8_t
  g_1810
 ;
                                                                                                                                                                                                                                                            ;
                                                                                                                                                                                                                                                                                                                                                                                                           ;
 ;
static
  int16_t
func_6
(
);
static
  int16_t
func_22
(int8_t
    ,
int8_t
);
static
  uint8_t
func_45
(uint32_t
    ,
int32_t
    ,
uint32_t
    ,
int16_t
    ,
uint16_t
);
static int16_t
func_1 (
)
{
  int16_t
    l_2
       ;
  int
    i;
  for
    (i
     =
     0;
     i
      ;
        )
       i
      =
      0x2062L;
  for
    (
      ;
      g_3
        ;
      )
  {
    if (                    func_6 (                                                         l_2      )  )
   ;
    else
    {
      int32_t
 l_4481
            ;
      if (                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 l_4481                                 )
        ;
    }
  }
}
       int32_t
func_4
  (
)
{
}
       int16_t
func_6
  (
   p_7
)
{
  int32_t
    l_19
               ;
    if (                                                                                             p_7                                                                                                        )
    ;
    else
    {
                                                                                                                                 func_22 ( safe_mod_func_int32_t_s_s                                                                                                                                                                                                               , l_19)                          ;
                                                                                                                                 func_22 ( safe_mod_func_int32_t_s_s                                                                                                                                                                                                               , l_19)                          ;
    }
}
       uint16_t
func_14
  (
)
{
}
       int16_t
func_22
  (int8_t
   p_23,
   int8_t
   p_24
)
{
  if (                                     p_23         )
  {
    int32_t
      l_55
                 ;
    if (                             func_45 ( safe_add_func_int16_t_s_s              ,  g_54                         , g_3,  l_55                                                                                                                                                                                                             , g_1810   )                      )
            ;
  }
  else
  {
                                                                                                                                                                                                                                                     g_521                                                                     ;
  }
}
       int32_t
func_42
  (
)
{
}
       uint8_t
func_45
  (uint32_t
   p_46,
   int32_t
   p_47,
   uint32_t
   p_48,
   int16_t
   p_49,
   uint16_t
   p_50
)
{
    int32_t
      l_2307
           ;
    for
      (
        ;
       ;
   )
    {
      for
 (
   ;
   g_774
      ;
  g_774++)
      {
 for
   (g_201
    =
    0;
     g_201
     >=
      -27  ;
    g_201
    =
    safe_sub_func_int16_t_s_s
    (g_201,
     6))
 {
                                     p_46 =            safe_sub_func_uint32_t_u_u ( safe_add_func_int8_t_s_s                                                                                                                                                                                    , p_46)                        ;
 }
      }
 {
                                                                                                                                                                                                                                                                                                                               ;
 }
                                                                                                                                                              p_46           ||                                                                                                                                                                                                                                                                                                                                                                                                                                            g_1265[2][5]                                                                                                                                                                                                                                      ;
    }
}
       int32_t
func_56
  (
)
{
}
int
main (
)
{
  func_1
    ();
}
