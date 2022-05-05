#include <stdio.h>

void read(int a[], int n);
void print(int a[], int n);
void find(int a[], int n, int *min, int *max);

int main() 
{
    int i, n, big, small;
    printf("n = ");
    scanf("%d",&n);
    int a[n];
    printf("a massiviin elementuudiig oruul:\n");
    read(a, n);
    print(a, n);
    find(a, n, &small, &big);
    printf("min :  %d\n",small);
    printf("max :  %d",big);
    return 0;
	
		
}
// massiviin elementuudiig oruulah
void read(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	    scanf("%d",&a[i]);
	    
	printf("\n");
}
// massiviin elementuudiig hevleh
void print(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	    printf("%d ",a[i]);
	    
	    printf("\n");
}

void find(int a[], int n, int *min, int *max)
{
	int i,big, small;
	big = a[0];
	small = a[0];
	for(i = 0; i < n; i++)
	{
		if(big < a[i])
		   big = a[i];
		   
		if(small > a[i])
		   small = a[i];
	}
	*max = big;
	*min = small;
}
