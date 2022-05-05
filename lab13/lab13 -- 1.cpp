#include <stdio.h>

int main ()
{
    int x;
   // Utga onoox uildel ....
    int *p;
    p = &x;
    *p = 12;
    printf ("%d\n", x);
    return 0;
}
