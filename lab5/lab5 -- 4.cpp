#include <stdio.h>

int main() {
	int i, n, sum;
	printf("n = ");
	scanf("%d",&n);
	sum = 0;
	for(i = 1; i <= n; i++)
	{
		if(i % 2 == 0)
		{
			sum = sum + i;
		}
	}
	printf("sum : %d",sum);
	return 0;
}
