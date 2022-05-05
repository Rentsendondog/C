#include <stdio.h>

//int t = 1;
int power(int a, int b);
int main () {
    int n, a;
    // a, b- iin utgiig hereglegchees unshina
    scanf("%d%d",&a,&n);
    // a- iin n zergiig bodoh
    printf("%d\n",power(a, n));
    // dahin 2 buhel too unshina
    scanf("%d%d",&a,&n);
    // ahiad tednii zergiig olno
    printf("%d\n",power(a, n));
    return 0;
}
int power(int a, int b)
{
     int i, t = 1;
     for (i = 1; i <= b; i++)
     t *= a;
//     t = t * a;
     
     return t;
}
