#include<stdio.h>
#include<stdlib.h>

int *find_divisors(int n)
{
    int *p;
    
    if(p == NULL){
        printf (" Sanax oi xvrsengvi !\n");
        exit(1);
    } 
    int i, count = 0;
    
    for(i = 1; i <= n; i++){
    	if(n % i == 0)
    	    count++;
	}
	int k = count;	
    p = (int *) malloc(sizeof(int) * k);
	p[0] = count;
	int j = 1;	
    for(i = 1; i <= n; i++)
    {
    	if(n % i == 0)
    	{
    		p[j++] = i;
		}
	}
    return p;
}
int main ()
{
    int *a, i, m;
    printf("m = ");
    scanf("%d",&m);
    a = find_divisors(m);
    for(i = 0; i <=*a; i++)
        printf("%d ",a[i]);
        
   free(a); // sanax oig choloolno
   return 0;
}
