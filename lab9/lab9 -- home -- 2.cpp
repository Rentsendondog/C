#include <stdio.h>

int digit_sum(int n);

int main()
{
	int n, i, k, p;
	printf("n = ");
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		k = i;
		p = digit_sum(i);
		if(k % p == 0)
		   printf("%d ",i);
	}
}

int digit_sum(int n)
{
	int s = 0;
	while(n > 0)
	{
		s = s + n % 10;
		n = n / 10;
	}
	
	return s;
}
