#include <stdio.h>

int count(int n, int A[]);

int main()
{
	int m, k;
	int a[k];
	printf("m = ");
	scanf("%d",&m);
	k = count(m, a);

	for(int i = 0; i < k; i++)
	{
		printf("%d ",a[i]);
	}
	
	
	
}

int count(int n, int A[])
{
	int i, p = 0, j = 0;
	for(i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			A[j] = i;
			j++;
		}
	}
	
	return j;
}
