typedef signed      int8_t;
typedef short     int16_t;
typedef int int32_t;
typedef unsigned short     uint16_t;
typedef unsigned     uint32_t;
       int32_t g_1600     ;
       int32_t func_8(uint16_t      );
       uint16_t func_55(int8_t       );
       int16_t func_89(    int32_t     );
       uint32_t func_97( uint16_t     , uint16_t      , uint32_t       );
       int32_t func_1()
{
                           func_8(           1    )   ;
    }
       int32_t func_8(uint16_t p_9  )
{
                                                                                                                                                                                                                                                                    func_55(                                        1        )                                                                                                                     ;
}
       uint16_t func_55(       p_56  )
    {
        if (                                                                                                                                                                                                               func_89(    p_56)                                                                                                                                                                                                       )
        {
            }
        }
       int16_t func_89(            p_94)
{
    int32_t l_103 =  -7L ;
    if (                                       func_97(            1  , l_103,           1  )                                     )
                        return            1 ;
    }
       uint32_t func_97( uint16_t p_99, uint16_t p_100, uint32_t p_101 )
{
    int16_t l_125[8];
    int i;
    for (i = 0; i < 8; i++)
        l_125[i] =   6L ;
    for (;  p_99 <= 7 ; p_99 += 1)
    {
        for (p_101 = 0;  p_101 <= 7 ; )
        {
            if (  g_1600 < 0  )
        for (;  p_101 <= 7 ; p_101 += 1)
            if (l_125[p_100])
                break;
if (l_125[p_99])
                break;
        }
    }
    return           1 ;
}
int main ()
{
    func_1();
}
