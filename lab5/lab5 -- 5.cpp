#include <stdio.h>

int main() {
	int n, c;
	float f;
	printf("n = ");
	scanf("%d",&n);
	for(c = 0; c < (n - 32) / 1.8; c++)
	{
		f = 1.8 * c + 32;
		printf("%d %.1f\n",c,f);
	}
	return 0;
}
