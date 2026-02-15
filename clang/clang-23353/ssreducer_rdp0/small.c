
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;

static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return






    si1 * si2;
}

static int8_t
(safe_lshift_func_int8_t_s_u)(  )
{}



static int16_t
(safe_lshift_func_int16_t_s_s)(  )
{}

static int16_t
(safe_lshift_func_int16_t_s_u)(  )
{}

static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left  )
{}







static uint64_t
(safe_sub_func_uint64_t_u_u)(  )
{}




struct S0 {
   };

struct S1 {
   signed f0 : 5;
   uint32_t f2;
   };


static int8_t g_16 = 0x61L;
static int32_t g_25 = 0x6EAB3CF8L;
static int32_t g_62 = 3L;
static volatile struct S1 g_80 = {-4,-4,0x4F663622L,0xFA2EL};
static int32_t *g_116 = &g_62;
static volatile struct S1 g_793 = {3,15,0x139AF61BL,65526UL};
static volatile struct S1 g_794 = {-3,6,0x7005EE34L,0xC9B9L};
static volatile struct S1 g_847 = {-3,9,18446744073709551614UL,0x1B89L};
static volatile struct S1 *g_1596 = &g_847;
static volatile struct S1 ** volatile g_1595 = &g_1596;
static struct S1 g_2213 = {0,-0,0xE975E4D3L,0xDE00L};
static const struct S1 g_2792 = {-0,11,0xAF3DB8F7L,0x8427L};
static int32_t g_2951 = 0x91FA2AD1L;
static int32_t ** volatile g_2976 = &g_116;



static struct S1 func_1();
static int32_t func_2(const int8_t p_3    );
static int16_t func_10( int32_t p_12 , int16_t p_14);
static int32_t * func_49(uint8_t p_50 , int8_t p_52, int32_t * p_53);
static struct S1 func_1()
{
    if (func_2((0x9A57L & ((safe_rshift_func_int16_t_s_u(func_10( g_16 , (0xCC8BF9E1AA18D599LL <= g_2213.f2)) )) || g_793.f0))    ))
    {

        }
    else;

    }







static int32_t func_2(const int8_t p_3    )
{}







static int16_t func_10( int32_t p_12 , int16_t p_14)
{
    uint32_t l_2958 = 0x5D6F4B1AL;
    int32_t *l_2975 = &g_2951;
    (*g_2976) = func_49(l_2958 , g_2792.f2, (((safe_lshift_func_int16_t_s_u( )) | (((p_12 & (safe_lshift_func_int8_t_s_u( ))) , p_14) <= g_2951)) , l_2975));

    }







static int32_t * func_49(uint8_t p_50 , int8_t p_52, int32_t * p_53)
{
    int32_t *l_81 = &g_25;
    if (((((((safe_sub_func_uint64_t_u_u( )) || p_50) > p_50) , (*l_81)) , &g_62) == p_53))
    {


    }
    else
    {
        for (p_52 = 6; (p_52 != (-7)); p_52--)
        {
            g_80.f0 ^= ((safe_mul_func_int8_t_s_s(p_52, g_62)) && ((safe_lshift_func_int16_t_s_s( )) || 1L));


        }


        }



    }





int main ()
{
    func_1();

}
