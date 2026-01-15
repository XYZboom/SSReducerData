
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef long long int int64_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
int printf (const char *, ...);
static void
platform_main_end(uint32_t crc )
{





 printf ("checksum = %X\n", crc);
}

static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1, int8_t si2 )
{

  return






    (si1 + si2);
}

static int8_t
(safe_lshift_func_int8_t_s_s)(int8_t left  )
{

  return

    ((left < 0) || (((int)((int)1)) < 0) || (((int)((int)1)) >= 32) || (left > ((127) >> ((int)((int)1))))) ?
    ((left)) :

    (left << ((int)((int)1)));
}

static int8_t
(safe_rshift_func_int8_t_s_u)(int8_t left  )
{

  return

    ((left < 0) || (((unsigned int)((unsigned int)1)) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)((unsigned int)1)));
}



static int16_t
(safe_mod_func_int16_t_s_s)(int16_t si1  )
{

  return

    ((((int16_t)1) == 0) || ((si1 == (-32767-1)) && (((int16_t)1) == (-1)))) ?
    ((si1)) :

    (si1 % ((int16_t)1));
}

static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left  )
{

  return

    ((left < 0) || (((int)((int)1)) < 0) || (((int)((int)1)) >= 32) || (left > ((32767) >> ((int)((int)1))))) ?
    ((left)) :

    (left << ((int)((int)1)));
}

static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left  )
{

  return

    ((left < 0) || (((unsigned int)((unsigned int)1)) >= 32)) ?
    ((left)) :

    (left >> ((unsigned int)((unsigned int)1)));
}



static int32_t
(safe_add_func_int32_t_s_s)(int32_t si1  )
{

  return


    (((si1>0) && (((int32_t)1)>0) && (si1 > ((2147483647)-((int32_t)1)))) || ((si1<0) && (((int32_t)1)<0) && (si1 < ((-2147483647-1)-((int32_t)1))))) ?
    ((si1)) :


    (si1 + ((int32_t)1));
}

static int32_t
(safe_sub_func_int32_t_s_s)(int32_t si1, int32_t si2 )
{

  return


    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :


    (si1 - si2);
}




static int64_t
(safe_sub_func_int64_t_s_s)( int64_t si2 )
{

  return


    (((((int64_t)1)^si2) & (((((int64_t)1) ^ ((((int64_t)1)^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((((int64_t)1))) :


    (((int64_t)1) - si2);
}







static uint8_t
(safe_add_func_uint8_t_u_u)(uint8_t ui1  )
{

  return ui1 + ((uint8_t)1);
}

static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1, uint8_t ui2 )
{

  return ui1 - ui2;
}

static uint8_t
(safe_lshift_func_uint8_t_u_s)(uint8_t left  )
{

  return

    ((((int)((int)1)) < 0) || (((int)((int)1)) >= 32) || (left > ((255) >> ((int)((int)1))))) ?
    ((left)) :

    (left << ((int)((int)1)));
}

static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left  )
{

  return

    (((unsigned int)((unsigned int)1)) >= 32) ?
    ((left)) :

    (left >> ((unsigned int)((unsigned int)1)));
}



static uint16_t
(safe_add_func_uint16_t_u_u)(uint16_t ui1  )
{

  return ui1 + ((uint16_t)1);
}

static uint16_t
(safe_mod_func_uint16_t_u_u)( uint16_t ui2 )
{

  return

    (ui2 == 0) ?
    ((((uint16_t)1))) :

    (((uint16_t)1) % ui2);
}

static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left  )
{

  return

    ((((int)((int)1)) < 0) || (((int)((int)1)) >= 32) || (left > ((65535) >> ((int)((int)1))))) ?
    ((left)) :

    (left << ((int)((int)1)));
}

static uint16_t
(safe_rshift_func_uint16_t_u_s)( int right )
{

  return

    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((((uint16_t)1))) :

    (((uint16_t)1) >> ((int)right));
}



static uint32_t
(safe_add_func_uint32_t_u_u)( uint32_t ui2 )
{

  return ((uint32_t)1) + ui2;
}

static uint32_t
(safe_sub_func_uint32_t_u_u)( uint32_t ui2 )
{

  return ((uint32_t)1) - ui2;
}




static uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1  )
{

  return ui1 + ((uint64_t)1);
}




static uint32_t crc32_tab[256];
static uint32_t crc32_context = 0xFFFFFFFFUL;

static void
crc32_gentab ()
{
 uint32_t crc;
 int i, j;

 for (i = 0; i < 256; i++) {
  crc = i;
  crc32_tab[i] = crc;
 }
}

static void
crc32_byte (uint8_t b) {
 crc32_context =
  ((crc32_context >> 8) & 0x00FFFFFF) ^
  crc32_tab[(crc32_context ^ b) & 0xFF];
}
static void
crc32_8bytes (uint64_t val)
{
 crc32_byte ((val>>0) & 0xff);
 }

static void
transparent_crc (uint64_t val  )
{
 crc32_8bytes(val);
 }



static int32_t g_3 = 0xB2006887L;
static uint32_t g_139 = 0x79D400EAL;
static uint32_t g_164 = 0x125FC94FL;
static int32_t g_177 = 0x1CE45A5EL;
static int16_t g_329[4] = {0L,0L,0L,0L};
static int16_t g_877 = 1L;
static int16_t g_977 = 1L;

inline static int32_t func_1();
inline static int8_t func_11(uint8_t p_12);
inline static uint8_t func_13(uint64_t p_14, uint16_t p_15);
static int32_t func_18( int16_t p_20 );
static uint8_t func_26(   const uint16_t p_30);
static int16_t func_39(int32_t p_40, int32_t p_41   );
inline static int32_t func_45(int32_t p_46, uint8_t p_47, uint32_t p_48, const int16_t p_49, int16_t p_50);
inline static uint64_t func_55(int8_t p_56);
static uint8_t func_62(int32_t p_63);






inline static int32_t func_1()
{
    for (g_3 = 3; (g_3 >= 0); g_3 -= 1)
    {
        ((safe_add_func_int32_t_s_s(((((safe_lshift_func_uint8_t_u_s((((uint8_t)1) , ((((safe_rshift_func_int8_t_s_u(((func_11(func_13((safe_sub_func_int32_t_s_s(func_18( ((uint16_t)1) ), (!0xB607800FL))), g_3)) & 252UL) < 7UL) ))) ^ ((int32_t)1)) && ((int64_t)1))) )) < ((uint8_t)1)) & 8L) , (-4L)) )) <= ((int32_t)1));
        }





    return ((uint16_t)1);
}





inline static int8_t func_11(uint8_t p_12)
{
    return ((int32_t)1);
}





inline static uint8_t func_13(uint64_t p_14, uint16_t p_15)
{
    for (; (((uint32_t)1) <= 4); )
    {
        (((((uint8_t)1) & (g_3 < (((func_26(   ((uint32_t)1)) ^ 0xA8L) , p_15) ^ 18446744073709551615UL)))) | ((uint32_t)1));
        for (; (((uint64_t)1) <= 4); )
        {
            return ((uint32_t)1);
        };
    };




}





static int32_t func_18( int16_t p_20 )
{
    return g_3;
}





static uint8_t func_26(   const uint16_t p_30)
{
    lbl_1595:
    ((~((safe_mod_func_uint16_t_u_u( func_39((func_45(func_18( (safe_add_func_uint8_t_u_u((((safe_add_func_uint64_t_u_u(func_55(((((255UL <= ((0UL) , 1UL)) , (((int8_t)1))) != ((uint32_t)1)) <= ((uint32_t)1))) )) <= ((int64_t)1)) & ((int64_t)1)) )) ), ((int32_t)1), ((int64_t)1), ((uint32_t)1), ((uint8_t)1))), ((int64_t)1)   ))) >= ((uint32_t)1))) <= ((uint32_t)1));
    return ((uint16_t)1);
}





static int16_t func_39(int32_t p_40, int32_t p_41   )
{
    for (g_177 = 0; (g_177 <= 3); g_177 += 1)
    {
        int32_t l_1166 = 0L;
        for (; (((int16_t)1) >= 0); )
        {
            if (((((((65527UL >= (((((g_329[((int16_t)1)] = 0x0964L) > (0x896AL <= (((uint8_t)1)))) & g_877) < ((int16_t)1)) != ((int32_t)1))) , ((int32_t)1)) > ((int64_t)1)))) | ((int64_t)1)))
            {
                (p_41 = (0xB515D37B249F97A6LL ^ ((safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u( g_877)) )) || (safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((!((l_1166 = g_329[((int16_t)1)]) == 0x294A85636008822DLL)), (safe_add_func_uint32_t_u_u( g_139)))) | 3UL) ))) )) )) )) )))));
                if (g_977)
                {
                    if ((+((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s( (safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u( l_1166)), 0xECL)))), p_41)) & 1UL)))
                    {
                        return ((uint8_t)1);
                    }
                    else
                    {






{
                        if (((int8_t)1))
                            break;
                    }
                        }
                }
                else
                {
{






{







{
            for (; (l_1166 != 24); )
            {
                if (((((((int16_t)1))) < (-8L))))
                {
                    }
                else
                {
                    ((((((-3L) ^ (p_41 = ((safe_mod_func_int16_t_s_s((g_877 = (safe_rshift_func_uint16_t_u_s( 10))) )) < ((int32_t)1)))) & ((uint32_t)1))) , ((uint64_t)1)) || ((uint64_t)1));
                    }
                (safe_lshift_func_int8_t_s_s((((((uint32_t)1)) | (((safe_rshift_func_uint16_t_u_s( ((int32_t)1))) , ((safe_add_func_uint64_t_u_u(((((int32_t)1) || ((uint32_t)1)) == ((int64_t)1)) )) , 0L)) > 0x9AL)) , 0x71L) ));
                };
            }
                        }



}







                }




            }
            else;





        };
    }

    return ((int32_t)1);
}





inline static int32_t func_45(int32_t p_46, uint8_t p_47, uint32_t p_48, const int16_t p_49, int16_t p_50)
{
    for (; (((int64_t)1) != (-13)); )
    {
        return ((int64_t)1);
    };


}





inline static uint64_t func_55(int8_t p_56)
{
    (0x3DL && (func_62(((uint32_t)1)) <= ((uint32_t)1)));
    return ((uint16_t)1);
}





static uint8_t func_62(int32_t p_63)
{
    for (; (((int8_t)1) <= 3); )
    {
        for (g_164 = 0; (g_164 <= 3); g_164 += 1)
        {
            for (g_139 = 0; (g_139 <= 3); g_139 += 1);
            }
        if (((int32_t)1))
            break;
    };
    for (; (g_977 <= 4); ++g_977);
    return p_63;
}





int main ( )
{
    crc32_gentab();
    func_1();
    transparent_crc(g_177  );
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL );
    return 0;
}
