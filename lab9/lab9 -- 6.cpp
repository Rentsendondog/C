#include <stdio.h>

int A[100];
int prime(int);
int prime_range(int a, int b);

int main() 
{
    int a, b, i, k;
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);
    k = prime_range(a, b);
    for(i = 0; i < k; i++)
        printf("%d ",A[i]);
        
    printf("\n%d sh anhnii too:",prime_range(a, b)); // end k g bichij bolno
		
}

int prime (int n) 
{
    int i;
    for(i = 2; i < n; i++) 
	{
        if (n % i == 0) 
            return 0; 
    }

    return 1;
}

int prime_range(int a, int b)
{
	int i,k = 0;
	for(i = a; i <= b; i++)
	{
		if(prime(i) == 1)
		{
			A[k] = i;
			k++;
		}
	}
	
	return k;
}
