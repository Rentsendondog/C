#include <stdio.h>

int min(int a, int b);
int min5(int, int, int, int, int);

int main()
{
	int a, b, c, d, e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf("hamgiin baga too: %d",min5(a, b, c, d, e));	
}

int min(int a, int b)
{
	if(a < b)
	   return a;
	   
	return b;
}

int min5(int a, int b, int c, int d, int e)
{
	int x, y, z, p;
//  min((min(min(a, b), c), d),e);
   x = min(a, b);
   y = min(x, c);
   z = min(y, d);
   p = min(z, e);
   
   return p;
  		
}
