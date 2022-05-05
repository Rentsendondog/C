#include <stdio.h>

int main() {
	int i, n;
	printf("n = ");
	scanf("%d",&n);
	printf("n toonii huvaagchid:\n");
	for(i = 1; i <= n/2; i++)
	{
		if(n % i == 0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
