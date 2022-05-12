#include <stdio.h>

void reverse(int *begin , int *end);

int main () {
    int a[5] = {3, 7, 1, 2, 4};
    reverse(a, a + 2);
    int i;
    for(i = 0; i < 5; i++)
        printf("%d ",a[i]); // 1 7 3 2 4
    return 0;
}

void reverse(int *begin, int *end) {
	int temp, i = 0;	
	for(i = 0; i < (end - begin)/2; i++)
	{
	    temp = *(end - i);
	    *(end - i) = *(begin + i);
	    *(begin + i) = temp;
	}
	printf("\n");
}
