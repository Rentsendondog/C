#include <stdio.h>

int main() {
	int i, j, p, k, n;
	printf("n = ");
	scanf("%d",&n);
	int a[n];
	printf("elementuudiig oruul:\n");
	for(i = 0; i < n; i++)
	    scanf("%d",&a[i]);
	
	j = 0;
	p = 0;    
	for(i = 1; i < n; i++)
	{
		if(i < n && (i - 1) < n)
		{
			if(a[i] >= a[i-1])
		    {
			   j++;
		    }
		    else if(a[i] <= a[i-1])
		    {
			       p++;
		    }
		}
	}
	if(j == n - 1)
	   printf("Osohoor eremblegdsen\n");
	else {
	      if(p == n - 1)
	           printf("Buurahaar eremblegdsen\n");
	      else printf("Eremblegdeegui\n");
	     }
	
}
