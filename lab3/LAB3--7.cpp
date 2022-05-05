#include <stdio.h>

int main() {
	int n;
	printf("n toog og:\n");
	scanf("%d",&n);
	n >= 0 && n <= 9 && printf("1 orontoi\n");
	n >= 10 && n <= 99 && printf("2 orontoi\n");
	n >= 100 && n <= 999 && printf("3 orontoi\n");
	n >= 1000 && n <= 9999 && printf("4 orontoi\n");
	n >= 10000 && n <= 99999 && printf("5 orontoi\n");
	n >= 100000 && n <= 999999 && printf("6 orontoi\n");
	n >= 1000000 && n <= 9999999 && printf("7 orontoi\n");
	n >= 10000000 && n <= 99999999 && printf("8 orontoi\n");
	n >= 100000000 && n <= 999999999 && printf("9 orontoi\n");
	return 0;
}
