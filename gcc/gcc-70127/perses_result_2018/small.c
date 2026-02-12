typedef signed      int8_t;
typedef short     int16_t;
typedef int int32_t;
typedef unsigned      uint8_t;
typedef unsigned           uint16_t;
typedef unsigned     uint32_t;
typedef unsigned               uint64_t;
       void
platform_main_end(uint32_t crc, int flag)
{
 printf ("checksum = %X\n", crc);
}
       int16_t
 safe_rshift_func_int16_t_s_u (                                 )
{
}
       uint32_t crc32_tab     ;
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
struct S0 {
   int32_t f0;
   signed f1 : 22;
};
struct S1 {
   unsigned f0     ;
   signed f3     ;
   unsigned f4     ;
};
       struct S1 g_2                        ;
       uint32_t g_174                         ;
       struct S0 g_217[1]                       ;
       struct S1 g_658                          ;
static int32_t g_1177[4][5][2]                                                                                                                                                                                                                                                                                                                                                                                                       ;
       struct S0 g_1896 = {0x1C87E74FL, 816};
static uint8_t func_14(uint16_t     , int8_t     , uint8_t     , uint32_t     , uint32_t     );
       int8_t func_1(    )
{
    int32_t l_22            =    0x5D64F689L                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              ;
                                                                                                                              func_14( g_2.f0                                                                                                                                                                                                                                                                                                                                                                                                                                                                     , g_1177[3][2][1],      2       , g_2.f4,      9       )                                                                                                 ;
}
       int32_t func_3(                                                     )
                {
                }
       uint8_t func_14(uint16_t p_15, int8_t p_16, uint8_t p_17, uint32_t p_18, uint32_t p_19)
{
        struct S0 l_2620 = { 8L,666};
        {
            for (         ;  g_174 <= 1 ; g_174 += 1)
                {
                    struct S0                          ;
                        l_2620 =                     (g_217[p_16] = g_1896)  ;
                                  g_217[p_16] = l_2620 ;
                }
        }
}
       int16_t func_25(            )
{
}
int main (                      )
{
    int i      ;
    int print_hash_value = 0;
    func_1();
    for (i = 0; i < 1; i++)
        transparent_crc(g_217[i].f1, "g_217[i].f1", print_hash_value);
    platform_main_end(crc32_context               , print_hash_value);
    return 0;
}
