#include <stdio.h>

int main() {
	int a, b, c, d;
	printf("a,b toog og:\n");
	scanf("%d%d",&a,&b);
	d = (a < b) * a + (a >= b) * b;
	c = (a > b) * a + (a <= b) * b;
	
	printf("a,b toonii baga: %d ih: %d",d,c);
	return 0;
	
}

