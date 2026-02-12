typedef        char int8_t;
typedef short     int16_t;
typedef int int32_t;
typedef long          int64_t;
typedef          char uint8_t;
typedef unsigned           uint16_t;
typedef unsigned     uint32_t;
typedef          long long     uint64_t;
       void
platform_main_end(uint32_t crc, int flag)
{
 printf ("checksum = %X\n", crc);
}
       int8_t
 safe_mul_func_int8_t_s_s (                       )
{
}
       int8_t
 safe_mod_func_int8_t_s_s (int8_t si1, int8_t si2 )
{
  return
     si1       ;
}
       int16_t
 safe_mod_func_int16_t_s_s (int16_t si1, int16_t si2 )
{
  return
      si2 == 0  ||   si1                &&  si2            ?
      si1   :
     si1 % si2 ;
}
       int64_t
 safe_add_func_int64_t_s_s (int64_t si1, int64_t si2 )
{
  return
           si2 ;
}
       uint8_t
 safe_mul_func_uint8_t_u_u (uint8_t ui1, uint8_t ui2 )
{
  return                ui1                       ;
}
       uint8_t
 safe_lshift_func_uint8_t_u_s (uint8_t left, int right )
{
  return
                   right  ;
}
       uint8_t
 safe_rshift_func_uint8_t_u_u (        left                     )
{
  return
      left
                                   ;
}
       uint16_t
 safe_mul_func_uint16_t_u_u (uint16_t ui1, uint16_t ui2 )
{
  return                                      ui2 ;
}
       uint16_t
 safe_mod_func_uint16_t_u_u (uint16_t ui1, uint16_t ui2 )
{
  return
     ui2 == 0  ?
      ui1   :
     ui1 % ui2 ;
}
       uint64_t
 safe_add_func_uint64_t_u_u (uint64_t ui1, uint64_t ui2 )
{
  return ui1 + ui2;
}
                              ;
       uint32_t crc32_context               ;
       void
crc32_gentab (    )
{
 int i   ;
 for (     ;        ;    ) {
 }
}
       void
crc32_byte (        b) {
 crc32_context =
                             b         ;
}
       void
crc32_8bytes (         val)
{
 crc32_byte ( val           );
}
       void
transparent_crc (uint64_t val, char* vname, int flag)
{
 crc32_8bytes(val);
}
                int32_t g_3        ;
       int32_t g_4
 ;
       uint32_t g_75 = 0xDC6F3D13L;
       uint64_t g_99[4]
 ;
       int16_t g_189     ;
       uint8_t g_236        ;
       uint8_t g_359      ;
       int64_t g_455        ;
       int16_t g_540
 ;
       uint64_t g_806      ;
       int32_t g_921[8][10][1]
 ;
       uint32_t g_983              ;
       int32_t g_1272 = 0x41AEA787L;
       uint8_t g_1394        ;
       int64_t g_1395 = 4L;
       int32_t g_1923 = 0x2A8A2152L;
static int8_t g_2945        ;
       int32_t g_3331        ;
       uint32_t g_3487              ;
                             ;
                int32_t g_3898        ;
static int8_t g_4576[ ] = {
  0xA0L,
  0xA0L,
  0xA0L
};
static
  int8_t
  func_13
  (uint8_t     , int32_t     , uint32_t     , int32_t     , uint16_t     );
static int32_t func_20 (uint32_t     , uint8_t     , int16_t     );
       int64_t
func_1 (    )
{
  uint32_t l_2[8][8][4] =
      {
      0x37F4A1D2L                                       }
                                               ;
  uint8_t l_19 = 4UL;
  int32_t
                                          ;
    {
      int16_t l_24 =   1L ;
      int32_t l_4837[5][2][10] =
   {
          0xE9C0DC89L
                                             }
       ;
    safe_mul_func_uint8_t_u_u
    (2UL,
      func_13 (l_19,
        func_20
                                        ,
        g_4      , g_4      , l_2[4][2][2]) )
                            ;
      for (g_806 = 0;             ;           )
 {
   for (g_189 = 0;  g_189 <= 3 ; g_189 += 1)
     {
       int64_t l_4803 = 0x96458143B7FABA93LL;
       if (g_1395)
  {
    if (
           g_75 >=
     (
         (g_359 =
           safe_mod_func_uint16_t_u_u
    (l_19,
        safe_mod_func_int16_t_s_s
        (
           safe_mul_func_uint16_t_u_u
           (g_3898,
             safe_lshift_func_uint8_t_u_s
      (g_236,
          l_4837[4][1][5] =
            safe_add_func_uint64_t_u_u ( ~ safe_mul_func_uint8_t_u_u ( safe_mul_func_uint8_t_u_u (            safe_add_func_int64_t_s_s ( g_455                     ,                             safe_mod_func_int16_t_s_s (g_3487, l_24)          )   !=       0        , g_1394) , l_4803)  , g_806)  && 0x57L                      ) )            | 0x5379D1F7L                                      , 0xDA2DL)  != g_75                ) )         > g_4576[2])                                    )
      {
        g_3 =  g_1272
                                                                                                                                                                                                                     ;
            g_99[3] =
            l_4837[4][1][5]
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    ;
      }
    else
      {
        g_3331
   =
                                                                                                                                                                                                                                                                                                                                                                                                                                                                   l_4837[4][1][5]                                  ;
                                                                                                                                                                                                                                                                                                                    ;
      }
  }
       else
  {
    g_921
      [1]
      [9]
      [0]
      =
        safe_mod_func_int16_t_s_s
                            ;
  }
     }
       for (          ;  g_2945 <= 3 ;            )
  {
    for (          ;  g_1923      ;            )
        return g_983;
  }
       {
   if (
          g_75 >=
          safe_mod_func_uint16_t_u_u
          (l_19,
              safe_mod_func_int16_t_s_s
       (
          safe_mul_func_uint16_t_u_u
          (g_3898,
            safe_lshift_func_uint8_t_u_s
            (g_236,
                                                                                                             safe_add_func_int64_t_s_s ( g_455                     ,                             safe_mod_func_int16_t_s_s (g_3487, l_24)          )                                                                                  ) )                                                               , 0xDA2DL)                         )                                                           )
     {
     }
   else
     {
       g_3331
         =
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               l_4837                                           ;
     }
   for (        ;            ;         1)
        ;
       }
 }
    }
}
       int8_t
  func_13
  (uint8_t p_14, int32_t p_15, uint32_t p_16, int32_t p_17, uint16_t p_18)
{
      if ( p_18
                                                               )
 {
     {
                       ;
     }
 }
      else
   return      1 ;
}
       int32_t func_20 (uint32_t p_21, uint8_t p_22, int16_t p_23)
{
}
int
main (    )
{
  int print_hash_value = 0;
  func_1 ();
  transparent_crc (g_3, "g_3", print_hash_value);
  platform_main_end (crc32_context               , print_hash_value);
  return 0;
}
