typedef signed      int8_t;
typedef short     int16_t;
typedef int int32_t;
typedef long          int64_t;
typedef          char uint8_t;
typedef unsigned           uint16_t;
typedef unsigned     uint32_t;
typedef          long long     uint64_t;
       int16_t
 safe_mod_func_int16_t_s_s (int16_t si1, int16_t si2 )
{
  return
      si2       ||   si1                &&  si2
               ;
}
       int64_t
 safe_add_func_int64_t_s_s (int64_t si1, int64_t si2 )
{
  return
       si1    &&  si2    &&  si1 >                          si2
               ;
}
       uint8_t
 safe_mul_func_uint8_t_u_u (uint8_t ui1, uint8_t ui2 )
{
  return                ui1                       ;
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
     ui2
               ;
}
       uint64_t
 safe_add_func_uint64_t_u_u (uint64_t ui1, uint64_t ui2 )
{
  return ui1 + ui2;
}
       uint32_t crc32_context               ;
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
transparent_crc (uint64_t val, char* vname )
{
 crc32_8bytes(val);
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context               );
}
       uint32_t g_75 = 0xDC6F3D13L;
       uint64_t g_99[4] = {
  0x819422B6A99605DBLL,
  0x819422B6A99605DBLL
};
       int16_t g_189     ;
       uint64_t g_806      ;
       uint8_t g_1060        ;
       uint8_t g_1394        ;
       int32_t g_3331        ;
  int8_t
  func_13
  (    uint16_t     );
       int64_t
func_1 ()
{
  int32_t l_4768[7][9][3]
                                          ;
      int32_t l_4837[5][2][10]
       ;
      l_4768[2][2][0] =
      func_13 (
                   1 )
                        ;
      for (g_806 = 0;             ; )
 {
   for (g_189 = 0;  g_189 <= 3 ; )
     {
    if (
           g_75 >=
     (
           safe_mod_func_uint16_t_u_u
    (          1 ,
           safe_mul_func_uint16_t_u_u
           (                   1 ,
          l_4837[4][1][5] =
            safe_add_func_uint64_t_u_u ( ~                             safe_mul_func_uint8_t_u_u (   safe_add_func_int64_t_s_s (            1   ,                             safe_mod_func_int16_t_s_s (           1 ,           1 )                  )   !=           1  , g_1394)            , g_806)  && 0x57L                      )                                                          | 0x5C5773AEL )       >          1 )                                    )
                   g_99[3] =
            l_4837[4][1][5]
                                                                                                                                                                                                                                                                                                                                                                ;
    else
      {
        g_3331
   =
           l_4837[4][1][5]                        ;
       g_1060 =
                   1
                           ;
      }
    if (l_4768[2][2][0])
      break;
       }
     break;
   }
  }
       int8_t
  func_13
  (    uint16_t p_18)
{
   return g_99[1];
  }
int
main ()
{
  func_1 ();
  transparent_crc (g_1060, "g_1060" );
  return 0;
}
