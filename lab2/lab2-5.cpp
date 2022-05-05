#include <stdio.h>

int main() {
	int a, b, c, d, s, r;
	float q;
	scanf("%d%d",&a,&b);
	c = a + b;
	d = a - b;
	s = a * b;
	q = (float)a / b;
	r = a % b;
	printf("%d + %d = %d\n",a,b,c);
	printf("%d - %d = %d\n",a,b,d);
	printf("%d * %d = %d\n",a,b,s);
	printf("%d / %d = %.2f\n",a,b,q);
	printf("%d %% %d = %d\n",a,b,r);
	return 0;
	
}
