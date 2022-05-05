#include <stdio.h>

int is_even(int);

int main() {
	int n, i;
	printf("n = ");
	scanf("%d",&n);
//	if(is_even(n) == 1)	
//	   printf("Tegsh too.\n");
//	else 
//	   printf("Sondgoi too.\n");

    for(i = 1; i <= n; i++)
    {
    	if(is_even(i) == 0)
    	   printf("%d ",i);
	}
} 

int is_even(int k)
{
  if(k % 2 == 0)
     return 1;
  else 	 
	 return 0;	
}
