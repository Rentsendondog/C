#include <stdio.h>


void read (int A[] , int n) ; // husnegtiin utgiig hereglegchees unshih funkts
void print (int A[] , int n) ; // husnegtiin utgiig hevleh funkts
int join (int A[] , int B[] , int n, int m);

int main ()
{
    int a[100] , b[100] , n, m;
    scanf ("%d\n", &n) ;
    read(a, n);
    print(a, n);
    scanf("%d\n", &m);
    read(b, m);
    print(b, m);
    int k = join(a, b, n, m);
    print (a, k) ;
    return 0;
}

void read(int A[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	    scanf("%d",&A[i]);
	    
	printf("\n");
}

void print(int A[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	    printf("%d ",A[i]);
	    
	    printf("\n");
}

int join (int A[] , int B[] , int n, int m)
{
	int i, j;
	j = 0;
	for(i = n; i < n + m; i++)
	{
		A[i] = B[j];
		j++;
	}
     return n+m;
}
