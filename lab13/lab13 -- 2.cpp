#include <stdio.h>

void even(int n, int *p)
{
     if(n % 2 == 0)
        *p = 1;
     else 
        *p = 0;
}

int main ()
{
    int x, n;
    printf("n = ");
    scanf("%d",&n);
    even(n, &x);
    if(x == 1)
        printf("tegsh\n");
    else
        printf("sondgoi\n");
    return 0;
}

