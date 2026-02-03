


typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
typedef unsigned int uint32_t;


static int8_t
(safe_add_func_int8_t_s_s)(int8_t si1  )
{
 
  return
    (si1 + ((int8_t)1));
}
static int8_t
(safe_sub_func_int8_t_s_s)(int8_t si1  )
{}
static int8_t
(safe_mod_func_int8_t_s_s)( int8_t si2 )
{
 
  return
    ((si2 == 0) || ((((int8_t)1) == (-128)) && (si2 == (-1)))) ?
    ((((int8_t)1))) :
    (((int8_t)1) % si2);
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
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1  )
{
 
  return ui1 - ((uint8_t)1);
}
static uint16_t
(safe_mul_func_uint16_t_u_u)( uint16_t ui2 )
{
 
  return ((unsigned int)((uint16_t)1)) * ((unsigned int)ui2);
}
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
(safe_rshift_func_uint16_t_u_u)(uint16_t left  )
{
 
  return
    (((unsigned int)((unsigned int)1)) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)((unsigned int)1)));
}
static uint32_t
(safe_mod_func_uint32_t_u_u)(uint32_t ui1  )
{
 
  return
    (((uint32_t)1) == 0) ?
    ((ui1)) :
    (ui1 % ((uint32_t)1));
}
static
  int8_t
  g_7
  =
  (-6L);
static
  int32_t
  g_21
  =
  0L;
static
  uint8_t
  g_176
  =
  0x44L;
static
  int8_t
  g_181
  =
  0L;
static
  uint16_t
func_1
();
static
  int32_t
func_2
(
uint8_t
p_4
);
static
  uint16_t
func_22
(
int8_t
p_24
,
int8_t
p_26
);
static
  const
  uint8_t
func_30
(int16_t
p_31
);
static
  int16_t
func_33
(uint16_t
p_34
);
static
  uint16_t
func_39
(int8_t
p_40
);
static uint16_t
func_1 ()
{
  if (((!(~(func_2 ( g_7 ) < ((((0xB8B13202L < ((int32_t)1)) ^ ((0x498EL != (((int8_t)1))) < ((int16_t)1)))) == 0xBBEAEAA1L)))) >= 0xE521L))
  {
    }
  else;
  g_21
    =
    ((((int32_t)1) < ((const int32_t)1)) || (((((int8_t)1) < (((uint32_t)1) | (((safe_mod_func_uint32_t_u_u ((safe_rshift_func_uint16_t_u_u (((g_181 = (((uint32_t)1) == ((((!((((uint16_t)1) != ((((int8_t)1)) || 0x5850L)) >= ((int8_t)1))) == 4294967290UL) > ((int16_t)1)) & ((uint32_t)1)))) & ((uint32_t)1)) )) ))) && ((int8_t)1))))) || 0xC351L));
  return
    ((int32_t)1);
}
static int32_t
func_2
  (
   uint8_t
   p_4
   )
{
  uint32_t
    l_8
    =
    0x4F147909L;
  lbl_988:
  l_8 = g_7;
  for
    (p_4
     =
     (-8);
     (p_4
      >=
      53);
     )
  {
    g_21
      =
      (safe_mul_func_uint16_t_u_u
       ( (safe_mul_func_uint16_t_u_u ( (safe_rshift_func_int16_t_s_u (g_7 ))))));
    if ((func_22 ( (((1L & l_8) || ((((safe_sub_func_uint8_t_u_u (func_30 (func_33 ((safe_lshift_func_uint16_t_u_u (65535UL, (func_39 (((((uint16_t)1) ^ 4UL) & g_181)))))  ) ) )) && ((uint16_t)1)) && l_8) >= p_4)) & 0L) , l_8 ) && 0xBE6DL))
    {
      return
 ((uint8_t)1);
    }
    else;
  };
  return
    p_4;
}
static uint16_t
func_22
  (
   int8_t
   p_24
   ,
   int8_t
   p_26
   )
{
  ((((int32_t)1)) || (((const uint32_t)1) && ((g_176 < (((((int32_t)1) <= 0x3306L) > ((((int16_t)1) | (((int16_t)1))) <= ((int32_t)1))))) ^ 0xD0EB130EL)));
  return
    p_26;
}
static const uint8_t
func_30
  (int16_t
   p_31
   )
{
  g_21
    =
    0x2D84DA33L;
  return
    ((int32_t)1);
}
static int16_t
func_33
  (uint16_t
   p_34
   )
{
  return
    p_34;
}
static uint16_t
func_39
  (int8_t
   p_40
)
{
  for
    (g_176
     =
     0;
     (g_176
      <
      12);
     g_176
     =
     safe_add_func_int32_t_s_s
     (g_176
      ))
  {
    int32_t
      l_220
      =
      0xFB97F931L;
    if ((0x4F92L < (safe_lshift_func_int16_t_s_s ((((p_40 != (safe_lshift_func_uint16_t_u_u ((p_40 != (((((int8_t)1)) | ((safe_add_func_int8_t_s_s (((((l_220 = (safe_mod_func_int8_t_s_s ( p_40))) == (-3L)) != p_40) ^ p_40) )) >= ((uint16_t)1))) <= (-10L))), ((int32_t)1)))) || 0x282EL) != ((int32_t)1)) ))))
    {
      }
    else
    {
      if ((p_40 <= ((!((!((int8_t)1)))) || (((int8_t)1)))))
      {
 g_21
      =
      ((safe_mod_func_uint32_t_u_u ((l_220 & ((0xB885A690L || ((((uint32_t)1) && ((0UL && (safe_sub_func_uint8_t_u_u (((safe_sub_func_int8_t_s_s (((((int32_t)1)) | p_40) )) ^ ((int32_t)1)) ))) ^ 0x1BDDL)) | p_40)) ^ 1L)) )) > ((uint32_t)1));
}
      else
      {
 if (p_40)
{{
      if (l_220)
 break;
      if (((uint16_t)1))
 continue;
      }
}
 if (((p_40 = (+(((int16_t)1)))) || ((int16_t)1)))
 {
   g_21
     =
     (safe_sub_func_int8_t_s_s
      (((((+((g_21 < p_40) > (g_7 = p_40)))) || 5UL)) ));
}
 else;
 }
    }
  }
  return
    ((uint32_t)1);
}
int
main
  (int
   argc,
   char
   *argv
   []
)
{
  func_1
    ();
  return
    0;
}
