#include <stdio.h>

int main () {
    int i, n, j, a[10] , k, tmp;
    scanf ("%d", &n);
    for(i = 0; i < n; i++)
        scanf ("%d", &a[i]);

    for(i = 0; i < n; i++)
	{
        k = i;
        for(j = i + 1; j < n; j++)
		{
            if (a[k] > a[j])
			{
                  k = j;
            }
        }
        tmp = a[k];
        a[k] = a[i];
        a[i] = tmp;
    }

    for(i = 0; i < n; i++)
         printf ("%d ", a[i]);
         
    return 0;
}
