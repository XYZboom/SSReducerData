                 unsigned 
                crc32_context
                ;
                 int             i
                ;
                 int 
               g_3331
                ;
                 short
               g_189
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
                                                    ui2 )
{
  return
                                          32
                             ;
}
       void
transparent_crc (
                 long
                          val, char* vname )
{
 crc32_context =
              val
                                       ;
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context               );
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
                         ];
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
        int
           l_4837
       [
                     5
                 ]
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
           (
           l_4837
       [
                 4
                 ]
                          =
                                         ~                             safe_mul_func_uint8_t_u_u (   safe_add_func_int64_t_s_s (            1   ,                             safe_mod_func_int16_t_s_s (           1 , ((short)1))    )   !=           1  , ((unsigned int)1))
             +
                                                                                                                                                                                                                                                                            g_806   && 0x57L                      )                                                                                >          1 )                                    )
               g_921
       [
              5
                 ]
                       =
       safe_mul_func_uint8_t_u_u
       (       4       ,
                g_99
                           =
           l_4837
       [
                   4
                 ]
                                                                                                                                                                                                                                                                                                                  )                                       ;
    else
        g_3331
   =
           l_4837
               [
                  4
                         ];
    if (
          l_4768
       [
               2
                 ]
                       )
      break;
       }
        return g_189;
   }
  }
        signed
  func_13
  (
                    )
{}
int
main ()
{
  func_1 ();
  for (; i < 8; i++)
       transparent_crc
  (
               g_921
       [
         i
                 ]
                 , "g_921[i][j][k]" );
  return
         0
                             ;
}
