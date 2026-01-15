


typedef signed char int8_t;
typedef short int int16_t;

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
{
 
  }
static int8_t
(safe_mul_func_int8_t_s_s)(int8_t si1  )
{
 
  }
static int8_t
(safe_mod_func_int8_t_s_s)( int8_t si2 )
{
 
  return
    ((si2 == 0) || ((((int8_t)1) == (-128)) && (si2 == (-1)))) ?
    ((((int8_t)1))) :
    (((int8_t)1) % si2);
}
static int8_t
(safe_rshift_func_int8_t_s_u)( unsigned int right )
{
 
  }
static int16_t
(safe_lshift_func_int16_t_s_s)(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
(safe_rshift_func_int16_t_s_u)(int16_t left  )
{
 
  return
    ((left < 0) || (((unsigned int)((unsigned int)1)) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)((unsigned int)1)));
}
static uint8_t
(safe_sub_func_uint8_t_u_u)(uint8_t ui1  )
{
 
  return ui1 - ((uint8_t)1);
}
static uint8_t
(safe_mul_func_uint8_t_u_u)(uint8_t ui1  )
{
 
  }
static uint8_t
(safe_rshift_func_uint8_t_u_u)(uint8_t left  )
{
 
  }
static uint16_t
(safe_sub_func_uint16_t_u_u)(uint16_t ui1  )
{
 
  }
static uint16_t
(safe_mul_func_uint16_t_u_u)(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
(safe_mod_func_uint16_t_u_u)(uint16_t ui1  )
{
 
  }
static uint16_t
(safe_lshift_func_uint16_t_u_s)(uint16_t left  )
{
 
  }
static uint16_t
(safe_lshift_func_uint16_t_u_u)(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static
  int8_t
  g_7
  =
  (-6L);
static
  void ***
  g_21
  =
  0L;
static
  uint32_t
  g_96
  =
  0x7709B807L;
static
  int8_t
  g_181
  =
  0L;
static
  int16_t
  g_245
  =
  (-5L);
static
  uint16_t
func_1
();
static
  void ***
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
static
  uint16_t
func_41
(void ***
p_42
);
static
  void ***
func_46
(uint32_t
p_47
);
static
  uint16_t
func_50
(
uint8_t
p_52
);
static uint16_t
func_1 ()
{
  if (((!(~(func_2 ( g_7 ) < ((((0xB8B13202L < ((void ***)1)) ^ ((0x498EL != (((int8_t)1))) < ((int16_t)1)))) == 0xBBEAEAA1L)))) >= 0xE521L))
  {
    }
  else;
  }
static void ***
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
       ((((uint8_t)1)), (safe_mul_func_uint16_t_u_u (p_4, (safe_rshift_func_int16_t_s_u (g_7 ))))));
    if ((func_22 ( (((1L & l_8) || ((((safe_sub_func_uint8_t_u_u (func_30 (func_33 ((safe_lshift_func_uint16_t_u_u (65535UL, (func_39 (((func_41 (func_46 (g_7)   ) ^ 4UL) & g_181)))))  ) ) )) && ((uint16_t)1)) && l_8) >= p_4)) & 0L) , l_8 ) && 0xBE6DL))
    {
      return
 ((uint8_t)1);
    }
    else;
  };
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
  return
    p_26;
}
static const uint8_t
func_30
  (int16_t
   p_31
   )
{
  return
    ((void ***)1);
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
    (0;
     (((uint8_t)1)
      <
      12);
     )
  {
    void ***
      l_220
      =
      0xFB97F931L;
    if ((0x4F92L < (safe_lshift_func_int16_t_s_s ((((p_40 != (safe_lshift_func_uint16_t_u_u ((p_40 != (((((int8_t)1)) | ((safe_add_func_int8_t_s_s (((((l_220 = (safe_mod_func_int8_t_s_s ( p_40))) == (-3L)) != p_40) ^ p_40) )) >= ((uint16_t)1))) <= (-10L))), ((void ***)1)))) || 0x282EL) != ((void ***)1)), 6))))
    {
      if ((0x4F92L < (safe_lshift_func_int16_t_s_s ((((p_40 != (safe_lshift_func_uint16_t_u_u ((p_40 != (((((int8_t)1)) | ((safe_add_func_int8_t_s_s (((((l_220 = (safe_mod_func_int8_t_s_s ( p_40))) == (-3L)) != p_40) ^ p_40) )) >= ((uint16_t)1))) <= (-10L))), ((void ***)1)))) || 0x282EL) != ((void ***)1)), 6))))
    {
      }
    else
    {
      if ((p_40 <= ((!((!((int8_t)1)))) || (((int8_t)1)))))
      {
 if ((safe_sub_func_uint16_t_u_u (((((((int16_t)1)) > 3UL) & 0x2FB1L)) )))
 {
   for
     (g_245
      =
      (-26);
      (g_245
       <
       (-30));
      )
   ;;
   }
 else;
      }
      else;
      if ((safe_rshift_func_uint8_t_u_u ((safe_mul_func_uint16_t_u_u (((safe_add_func_int8_t_s_s (((l_220 = (safe_mod_func_uint16_t_u_u ((safe_rshift_func_int8_t_s_u ( (0UL == (safe_add_func_int8_t_s_s ((((((uint32_t)1)) & (((((p_40 >= ((((safe_sub_func_uint16_t_u_u (((safe_mul_func_uint8_t_u_u (((~((p_40 < ((safe_mul_func_int8_t_s_s ((~(g_181 = ((uint32_t)1))) )) || (-1L))) | p_40))) ))) )) & ((uint32_t)1)) > 0xDFL) == (-10L))) < 3L) == 0L) < 1L) == p_40)) > 4294967295UL) ))))) ))) || 249UL) ))), 7UL)) )))
      {
 }
      else;
      }
      }
    else
    {
      if ((p_40 <= ((!((!((int8_t)1)))) || (((int8_t)1)))))
      {
 if (g_245)
   break;
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
  };
  return
    ((uint32_t)1);
}
static uint16_t
func_41
  (void ***
   p_42
   )
{
  return
    ((void ***)1);
}
static void ***
func_46
  (uint32_t
   p_47
)
{
  (safe_lshift_func_uint16_t_u_s
     (func_50
      (
       ((uint8_t)1)  ) ));
  return
    ((void ***)1);
}
static uint16_t
func_50
  (
   uint8_t
   p_52
   )
{
  for
    (g_96
     =
     (-23);
     (g_96
      <
      48);
     ++g_96);
  return
    ((void ***)1);
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
