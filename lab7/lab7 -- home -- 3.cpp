#include <stdio.h>
#include <math.h>

int main() {
	int i, j , p , n, m, k, sum, x;
	printf("n = ");
	scanf("%d",&n);
	printf("m = ");
	scanf("%d",&m);
	printf("k = ");
	scanf("%d",&k);
	int a[n][m], b[m][k], c[n][k];
	printf("\n %dx%d hemjeetei a matrixiin elementuudiig oruul:\n\n",n,m);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		    scanf("%d",&a[i][j]);
	}
	printf("\n %dx%d hemjeetei b matrixiin elementuudiig oruul:\n\n",m,k);
	for(j = 0; j < m; j++)
	{
		for(p = 0; p < k; p++)
		    scanf("%d",&b[j][p]);
		
	}
	for(i = 0; i < n; i++)
	{
		
		for(p = 0; p < k; p++)
		{
			sum = 0;
			for(j = 0; j < m; j++)
			{
				sum += a[i][j] * b[j][p];		
			}
			c[i][p] = sum;		
		}	
	}
	printf("nxk hemjeetei c matrixiin elementuud:\n\n");
	for(i = 0; i < n; i++)
	{
		for(p = 0; p < k; p++)
		{
			printf(" %d ",c[i][p]);
		}
		printf("\n");
	}
	
	return 0;
}
