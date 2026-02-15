
typedef signed char int8_t;
typedef int int32_t;
typedef unsigned int uint32_t;
struct S0 {
   unsigned f0 : 20;
   unsigned f1 : 27;
   signed f2 : 18;
   unsigned f3 : 21;
   unsigned f4 : 18;
   signed f5 : 3;
   signed f6 : 22;
   unsigned f7 : 17;
   };
static struct S0 g_27 = {331,6943,151,1108,188,-1,1793,352,0x83};
static int32_t g_80 = 0;
static struct S0 g_210 = {62,11457,186,46,227,-1,-603,351,0xA8};
static struct S0 *g_466 = &g_210;
static struct S0 **g_465 = &g_466;
static int8_t func_1();
static int32_t * func_2();
static int8_t func_1()
{
    (*(*((int32_t***)0))) = func_2();
    }
static int32_t * func_2()
{
    for (; (g_80 <= 2); )
    {
        struct S0 l_2818 = {24,6738,-426,165,390,-0,1153,115,0xEA};
        struct S0 ***l_2865[3];
        int i;
                                            for (; i < 3; i++)
            l_2865[i] = &g_465;
                                           int32_t BHbHbl_2818_f6 = (~(((~(((~(l_2818.f3)) | ((l_2818.f2 / l_2818.f0) / (l_2818.f1 | l_2818.f5))))) & (((-(l_2818.f6)) * ((-((g_27.f7 & g_210.f3))) * (~(g_80)))) / (~(g_210.f6))))));
uint32_t BHbHbcg_27_f7 = (-((((g_210.f6 * (g_27.f7 / BHbHbl_2818_f6)) ^ (l_2818.f1 * (~((-((((~(g_210.f3)) | ((l_2818.f5 * l_2818.f3) / l_2818.f6)) ^ (~(l_2818.f2))))))))) & (~((~(g_80)))))));
int32_t BHbHbdl_2818_f2 = (~((((((~((((uint32_t)1) / l_2818.f1))) * (-(l_2818.f2))) << (-((~(l_2818.f0))))) * (((~(((~(g_27.f7)) ^ (~(g_80))))) * l_2818.f3) / g_210.f3)) ^ (~((~((~((-((BHbHbl_2818_f6 & l_2818.f5))))))))))));
                               if((g_210.f6 && (l_2818.f3 > l_2818.f0))){
BHbHbcg_27_f7 = g_27.f7;
BHbHbdl_2818_f2 = l_2818.f2;
if((BHbHbcg_27_f7<352U)){
if (BHbHbcg_27_f7)
                break;
                    g_27.f7 = (~(((~(BHbHbcg_27_f7)) >> ((~((g_80 >> g_210.f6))) & (~(((l_2818.f3 << (((~((((uint32_t)1) << l_2818.f0))) >> (~((g_27.f7 << l_2818.f5)))) * BHbHbl_2818_f6)) * (-((-(BHbHbdl_2818_f2)))))))))));
}
}
l_2818.f2 = BHbHbdl_2818_f2;
                                                   int32_t Brcrcl_2818_f2 = (~(((~(((-((l_2818.f0 + (~(g_27.f7))))) >> l_2818.f5))) - (-(((~(l_2818.f6)) ^ (~(((((l_2818.f4 - g_210.f3) * l_2818.f3) + (g_210.f6 - g_27.f5)) && l_2818.f2)))))))));
int32_t Brcrcbl_2818_f6 = (~((((~((~((-((l_2818.f6 || l_2818.f0))))))) | (~(((~(l_2818.f4)) | (Brcrcl_2818_f2 ^ l_2818.f5))))) * (g_210.f3 * ((l_2818.f2 ^ (l_2818.f3 | g_27.f5)) * g_27.f7)))));
int8_t Brcrccg_27_f5 = (-(((((-(((g_210.f3 - (~(l_2818.f6))) + (g_27.f5 * l_2818.f5)))) && l_2818.f3) & Brcrcbl_2818_f6) | ((-(((l_2818.f4 || g_210.f6) && l_2818.f2))) - (~(Brcrcl_2818_f2))))));
g_27.f5 = Brcrccg_27_f5;
};
                                       }
int main ( )
{
    func_1();
    }