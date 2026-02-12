typedef             int8_t;
typedef           int16_t;
typedef     int32_t;
typedef               int64_t;
typedef               uint8_t;
typedef                    uint16_t;
typedef              uint32_t;
typedef                        uint64_t;
 safe_rshift_func_int16_t_s_s (                        )
{
}
 safe_rshift_func_uint8_t_u_s (uint8_t left, int right )
{
  return
     left >>       right  ;
}
 safe_lshift_func_uint16_t_u_u (                                  )
{
}
 safe_sub_func_uint64_t_u_u (                           )
{
}
crc32_8bytes (            )
{
}
struct S0 {
   uint16_t f0;
};
struct S1 {
   unsigned f0     ;
   signed f2     ;
   unsigned f3 : 27;
   signed f5 : 1;
};
static        g_12        ;
       struct S0 g_21            ;
static         g_32        ;
static         g_37              ;
static        g_66 =  -5L ;
static          g_80 = 7UL;
static         g_183     ;
static         g_377 = 0x76F0FC06L;
static          g_968 = 0xFF7B2476L;
static        func_14(int8_t     , struct S1     , struct S0     , struct S0     , int32_t     );
static         func_44(             );
               func_1(    )
{
    struct S1 l_20                                ;
                                                                                                                                                                                                                                        func_14(g_12, l_20, g_21, g_21, g_21.f0)                                                                                               ;
}
              func_14(int8_t p_15, struct S1 p_16, struct S0 p_17, struct S0 p_18, int32_t p_19)
{
                                                       func_44(                                                                    safe_sub_func_uint64_t_u_u              )                                                                                        ;
}
               func_44(             )
{
    struct S1 l_59 = {1957,70,26                 };
                    l_59.f5 =  safe_rshift_func_uint8_t_u_s(g_968, 5) ;
                                   int32_t backup_0_8492_35125_g_756 =  ~                                                                                                                             g_21.f0        ;
int32_t                                                                                                                                                                                      ;
                g_21.f0                                                                                                                                                                                                         ;
                               int8_t backup_0_8502_91289_l_59_f5                                                                                                                                                    ;
int32_t backup_1_8502_78635_g_37 =                                                    l_59.f0                                                                                                                                   ;
int32_t backup_2_8502_22363_g_183 =                                                                  g_80                                                              ;
uint32_t backup_3_8502_6189_l_59_f0                                                                                                                                                                       ;
backup_0_8502_91289_l_59_f5 = l_59.f5;
l_59.f5 =                 l_59.f2         /                                                                                                                                            (g_377 |     g_37          )      ;
g_37 =                       backup_2_8502_22363_g_183  % (l_59.f5 +                ~ g_66   / backup_0_8502_91289_l_59_f5  )                                                ;
g_183 =             l_59.f5                                                                                                                                                                                          ;
}
               func_56(                              )
{
}
               func_94(                                          )
{
}
    main (                      )
{
    func_1();
}
