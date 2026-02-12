        int 
               g_3331
                ;unsigned 
               g_1394
                ;
                 short 
               g_189
                ;
                 unsigned 
                crc32_context
                ;
        short
 safe_mod_func_int16_t_s_s (
        short
                                    si1,
        short
                                                 si2 )
{
  return
      si2       ||   si1                &&  si2
               ;
}
        long
 safe_add_func_int64_t_s_s (
        long
                                    si1,
        long
                                                 si2 )
{
  return
       si1    &&  si2    &&  si1 >                          si2
               ;
}
                 char
 safe_mul_func_uint8_t_u_u (
        unsigned
                                    ui1,
        unsigned
                                                 ui2 )
{
  return
                        ui1
                             ;
}
        unsigned
 safe_mul_func_uint16_t_u_u (
        unsigned
                                      ui1,
        unsigned
                                                    ui2 )
{
  return
                                          32
                             ;
}
        unsigned
                g_75 = 0xDC6F3D13L;
                 long long
                g_99
               ;
                 long long
                g_806      ;
        int
   g_921
       [
                     8
                 ][
                        10
                            ]
 ;
        signed
  func_13
  (
                    );
        long
func_1 ()
{
        int
          l_4768
               [
                 7
                         ];
        short
              l_24 =   1L ;
        int
              l_4837
               ;
          l_4768
       [
             2
                 ]
                      =
      func_13
                        ;
      for (g_806 = 0;             ; )
 {
   for (g_189 = 0;  g_189 <= 3 ; )
     {
    if (
           g_75 >=
     (
           safe_mul_func_uint16_t_u_u
           (                   1 ,
              l_4837
                          =
                                         ~                             safe_mul_func_uint8_t_u_u (   safe_add_func_int64_t_s_s (            1   ,                             safe_mod_func_int16_t_s_s (           1 , l_24)    )   !=           1  , g_1394)
             +
                                                                                                                                                                                                                                                                            g_806   && 0x57L                      )                                                                                >          1 )                                    )
   g_921
       [
              5
                 ][
                 3
                            ]
                       =
       safe_mul_func_uint8_t_u_u
       (       4       ,
                g_99
                           =
              l_4837
                                                                                                                                                                                                                                                                                                            )                                      ;
    else
        g_3331
   =
              l_4837
               ;
    if (
          l_4768
       [
               2
                 ]
                       )
      break;
       }
    return            1 ;
   }
  }
        signed
  func_13
  (
                    )
{
  }
int
main ()
{
  int i, j   ;
  func_1 ();
  for (i = 0; i    ;    );
  for (; i < 8; i++)
    {
           j = 0
       ;for ( ;
                  j < 10
                 ;
                          j++
                           )
 crc32_context =
             crc32_context ^
   g_921
               [
         i
                         ][
            j
                                    ];
    }
 printf ("checksum = %X\n",
                     crc32_context
                               );
  return
         0
                             ;
}
