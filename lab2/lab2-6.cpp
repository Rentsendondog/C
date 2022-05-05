#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c, d, x, k, y;
	scanf("%f%f%f%f",&a,&b,&c,&d);
	x = a + b;
	x = x * x;
	x = x + d;
	k = sqrt(x);
	y = k / c;
	printf("hariu: %.2f",y);
	return 0;
	
	
}
