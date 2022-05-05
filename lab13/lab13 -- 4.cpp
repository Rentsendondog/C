#include <stdio.h>

void swap(int *a, int *b);
int main ()
{
    int x = 10 , y = 2;
    swap(&x, &y);
    printf("\n%d %d\n", x, y); // ?
    return 0;
}

void swap(int *a, int *b)
{
	int *tmp;
	
	 tmp = a;
	 a = b;
	 b = tmp;
	 printf("%d %d\n", *a, *b);
}
