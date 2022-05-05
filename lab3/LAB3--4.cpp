#include <stdio.h>

int main() {
	int a=1, b=0, c=0, d=1, e=0, f=0;
	a || printf("o") && c;
	c && d || printf("x1 ");
	(d || b) && f || printf("x2 ");
	a + b == 1 && printf("x3 ");
	f && printf("o");
	b && d || printf("o");
	b + d == 3 && printf("o");
	
	return 0;
}
