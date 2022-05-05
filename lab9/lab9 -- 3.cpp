#include <stdio.h>

void read(int a[], int n);
int max(int a[], int n);

int main() 
{
	int i, m, n, maxA, maxB;
	printf(" A Husnegtiin hemjeesiig oruul:\n");
	scanf("%d",&n);
	int a[n];
	printf("A husnegtiin elementuudiig oruul:\n");
	read(a, n);
	printf(" B Husnegtiin hemjeesiig oruul:\n");
	scanf("%d",&m);
	int b[m];
	printf("B husnegtiin elementuudiig oruul:\n");
	read(b, m);
	maxA = max(a, n);
	maxB = max(b, m);
	if(maxA > maxB)
	   printf("A husnegtiin max: %d",max(a, n));
	else
	   printf("B husnegtiin max: %d",max(b, m));
}

void read(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	    scanf("%d",&a[i]);
	    
	printf("\n");
}

int max(int a[], int n)
{
	int i, max;
	max = a[0];
	for(i = 0; i < n; i++)
	{
		if(max < a[i])
			max = a[i];
	}
	
	return max;
}
