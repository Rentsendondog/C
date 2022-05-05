#include <stdio.h>

int main() {
	int n, i, x, j;
	printf("n = ");
	scanf("%d",&n);
	int a[n];
	printf("toonuudiig oruul:\n");
	for(i = 0; i < n; i++)
	    scanf("%d",&a[i]);
	    
	printf("x toog og:\n");
	scanf("%d",&x);
	j = 0;    
	for(i = 0; i < n; i++)
	{
		if(a[i] == x)
		{ 
		    j++;
			printf("bairlal :%d\n",i);
		}
	}
	if(j == 0)
	   printf("-1");
	   
	return 0;
}
