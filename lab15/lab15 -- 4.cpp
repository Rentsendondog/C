#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp4;
	int n, sum = 0, i;
	int a[n];
	fp4 = fopen("input4.txt", "r");
    fscanf(fp4,"%d", &n);
    
    for(i = 0; i < n; i++)
    {
    	fscanf(fp4,"%d", &a[i]);
	}
	
	for(i = 0; i < n; i++)
		sum = sum + a[i];

    
    printf("sum = %d",sum);
	
}
