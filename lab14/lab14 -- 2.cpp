#include <stdio.h>

int size(int *begin, int *end);

int main () {
    int i, n;
    scanf("%d", &n);
    int a[n];
    printf ("Husnegtiin hemjee:  %d\n", size(a, a + n)); // n-ii utgiig xewlene .
    return 0;
}

int size(int *begin, int *end) {
	int count = 0;
    for(begin; begin <= end; begin++)
	{
		count++;
	}
	int a[count -1];
	return 	sizeof(a);
}

	

