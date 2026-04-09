typedef signed      int8_t;
typedef short     int16_t;
typedef int int32_t;
typedef unsigned      uint8_t;
typedef unsigned     uint32_t;
       void
platform_main_end(         crc )
{
 printf ("checksum = %X\n", crc);
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
transparent_crc (         val  )
{
 crc32_8bytes(val);
 }
struct S0 {
   int32_t f0;
   signed f1 : 22;
};
       struct S0 g_217[1]                       ;
       int16_t g_1204 = 0x8491L;
       struct S0 g_1896 = {0x1C87E74FL, 816};
       uint8_t func_14( int8_t        );
       int8_t func_1()
{
                                                                                                   func_14(           1    )                                                         ;
}
       uint8_t func_14(        p_16   )
    {
        struct S0 l_2620 = { 8L,666};
        for (p_16 = 0;            ; )
        {
                    for (;  g_1204      ; g_1204 += 1)
                        l_2620 =   (g_217[p_16] = g_1896)  ;
                         g_217[p_16] = l_2620 ;
                    return           1 ;
        }
    }
int main (                      )
{
    int i      ;
    func_1();
    for (i = 0; i < 1; i++)
        transparent_crc(g_217[i].f1  );
    platform_main_end(crc32_context                );
    return 0;
}
