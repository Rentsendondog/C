#include <stdio.h>

int *find(int *begin, int *end, int x, int y);

int main () {
    int a[5] = {3 , 7 , 1 , 2 , 4};
    int *p, x, y = 5;
    printf("xaix too: ");
    scanf("%d", &x);
    p = find(a, a + 5, x, y);
    for(int i = 0; i < 5; i++)
    {
    	if(*p == *(a + i))
    	  printf("%d ",*p);
    	else 
    	   printf("%d ",*(a + i));
	}
    
    
    
    return 0;
}

int *find(int *begin, int *end, int x, int y) {
	int count = 0;
	for(int i = 0; i < (end - begin)/2; i++)
	{
	    if(*(begin + i) == x)
	    {
	    	x = y;
	    	*(begin + i) = x;
	    	return begin;
		}
		   
		else count++; 
	}
	if(count != 0)
	   return NULL;
	
}
