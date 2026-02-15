
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned int uint32_t;



static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1  )
{}







static uint8_t
(safe_div_func_uint8_t_u_u)( uint8_t ui2 )
{}

static uint8_t
(safe_rshift_func_uint8_t_u_s)(uint8_t left, int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :

    (left >> ((int)right));
}

static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left  )
{}




struct S0 {
   void *** f0;
};

struct S1 {
   unsigned f0 : 29;
   signed f2 : 10;
   signed f4 : 18;
   signed f5 : 1;
   };


static struct S0 g_21 = {0xC0B8L};
static int32_t g_37 = 0x2EF61160L;
static int32_t g_38 = 6L;
static int8_t g_66 = (-5L);
static uint32_t g_80 = 7UL;
static int32_t g_183 = 0L;
static int32_t g_377 = 0x76F0FC06L;
static int32_t g_571 = 0x7B01DCB5L;
static int32_t g_756 = 0x66BD1D4CL;
static uint32_t g_968 = 0xFF7B2476L;



static int64_t func_1();
static uint8_t func_5(uint8_t p_6);
static int8_t func_14(    );
static int16_t func_44();
static int64_t func_1()
{
    (((*((struct S1*)0)) , (((((((-8L) && (safe_rshift_func_uint8_t_u_u(func_5((((((safe_div_func_uint8_t_u_u( func_14(    ))) , (*((struct S1*)0))))) , g_571)) ))) != ((int8_t)1)) , 0UL) > ((unsigned int)1)) | 0xC987502CL) && ((uint32_t)1))) != ((int8_t)1));
    }







static uint8_t func_5(uint8_t p_6)
{}







static int8_t func_14(    )
{
    if ((g_571 <= 2063719605))
                    { if ((((unsigned int)1) <= 5079))
                    if ((((int16_t)1)))
    {
        while ((g_21.f0 < 49336) )
{

g_968 |= ((((void ***)1)) >= ((int)1));

}

                    ((((int32_t)1) | (safe_mod_func_int16_t_s_s(((func_44() , ((int)1)) | ((((int8_t)1)) <= g_571)) ))) || (-1L));
    }
    else;}
    }







static int16_t func_44()
{
    struct S1 l_59 = {1957,70,26,2769,-287,0,5702};
                                       l_59.f5 = (safe_rshift_func_uint8_t_u_s(g_968, 5));
                                   if((g_21.f0 < g_756)){
int8_t backup_0_8502_91289_l_59_f5 = (~(((~(((l_59.f5 && (((~(l_59.f0)) / g_37) || ((int64_t)1))) / g_66))) - ((-(g_38)) * (~((((~(g_183)) % (~(g_377))) || (~((~((g_80 && l_59.f2))))))))))));
int32_t backup_1_8502_78635_g_37 = (-(((-(((~((-(backup_0_8502_91289_l_59_f5)))) ^ (-(l_59.f0))))) ^ (((-(((-(g_38)) + (~((~(g_377))))))) % (~(((-(((l_59.f2 + g_80) ^ l_59.f5))) - g_37)))) + ((~(g_183)) & (~((~(g_66)))))))));
int32_t backup_2_8502_22363_g_183 = (-((((((g_377 && backup_1_8502_78635_g_37) * g_37) | l_59.f5) & (g_80 ^ ((int64_t)1))) - (~(((~((l_59.f2 * l_59.f0))) / (g_66 & g_38)))))));
if((((!l_59.f5) || (g_183 < backup_2_8502_22363_g_183)) && ((backup_0_8502_91289_l_59_f5 <= 12) && (l_59.f2 >= 26)))){
backup_0_8502_91289_l_59_f5 = l_59.f5;
l_59.f5 = (-(((~((~((~((~(l_59.f2)))))))) / (~(((-(((g_183 + backup_2_8502_22363_g_183) + ((~(l_59.f0)) | (-(((backup_0_8502_91289_l_59_f5 + g_80) / backup_1_8502_78635_g_37))))))) & (g_377 | (-((g_37 % g_66))))))))));
g_37 = (-((((((~(l_59.f2)) + backup_2_8502_22363_g_183) % (l_59.f5 + ((~(g_80)) & ((~(g_66)) / backup_0_8502_91289_l_59_f5)))) - (-(g_377))) % ((g_38 || l_59.f0) | g_183))));
g_183 = (-(((~((((~(l_59.f5)) ^ g_377) * (-((backup_1_8502_78635_g_37 * g_183)))))) / (((g_37 || l_59.f0) % (backup_2_8502_22363_g_183 - ((uint32_t)1))) & (~((g_66 + backup_0_8502_91289_l_59_f5)))))));
}

                    }

                                                       }







int main ( )
{
    func_1();
    return 0;
}
