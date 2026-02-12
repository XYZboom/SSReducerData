                 unsigned 
                crc32_context
                ;
                 long 
               g_455
                ;
                 int 
                        g_3898
                ;
                 int 
               g_3331
                ;
        short 
               g_189
                ;char 
               g_359
                ;
                 int
                        g_3
                ;
        short
 safe_mod_func_int16_t_s_s (
        short
                                    si1,
        short
                                                 si2 )
{
  return
      si2 == 0  ||   si1                &&  si2            ?
      si1   :
     si1 % si2 ;
}
        long
 safe_add_func_int64_t_s_s (
        long
                                    si1,
        long
                                                 si2 )
{
  return
           si2 ;
}
                 char
 safe_mul_func_uint8_t_u_u (
                 char
                                    ui1,
                 char
                                                 ui2 )
{
  return                ui1                       ;
}
                 char
 safe_lshift_func_uint8_t_u_s (
                 char
                                       left, int right )
{
  return
                   right  ;
}
        unsigned
 safe_mul_func_uint16_t_u_u (
        unsigned
                                      ui1,
        unsigned
                                                    ui2 )
{
  return                                      ui2 ;
}
        unsigned
 safe_mod_func_uint16_t_u_u (
        unsigned
                                      ui1,
        unsigned
                                                    ui2 )
{
  return
     ui2 == 0  ?
      ui1   :
     ui1 % ui2 ;
}
        unsigned
                g_75 = 0xDC6F3D13L;
                 long long
                g_99
               ;
                 long long
                g_806      ;
        int
               g_1272 = 0x41AEA787L;
                 char
               g_236
                   ,
               g_1394
                             ;
static
               char
              g_2945        ;
        unsigned
                g_983
                   ,
                g_3487
                             ;
static
               char
              g_4576[ ] = {
  0xA0L,
  0xA0L,
  0xA0L
};
        long
func_1 (    )
{
                 char
          l_19 = 4UL;
        short
              l_24 =   1L ;
        int
            l_4837
       ;
      for (g_806 = 0;             ;           )
 {
        g_189 = 0
       ;for ( ;
                    g_189 <= 3
                 ;
                                 g_189 += 1
                           )
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
                                                                                                                                                                                                                                                                                                                                                                                                                                                                   l_4837
                          =
                                         ~                             safe_mul_func_uint8_t_u_u (            safe_add_func_int64_t_s_s ( g_455                     ,                             safe_mod_func_int16_t_s_s (g_3487, l_24)          )   !=       0        , g_1394)
             +
                                                                                                                                                                                                                                                                                                 g_806   && 0x57L                      ) )            | 0x5379D1F7L                                      , 0xDA2DL)  != g_75                ) )         > g_4576[2])                                    )
      {
        g_3 =  g_1272
                                                                                                                                                                                                                     ;
                g_99
                    =
            l_4837
               ;
      }
    else
        g_3331
   =
                                                                                                                                                                                                                                                                                                                                                                                                                                                                   l_4837
               ;
       for (          ;  g_2945 <= 3 ;            )
        return g_983;
   if (
              safe_mod_func_int16_t_s_s
       (
          safe_mul_func_uint16_t_u_u
          (g_3898,
            safe_lshift_func_uint8_t_u_s
            (g_236,
                                                                                                             safe_add_func_int64_t_s_s ( g_455                     ,                             safe_mod_func_int16_t_s_s (g_3487, l_24)          )                                                                                  ) )                                                               , 0xDA2DL)                                                                                     )
     {
     }
   else
       g_3331
         =
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               l_4837                                           ;
 }
}
int
main (    )
{
  func_1 ();
 crc32_context =
                   g_3
                                       ;
 printf ("checksum = %X\n",
                     crc32_context
                               );
  return 0;
}
