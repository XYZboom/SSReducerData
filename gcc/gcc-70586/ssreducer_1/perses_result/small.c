        unsigned
                               c
                ;signed
            d
                ;
                 typedef short     t      ;
typedef int i      ;
        unsigned
 a                        (
        signed
                                  t  ,
        unsigned
                                              i   )
{
  return
     i   + t   ;
}
       i
 f                           (t      a   , unsigned     i     )
{
  return
     a    <<                i      ;
}
       i
 m                         (i       t  , i       i   )
{
  return
      i   == 0  ||   t                       &&  i              ?
      t     :
     t   % i   ;
}
       t        y     = 1          ;
        signed
                u
               [
                      1
                         ];
        unsigned
               j     [1]                                                          ;
static
        unsigned
                x     (t          );
static
        signed
               q     ()
{
    if (
                u
       [
                                                              0
                 ]
                                                                    = x     (           0 )                                  );
}
        unsigned
                x     (t       s  )
{
                                                                                                                        d    =                             m                        (          c   , s  )                                                                            ;
    if (y    )
    {
        i        c                   ;
                                                 c      = 0
       ;for ( ;
                                                              c      <= 10
                 ;
                                                                             c      = a                         (c     , 2)
                           )  {
                i        c                   ;
                if ( f                          ( s              ,                                                                                                                                                               1
             -
                                                                                                                                                                                                                                           s     ||                                                                                                     m                        (                                            y               , 1          )                                                                                                                                       ) )
                                                                                                                                                                            ;
                else
                {
        signed
         a            =                                                                       d                                                                                                                                                                                                                 ;
c      =                   a                                                                                                                                                                                                                                                                                              ;
}
                                                                                                                                                                                    s   =  a                         (                               1           >=  m                        (   m                        (           0                                                                                    , s  )  > 0            , s  )   != s    ^ 2                                         , c     )                                                                                                                                                                                                                                   ;
                                                                                                                                                                                                                                                                                                                                        c    =                                                                  m                        (           0  , j     [0])                                                                                                                                                                                           ;
                                        }
    }
    else
                u
       [
                                                                                     0
                 ]
                                                                                           =                                                                                                                                                                     m                        (                                                        m                        (j     [0], c    )              , 1          )                                                                                                                     ;
                    return s  ;
}
int main (                      )
{
    q     ();
    }
