#include <stdio.h>

int main() 
{
	int a, b;
	printf("a, b toonuudiig og:\n");
	scanf("%d%d",&a,&b);
	while(a != b)
	{
		if(a > b)
		    a = a - b;
		else 
		    b = b - a;
	}
	printf("HIEH: %d",b);
	return 0;
}
