#include <stdio.h>

int main() {
	int a, b, c, d, n;
	printf(" 4 orontoi n toog og:\n");
	scanf("%d",&n);
	a = n / 1000;
	b = n / 100 % 10;
	c = n / 10 % 10;
	d = n % 10;
	if(a == d && b == c) {
		printf("1 aziin too\n");
	}   
	else {
		printf(" 0 aziin too bish\n");
	}
	
	return 0;
	
}
