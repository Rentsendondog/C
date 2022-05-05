#include <stdio.h>

int main(){
	int n, m, i, j, x, k;
	printf("a husnegtiin hemjeesuudig og:\n");
	scanf("%d%d",&n,&m);
	int a[n][m];
	printf("a husnegtiin elementuudiig oruul:\n");
	for(i =0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		    scanf("%d",&a[i][j]);
	}
	printf("x iig og:\n");
	scanf("%d",&x);
	for(i =0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		    if(a[i][j] == x)
		    {
		      k++;
			   printf("bairlal :%d -r mor %d -r bagana\n",i,j);
			}
	}
	if(k == 0)
	   printf("-1");
	
	return 0;
	
}
