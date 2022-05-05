#include <stdio.h>

void read(int a[], int n);
void print(int a[], int n);
void find (int a[], int n, int *addr, int *addr1);

int main ()
{
    int a [100];
    read (a, 5) ; // lab 9.2 - iin read , print funkts
    print (a, 5) ;
    int x, y;
    find (a, 5 , &x, &y) ;
    printf (" tegsh toonuudiin too: %d\n", x) ;
    printf (" sondgoi toonuudiin too: %d\n", y) ;
    return 0;
}

void read(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	    scanf("%d",&a[i]);
	    
	printf("\n");
}

void print(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	    printf("%d ",a[i]);
	    
	    printf("\n");
}

void find (int a[], int n, int *addr, int *addr1)
{
	int i, x = 0, y = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i] % 2 == 0)
		   x++;
		else 
		   y++;
	}
	*addr = x;
	*addr1 = y;
}

