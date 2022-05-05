#include <stdio.h>

int palindrom(int k);

int main() 
{
	int n;
	printf("n = ");
	scanf("%d",&n);
	if(palindrom(n) == 1)
		 printf("palindrom too mon.\n");
	else 
		printf("palindrom too bish.\n");

	   
	
}

int palindrom(int k)
{
	int m, s;
	m = k;
	s = 0;
	while(m > 0)
	{
		s = s * 10 + m % 10;
		m = m / 10;
	}
	
	if(k == s)
	   return 1;
	
	return 0;
}
