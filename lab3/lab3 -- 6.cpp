#include <stdio.h>

int main() {
	int a, b, c;
	printf("Gurvaljinii taluudiig og:\n");
	scanf("%d%d%d",&a,&b,&c);
	a == b && b == c && printf("zov gurvaljin\n");
	a == b && b != c && printf("adil hajuut gurvaljin\n");
	a == c && c != b && printf("adil hajuut gurvaljin\n");
	b == c && c != a && printf("adil hajuut gurvaljin\n");
	a != b && b != c && a != c &&  printf("eldev talt gurvaljin\n");
	
	return 0;
	
	
}
