#include <stdio.h>

int main() {
	int n, m, i, j;
	printf("n = ");
	scanf("%d",&n);
	printf("m = ");
	scanf("%d",&m);
	int a[n][m];
	for(i = 0; i < n+1; i++)
	{
		for(j = 0; j < m; j++)
		{
			a[i][j] = i+1;
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
