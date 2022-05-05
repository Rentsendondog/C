#include <stdio.h>

void read(int a[], int n);
void print(int a[], int n);
int *search(int a[], int value, int size);
int main ()
{
    int a[100];
    read(a, 5);
    print(a, 5);
    int *p;
    p = search(a, 3, 5);
    if(p == NULL )
        printf ("Oldsongui \n");
    else
        printf ("%d too %d bairlald oldloo \n", *p, p - a);
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


int *search(int a[], int value, int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
		if(a[i] == value) 
		    return &a[i];
	}
	return 0;
}
