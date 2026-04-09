typedef signed      int8_t;
typedef int int32_t;
typedef          char uint8_t;
typedef unsigned           uint16_t;
typedef unsigned     uint32_t;
       uint8_t
 safe_lshift_func_uint8_t_u_s (        left  )
{
  return
                                                          left >   255                        ?
      left   :
     left <<             1   ;
}
       uint32_t
 safe_sub_func_uint32_t_u_u (uint32_t ui1, uint32_t ui2 )
{}
struct S0 {
   int8_t f0;
   int8_t f1;
   int32_t f3;
   };
       uint32_t g_23[3]                                        ;
       uint16_t g_32          ;
       int32_t g_80              ;
       uint32_t g_81[ ] = {0xFACDC9FFL                                    };
       struct S0 g_152[2]                                                                  ;
       struct S0 func_76(  );
       uint8_t func_99();
       uint16_t func_124(                  );
       struct S0 func_129(                                 );
       struct S0 func_1()
        {
            for (;                    ; )
                                 func_76(  )             ;
            }
       int32_t func_17(          p_20 )
{
    }
       struct S0 func_76(  )
{
                                                func_17(  func_99() )                        ;
    }
       uint8_t func_99()
{
    struct S0 l_147 = { 5L                                   };
if (                                                                                                                                                        func_124(func_129( l_147                )   )                                                                                 )
    {
}
}
       uint16_t func_124(                  )
{}
       struct S0 func_129( struct S0 p_131, uint32_t p_132 )
{
    struct S0 l_151 = {0x15L, 5L               };
    int32_t l_195              ;
for (         ;  l_195      ; )
    {
for (p_132 = 0;  p_132 <= 39 ; ++p_132)
    {
        for (p_131.f0 = 0;  p_131.f0 <= 2 ; p_131.f0 += 1)
        {
            g_152[0] = l_151;
            l_151.f3 = g_81[p_131.f0];
            if (       p_131.f0                    ^ l_151.f1 )
                    g_80 =                                                                                                                                                                                                                                                               safe_sub_func_uint32_t_u_u(          1 ,                                   l_195 =                             (   safe_lshift_func_uint8_t_u_s(                            g_152[0].f3                                    )                        && p_131.f1) | g_23[1]                   )                                                                                                                                         ;
            else
                    for (;  g_32      ; g_32 += 1);
        }
    }
    }
}
int main ( )
{
    }
