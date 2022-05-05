#include <stdio.h>

int main() {
    int n, i, s, m, k, p;
    printf("n toog og:\n");
    scanf("%d",&n);
    s = 0;
    k = n;
    while(k > 0)
    {
    	m = k % 10;
    	s = s + m;
    	k = k / 10;	
	}
	p = n % 100;
	if(n % 2 != 0)
	{
		if(s % 3 == 0)
		   printf("3-d huvaagdana\n");
		else printf("3-d huvaagdahgui\n");
	}
	else
	{
		if(p % 4 == 0)
		   printf("4-d huvaagdana\n");
		else printf("4-d huvaagdahgui\n");
	}
	
	return 0;
    

}

