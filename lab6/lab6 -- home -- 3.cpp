#include <stdio.h>

int main() {
	int m, k, n, i, j, p, toot;  //m -- ail, k -- orts, n -- davhar
	printf("orts: ");
	scanf("%d",&k);
	printf("davhar: ");
	scanf("%d",&n);
	printf("ail: ");
	scanf("%d",&m);
	int a[k][n][m];
	printf("\n");
	for(i = 1; i <= k; i++)
	{
		printf("%d - r orts:\n",i);
		toot = i * n * m;
		for(j = 1; j <= n; j++)
		{
			toot = toot - m + 1;
			for(p = 1; p <= m; p++)
			{
			    a[i][j][p] = toot;
			    printf("%2d ",a[i][j][p]);
			    toot++;
			}
			toot = toot - m - 1;
			printf("\n");
		}
		printf("\n");
	}
	
    return 0;
}
