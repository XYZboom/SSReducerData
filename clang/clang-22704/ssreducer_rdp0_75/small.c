typedef signed char int8_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned long long int uint64_t;
static int8_t
(safe_unary_minus_func_int8_t_s)(int8_t si )
{}
static void ***
(safe_sub_func_int64_t_s_s)( void *** si2 )
{}
static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
(safe_unary_minus_func_uint64_t_u)(uint64_t ui )
{}
static uint64_t
(safe_sub_func_uint64_t_u_u)(uint64_t ui1  )
{}
struct S0 {
   void *** f0;
   int32_t f2;
   int32_t f6;
   };
static struct S0 g_20 = {0xD03BL,0x5AL,-1L,2UL,0L,-9L,0xCC5C6A3FL,0UL};
static int32_t g_30[2] = {1L, 1L};
static struct S0 g_1116 = {0xDB2FL,255UL,-3L,0xE419L,0x77DF6E9CL,0L,-7L,0UL};
inline static uint8_t func_13();
inline static uint8_t func_65();
static int8_t func_1()
{
    for (; (((int32_t)1) >= (-19)); )
    {
        if (((((((int32_t)1) == (!((uint8_t)1))) < ((safe_sub_func_int64_t_s_s( ((((func_13() <= g_30[1]) > ((int8_t)1)) , ((int32_t)1)) != 4UL))) <= ((int8_t)1))) == ((void ***)1))))
        {
            }
        else;
        if (((int32_t)1))
            break;
        };
    }
inline static uint8_t func_13()
{
    safe_unary_minus_func_int8_t_s(((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u((((g_20.f2 > g_20.f0) | (safe_rshift_func_uint8_t_u_s(func_65(), g_20.f0))) < g_30[0]))) )) >= 0x2712L));
}
inline static uint8_t func_65()
{
    {
g_20.f6 += 1;
}
if (g_20.f6)
        goto lbl_93;
safe_unary_minus_func_int8_t_s(((safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u((((g_20.f2 > g_20.f0) | (safe_rshift_func_uint8_t_u_s(func_65(), g_20.f0))) < g_30[0]))) )) >= 0x2712L));
g_1116.f2 -= 1;
{
    return ((uint8_t)1);
}
lbl_93:;
func_1();
{
    uint8_t l_1454 = 5UL;
    return l_1454;
}
}
int main ()
{
    func_1();
    }