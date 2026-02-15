
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned int uint32_t;

static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return






    si1 * si2;
}



static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left  )
{}







struct S1 {
   signed f0 : 5;
   };


static int32_t g_62 = 3L;
static volatile struct S1 g_80 = {-4,-4,0x4F663622L,0xFA2EL};
static int32_t *g_116 = &g_62;
static int32_t ** volatile g_2976 = &g_116;



static struct S1 func_1();
static int32_t func_2(const int8_t p_3    );
static int16_t func_10(   );
static int32_t * func_49(uint8_t p_50 , int8_t p_52 );
static struct S1 func_1()
{
    if (func_2((0x9A57L & ((safe_rshift_func_int16_t_s_u(func_10(   ) )) || ((int)1)))    ))
    {

        }
    else;

    }







static int32_t func_2(const int8_t p_3    )
{}







static int16_t func_10(   )
{
    (*g_2976) = func_49(((uint32_t)1) , ((uint32_t)1) );

    }







static int32_t * func_49(uint8_t p_50 , int8_t p_52 )
{
    if (((((((((void ***)1)) || p_50) > p_50) , (*(*((int32_t**)0)))) , &g_62) == (*((int32_t**)0))))
    {


    }
    else
    {
        for (p_52 = 6; (p_52 != (-7)); p_52--)
        {
            g_80.f0 ^= ((safe_mul_func_int8_t_s_s(p_52, g_62)) && ((((int16_t)1)) || 1L));


        }


        }



    }





int main ()
{
    func_1();

}
