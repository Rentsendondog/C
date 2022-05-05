#include <stdio.h>

int main() {
	int i, m, n;
	printf("heden sh too we?\n");
	scanf("%d",&n);
	int a[n];
	printf("toonuudiig oruul:\n");
	for(i = 0; i < n; i++)
	    scanf("%d",&a[i]);
	    
	for(i = n - 1; i >= 0; i--)
	    printf("%d ",a[i]);
	    
	
	return 0;
	
}
