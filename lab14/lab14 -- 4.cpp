#include <stdio.h>

int *find(int *begin, int *end, int x);

int main () {
    int a[5] = {3 , 7 , 1 , 2 , 4};
    int *p, x,y = 5;
    printf("xaix too: ");
    scanf("%d", &x);
    p = find(a, a + 5 , x);
    if(p == NULL)
        printf("%d too oldsongui \n", x);
    else{
    	x = y;
        printf("%d too %d bairlald oldloo \n", x, p - a);
    }
    return 0;
}

int *find(int *begin, int *end, int x) {
	int count = 0;
	for(begin; begin <= end; begin++) {
		if(*begin == x)
		    return begin;
		else count++;
		
	}
	if(count != 0)
	   return NULL;
}
