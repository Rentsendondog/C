#include <stdio.h>

int main() {
	int n, i, k, j;
	printf("n = ");
	scanf("%d",&n);
	int a[n][n];
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < n; j++)
		{
			if(i + j + 1 > n)
			{
				k = k - 1;
			}
			else
			{
				k = i + j + 1;
			}
			a[i][j] = k;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
