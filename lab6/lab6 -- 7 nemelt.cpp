#include <stdio.h>
 
int main() {
	int n, m, i, j, k, f; // f -- bool
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
	 
	 int c[10];
	 k = 0;   
	for(i = 0;i < n; i++){
		for(j = 0;j < m; j++){
			if(a[i] == b[j]){
				c[k] = a[i];
				k++;
			}
		}
	}
	
	for(i = 0; i < k; i++)
	{
		f = 0;
		for(j = i+1; j < k; j++)
		{
			if(c[i] == c[j])
			{
				f = 1;
			}
		}
		if(f == 0)
		{
			printf("%d ",c[i]);
		}
	}
	
	return 0;
	    
	
}
