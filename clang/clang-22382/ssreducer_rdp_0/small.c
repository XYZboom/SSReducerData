
typedef short int int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;







struct S0 {
   signed f0 : 1;
   int64_t f1;
   signed f2 : 20;
   };

static int32_t g_2 = 1L;
static struct S0 g_35 = {-0,-1L,631,9};
static uint16_t g_40 = 65534UL;
static int16_t g_153 = 0L;
static int16_t g_158 = 0L;
static int32_t g_316 = 0x123013CDL;
static uint8_t g_391 = 255UL;
static int32_t g_1021[5] = {1L,1L,1L,1L,1L};
static int32_t g_2300 = (-1L);

static int64_t func_1();
static uint8_t func_12(   struct S0 p_16 );
static uint16_t func_51(int16_t p_52, uint16_t p_53 , int32_t p_55);
static struct S0 func_59(    struct S0 p_64);






static int64_t func_1()
{
    for (g_2 = 22; (g_2 <= (-3)); g_2 = safe_sub_func_int16_t_s_s(g_2, 2))
    {






{
        uint32_t l_30 = 0UL;
        uint8_t l_33 = 255UL;
        g_2300 |= func_6(((18446744073709551615UL != 0x315362DAAB72B21ALL) > func_12(   g_35 )), l_30, l_33, g_2, l_33);
        }




}
    }





static uint8_t func_12(   struct S0 p_16 )
{
    uint16_t l_47[9][1];
    int32_t l_48 = 0x693CE85DL;
    int32_t l_58 = 1L;


safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u((g_40 = p_16.f2), 0)) , func_41(p_16.f1, (l_47[0][0] = g_2), func_22(), l_48, ((safe_mul_func_int16_t_s_s((func_51(((safe_lshift_func_int8_t_s_s(l_58, 3)) , 1L), (func_22() , g_1021[3]) , g_1021[3]) && 0L), g_1021[3])) && 0x72B8796B4B0CDDFFLL))), 3);







}





static uint16_t func_51(int16_t p_52, uint16_t p_53 , int32_t p_55)
{
    struct S0 l_1427 = {0,-1L,929,12};






for (; (g_153 < 6); g_153 = safe_add_func_int8_t_s_s(g_153, 1))
    {
        uint32_t l_1440 = 0x3482DA34L;
        int32_t l_1452 = 0xB168BE91L;
        p_55 = (((l_1427.f2 = p_53) & (l_1452 &= (g_35.f1 , 0x2C6BL))) , ((safe_rshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((~((l_1452 = 0xE489E68586BFF0DDLL) ^ l_1440)), p_53)), (safe_mod_func_int8_t_s_s( )))) != p_52), 4)) & p_52));
    }





{






func_59(    l_1427);






{




for (; (g_391 != 54); )
    {
        struct S0 l_1479 = {0,-1L,935,13};
        l_1427 = (l_1479 = l_1427);
    };


        }






}
    }





static struct S0 func_59(    struct S0 p_64)
{






lbl_903:;







if (g_316)
                goto lbl_903;



}





int main ()
{
    func_1();
    }
