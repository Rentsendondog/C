#include <stdio.h>

int count(int n);

int main()
{
	int m;
	printf("m = ");
	scanf("%d",&m);
	printf("n toonii huvaagchidiin too: %d",count(m));
	
}

int count(int n)
{
	int i, p = 0;
	for(i = 1; i <= n; i++)
	{
		if(n % i == 0)
		    p++;
	}
	
	return p;
}
