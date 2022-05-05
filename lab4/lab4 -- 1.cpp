#include <stdio.h>

int main() {
	int n;
	printf("Onoo oruul:\n");
	scanf("%d",&n);
	if(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0))
		printf("Ondor jil");
	else printf("Ondor jil bish");
	
	return 0;
	
}

