typedef signed      b     ;
       b        f             ;
struct b  {
   b       a ;
   signed b  : 1 ;
};
       struct b  c    [1]                       ;
        short
               j      = 1      ;
       b      i     ()
{
        struct b  b      = { 0 ,1  };
        for (f    = 0;            ; )
        {
                    for (;  j           ; j      += 1)
                        b      =   (c    [f   ] = b     )  ;
                    return           0 ;
        }
}
int main (                      )
{
    i     ();
 printf ("%X"             ,
                        c    [f].b
                               );
    return 0;
}
