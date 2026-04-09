typedef             int8_t;
typedef     int32_t;
typedef              uint32_t;
struct S0 {
   unsigned f0     ;
   signed f2 : 18;
   unsigned f3     ;
   signed f6     ;
   unsigned f7     ;
};
static struct S0 g_27                                           ;
               g_80    ;
       struct S0 g_210                                         ;
                 func_2(            )
{
            for (        ;  g_80      ;          )
    {
        struct S0 l_2818 = {             165                     };
int32_t BHbHbdl_2818_f2 =                                                                                                                                        g_210.f3                                                        ;
                    l_2818.f2 = BHbHbdl_2818_f2;
                                                   int32_t Brcrcl_2818_f2 =            (l_2818.f0 +  ~ g_27.f7  )                   -                         (                                         g_210.f6             && l_2818.f2)        ;
int32_t Brcrcbl_2818_f6 =                                                                                                                      l_2818.f2                                        ;
int8_t Brcrccg_27_f5 =                                                                                  Brcrcbl_2818_f6  |     (              g_210.f6  && l_2818.f2)   -  ~ Brcrcl_2818_f2      ;
uint32_t Brcrcdg_210_f3 =                                                                                                                                  Brcrccg_27_f5                                                                    ;
g_210.f3 = Brcrcdg_210_f3;
    }
}
    main (                      )
{
}
