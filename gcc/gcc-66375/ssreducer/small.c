
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long int uint64_t;
int printf (const char *, ...);

static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1  )
{
 
  return






    (si1 + ((int8_t)1));
}

static int8_t
(safe_rshift_func_int8_t_s_s)(int8_t left, int right )
{
 
  return

    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :

    (left >> ((int)right));
}



static int16_t
(safe_add_func_int16_t_s_s)( int16_t si2 )
{
 
  return






    (((int16_t)1) + si2);
}

static int16_t
(safe_sub_func_int16_t_s_s)(int16_t si1  )
{
 
  return






    (si1 - ((int16_t)1));
}



static int32_t
(safe_mod_func_int32_t_s_s)( int32_t si2 )
{
 
  return

    ((si2 == 0) || ((((int32_t)1) == (-2147483647-1)) && (si2 == (-1)))) ?
    ((((int32_t)1))) :

    (((int32_t)1) % si2);
}







static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1  )
{
 
  return ui1 - ((uint16_t)1);
}

static uint16_t
(safe_rshift_func_uint16_t_u_s)(uint16_t left  )
{
 
  return

    ((((int)((int)1)) < 0) || (((int)((int)1)) >= 32)) ?
    ((left)) :

    (left >> ((int)((int)1)));
}



static uint32_t
(safe_add_func_uint32_t_u_u)(uint32_t ui1  )
{
 
  return ui1 + ((uint32_t)1);
}




static uint64_t
(safe_add_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}

static uint64_t
(safe_mod_func_uint64_t_u_u)(uint64_t ui1, uint64_t ui2 )
{
 
  return

    (ui2 == 0) ?
    ((ui1)) :

    (ui1 % ui2);
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
 crc32_byte ((val>>8) & 0xff);
 }

static void
transparent_crc (uint64_t val, char* vname )
{
 crc32_8bytes(val);
 if (((int)1)) {
    printf("...checksum after hashing %s : %lX\n", vname, crc32_context ^ 0xFFFFFFFFUL);
 }
}



static int8_t g_151 = 0x15L;
static uint64_t g_163 = 9UL;
static uint64_t g_1729[1][4] = {{18446744073709551614UL, 18446744073709551614UL, 18446744073709551614UL, 18446744073709551614UL}};
static uint32_t g_2151 = 0UL;



static int16_t func_1();
static int16_t func_7(void *** p_8   );
static uint8_t func_12( int32_t p_14);
static int32_t func_17( int32_t p_19 );
static uint64_t func_22(    int32_t p_27);
static int32_t func_32(   int32_t p_36);
static int16_t func_1()
{
    ((safe_add_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(func_7((((func_12( ((int8_t)1)) < 255UL) || (((((void ***)1)) == ((uint8_t)1)) > (safe_sub_func_uint16_t_u_u((((int16_t)1)) )))) < ((int8_t)1))   ) )) )) | 1UL);
    }







static int16_t func_7(void *** p_8   )
{
    return ((uint32_t)1);
}







static uint8_t func_12( int32_t p_14)
{
    func_17( ((+((func_22(    ((uint32_t)1)) >= 0L) == (((p_14 <= 18446744073709551615UL) , ((int8_t)1))))) <= ((uint32_t)1)) );

return ((int8_t)1);
}







static int32_t func_17( int32_t p_19 )
{}







static uint64_t func_22(    int32_t p_27)
{

for (p_27 = 15; (p_27 >= 6); --p_27)
    {
        func_32(   ((uint32_t)1));
    }
    return ((uint32_t)1);
}







static int32_t func_32(   int32_t p_36)
{
    uint16_t l_2123[7][4] = {{2UL, 0xC7BEL, 0x4742L, 0xF2F2L}, {2UL, 0xC7BEL, 0x4742L, 0xF2F2L}, {2UL, 0xC7BEL, 0x4742L, 0xF2F2L}, {2UL, 0xC7BEL, 0x4742L, 0xF2F2L}, {2UL, 0xC7BEL, 0x4742L, 0xF2F2L}, {2UL, 0xC7BEL, 0x4742L, 0xF2F2L}, {2UL, 0xC7BEL, 0x4742L, 0xF2F2L}};
    int32_t l_2124 = (-2L);

for (; (g_151 != (-8)); g_151 = safe_sub_func_uint16_t_u_u(g_151 ))
    {
        p_36 = ((safe_sub_func_int16_t_s_s((((uint16_t)1) | (safe_add_func_int8_t_s_s((((((int32_t)1) < ((uint16_t)1))) != (l_2124 = (((((((volatile uint64_t)1) > 0x9CDD1424802716C9LL) , (((int16_t)1))) , (l_2123[3][2] | 0x9C84125F2A8981A3LL)) > 6UL) != ((int32_t)1)))) ))) )) , l_2123[3][2]);
        for (; (g_163 < 51); ++g_163)
        {
            uint64_t l_2150[9];
            int i;
            for (i = 0; i < 9; i++)
                l_2150[i] = 0x9EE7F9D1C772505BLL;
            ((safe_rshift_func_uint16_t_u_s(((((int16_t)1) >= (safe_mod_func_int32_t_s_s( (((((l_2124 = (safe_add_func_uint64_t_u_u((safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((g_1729[0][3] = (safe_add_func_int16_t_s_s( l_2124))), g_2151)), l_2123[3][3])), l_2150[0])))) , p_36) | ((uint32_t)1)) , 0xD1403C4BL)))) , ((uint32_t)1)) )) != ((int8_t)1));
        }
    }
    }







int main ()
{
    int i, j, k;
    crc32_gentab();
    func_1();

for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(((uint16_t)1), "g_28[i][j]" );

        }
    }

for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1729[i][j], "g_1729[i][j]" );

        }
    }
    if (( ((volatile void ***)1) < 1290384964113678058) )
{

{
                transparent_crc(((int32_t)1), "g_482[g_93][g_93][j]" );
                if (((int32_t)1)) printf("index = [%d][%d][%d]\n", ((int32_t)1), ((int32_t)1), j);

            }

}

transparent_crc(((volatile void ***)1), "g_2201" );
    }
