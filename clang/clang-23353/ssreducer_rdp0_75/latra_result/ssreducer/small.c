                 typedef   int32_t
                ;        g_62;
                 char
 safe_mul_func_int8_t_s_s (
               char
                                  si1,
               char
                                              si2 )
{
  return
    si1 * si2;
}
 struct
                 {
   signed f0    ;
                             }
                          g_80
                                       ;
static         *g_116 = &g_62;
static         *           g_2678 = &g_116;
static         * func_49( int32_t *     ,
               char
                                                      );
               func_10(   )
{
                            func_49(   g_2678 ,            1  );
    }
               * func_49( int32_t * p_51,
               char
                                                 p_52 )
{
        for (p_52 = 6;  p_52 !=  -7  ; p_52--)
            g_80.f0 ^=   safe_mul_func_int8_t_s_s(p_52, g_62)  &&                    1L  ;
    }
    main ()
{}
