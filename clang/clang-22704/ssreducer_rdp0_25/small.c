typedef signed char int8_t;
typedef int int32_t;
typedef long long int int64_t;
typedef unsigned char uint8_t;
static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1  )
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
   void *** f0;
   uint8_t f1;
   int32_t f6;
   uint8_t f7;
};
static int32_t g_2 = (-9L);
static struct S0 g_20 = {0xD03BL,0x5AL,-1L,2UL,0L,-9L,0xCC5C6A3FL,0UL};
static struct S0 g_330 = {0x5552L,1UL,1L,65535UL,0L,0x5F542185L,-9L,0x98L};
static void *** g_1145[6][10] = {{0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL}, {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL}, {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL}, {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL}, {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL}, {0xA92AL, 65535UL, 5UL, 9UL, 1UL, 65526UL, 1UL, 9UL, 5UL, 65535UL}};
inline static uint8_t func_13();
inline static uint8_t func_65();
static int8_t func_1()
{
    for (; (g_2 >= (-19)); )
    {
        int8_t l_12 = 1L;
        if (((((g_2 == (!((uint8_t)1))) < ((safe_sub_func_int64_t_s_s( ((((func_13() <= ((int32_t)1)) > l_12) , ((int32_t)1)) != 4UL))) <= l_12)) == g_1145[5][2])))
        {
            }
        else;
        };
    }
inline static uint8_t func_13()
{
    safe_rshift_func_uint8_t_u_s(func_65(), g_20.f0);
}
inline static uint8_t func_65()
{
    g_20.f6 += 1;
if (g_20.f6)
        goto lbl_93;
safe_sub_func_int32_t_s_s((~(0x4380DCB467A9C4D5LL ^ (((g_330.f7 = (g_330.f1 = (0xAB1AL <= 0xD2DCL))) | 0L) & 9L))) );
func_65();
safe_sub_func_int32_t_s_s((~(0x4380DCB467A9C4D5LL ^ (((g_330.f7 = (g_330.f1 = (0xAB1AL <= 0xD2DCL))) | 0L) & 9L))) );
{
    uint8_t l_1454 = 5UL;
return l_1454;
}
lbl_93:;
func_65();
{
    return ((uint8_t)1);
}
}
int main ()
{
    func_1();
    }