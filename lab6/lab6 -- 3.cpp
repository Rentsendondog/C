#include <stdio.h>

int main() {
	int n, m, i, j, k;
	printf("a husnegtiin hemjeesiig og:\n");
	scanf("%d",&n);
	int a[n];
	printf("a husnegtiin elementuudiig oruul:\n");
	for(i = 0; i < n; i++)
	    scanf("%d",&a[i]);
	    
	printf("b husnegtiin hemjeesiig og:\n");
	scanf("%d",&m);
	int b[m];
	printf("b husnegtiin elementuudiig oruul:\n");
	for(j = 0; j < m; j++)
	    scanf("%d",&b[j]);
	    
	int c[n+m];    
	for(k = 0, i = 0; k < n; k++)
	{
		c[k] = a[i];
		i++;
	}
	for(k = n, j = 0; k < n + m; k++)
	{
		c[k] = b[j];
		j++;
	}
	printf("a,b husnegtiin negdel c husnegt:\n ");
	for(k = 0; k < n+m; k++)
	    printf("%d ",c[k]);
	    
	    
	return 0;
}
