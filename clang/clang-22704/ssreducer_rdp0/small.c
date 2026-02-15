typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
static int8_t
(safe_rshift_func_int8_t_s_s)( int right )
{}
static int64_t
(safe_sub_func_int64_t_s_s)( int64_t si2 )
{}
static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
struct S0 {
   int16_t f0;
   int32_t f6;
   };
static int32_t g_2 = (-9L);
static struct S0 g_20 = {0xD03BL,0x5AL,-1L,2UL,0L,-9L,0xCC5C6A3FL,0UL};
static int32_t g_30[2] = {1L, 1L};
static uint8_t g_1104 = 0x87L;
static uint16_t g_1145[6][10] = {{0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL}, {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL}, {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL}, {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL}, {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL}, {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL}};
inline static uint8_t func_13();
inline static uint8_t func_65(uint32_t p_66);
static int8_t func_76(    );
static int8_t func_1()
{
    uint8_t l_6 = 0x23L;
    int32_t l_1455 = 6L;
    for (; (g_2 >= (-19)); )
    {
        int8_t l_12 = 1L;
        int32_t l_1456 = 0x393FAECBL;
        if ((l_1456 = (((g_2 == (!l_6)) < ((safe_sub_func_int64_t_s_s( ((((func_13() <= g_30[1]) > l_12) , l_1455) != 4UL))) <= l_12)) == g_1145[5][2])))
        {
            }
        else;
        };
    }
inline static uint8_t func_13()
{
    safe_rshift_func_uint8_t_u_s(func_65((0L < 4294967295UL)), g_20.f0);
}
inline static uint8_t func_65(uint32_t p_66)
{
    if (g_20.f6)
        goto lbl_93;
safe_rshift_func_int8_t_s_s( ((func_76(    ) == 0x00L) == p_66));
{
    uint8_t l_1454 = 5UL;
return l_1454;
}
lbl_93:;
g_20.f6 += 1;
func_65((0L < 4294967295UL));
{
    uint8_t l_1454 = 5UL;
    l_1454 = 0xEEACFBBFL;
    return l_1454;
}
}
static int8_t func_76(    )
{
safe_rshift_func_uint8_t_u_s(func_65((0L < 4294967295UL)), g_20.f0);
g_1104 += 1;
}
int main ()
{
    func_1();
    }