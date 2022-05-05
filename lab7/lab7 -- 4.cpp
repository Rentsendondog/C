#include <stdio.h>

int main() {
	int n, m, i, j, p, max, col;
	printf("a husnegtiin moriin toog og:\n");
	scanf("%d",&n);
	printf("a husnegtiin baganiin toog og:\n");
	scanf("%d",&m);
	int a[n][m];
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		    scanf("%d",&a[i][j]);
	}
	max = 0;
	for(j = 0; j < m; j++)
	{
		p = 0;
		for(i = 0; i < n; i++)
		{
			if(a[i][j] % 2 == 0)
			{
				p++;
			}
		}
		if(max < p)
		{
			max = p;
			col = j;
		}
	}
	printf("tegsh too: %d\n hamgiin olon tegsh too aguulsan bagana: %d",max,col);
	return 0;
}
