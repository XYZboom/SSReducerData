                 typedef            int32_t,
                               int8_t
                             ;
                          g_968
                ;
                  g_183
                ;
                  g_37
                ;
 struct
           S1
                 {
   unsigned f1     ;
   signed f2     ;
   unsigned f3 : 27;
   signed f5 : 1;
                             }
              l_2
                                       ;
static        g_66 =  -5L ;
               func_1()
{
    l_2.f2 =         (                                                                                   func_14(    )                                                                                                           &&            1 )  !=          1  ;
    }
              func_14(    )
    {
g_968 |=                           1  ;
                                                                  func_44()                                                             ;
    }
               func_44()
{
    struct S1 l_59 = {1957,70,26                 };
                                       l_59.f5 =                               g_968   ;
int8_t backup_0_8502_91289_l_59_f5                                                                                                                                                                                              ;
int32_t backup_2_8502_22363_g_183 =                                         g_37                                                                                                                     ;
backup_0_8502_91289_l_59_f5 = l_59.f5;
l_59.f5 =                 l_59.f2                                                                                                                                                                                                      ;
g_37 =                       backup_2_8502_22363_g_183  % (l_59.f5 +                         ~ g_66   / backup_0_8502_91289_l_59_f5  )                                                                         ;
g_183 =                                                                                                                                                             g_66                                     ;
                                                       }
    main ( )
{
    func_1();
    }
