#include <stdio.h>

int main() {
	int n, i;
	printf("n = ");
	scanf("%d",&n);
	i = 0;
	do 
	{
		printf("%d ",i);
		i++;
	} while (i <= n);
	printf("\n");
	return 0;
}
