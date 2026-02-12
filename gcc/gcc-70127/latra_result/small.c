                 unsigned 
                g_174
                ;int               i;
                 unsigned
                crc32_context
                ;
struct S0 {
        int
           f0;
   signed f1 : 22;
};
       struct S0 g_217[1]                       ;
static
        int
               g_1177
               ;
       struct S0 g_1896 = {0x1C87E74FL, 816};
int main (                      )
{
        struct S0 l_2620 = { 8L,666};
            for (         ;  g_174 <= 1 ; g_174 += 1)
                {
                        l_2620 =                     (g_217[
               g_1177
                                                                ] = g_1896)  ;
                                  g_217[
               g_1177
                                            ] = l_2620 ;
                }
 crc32_context =
                        g_217[i].f1
                                       ;
 printf ("checksum = %X\n",
                      crc32_context
                               );
    return 0;
}
