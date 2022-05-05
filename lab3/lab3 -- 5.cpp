#include <stdio.h>

int main() {
	int a, b, c;
	printf("a,b,c toog og:");
	scanf("%d%d%d",&a,&b,&c);
	a >= b && a >= c && b >= c && printf("max: %d\nmid : %d\nmin : %d\n",a,b,c);
	a >= b && a >= c && b <= c && printf("max: %d\nmid : %d\nmin : %d\n",a,c,b);
	b >= a && b >= c && a >= c && printf("max: %d\nmid : %d\nmin : %d\n",b,a,c);
	b >= a && b >= c && c >= a && printf("max: %d\nmid : %d\nmin : %d\n",b,c,a);
	c >= a && c >= b && a >= b && printf("max: %d\nmid : %d\nmin : %d\n",c,a,b);
	c >= a && c >= b && b >= a && printf("max: %d\nmid : %d\nmin : %d\n",c,b,a);
	
	return 0;
	
}
