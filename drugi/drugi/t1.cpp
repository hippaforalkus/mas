#include <iostream>
int ciag( int n )
{
 int tab[n];
tab[1]=1;
tab[2]=1;
if (n>2)
    for (int a=3;a<=
    n;a++)
        {
            tab[a]=tab[a-1]+tab[a-2];
        }
    return( tab[n] );
}
