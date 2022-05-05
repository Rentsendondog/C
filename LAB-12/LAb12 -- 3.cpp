#include <stdio.h>

typedef struct {
        int d, m, y;
} Date;

Date read();
void print(Date dt);
int less(Date a, Date b);

int main()
{
	int n, i, j, p, k;
	printf("n = ");
	scanf("%d",&n);
	Date a[n], tmp;
	for(i = 0; i < n; i++)
	{
		a[i] = read();
	}
	
	for(i = 0; i < n; i++) 
	{
       for(j = i + 1; j < n; j++)
       {
          p = less(a[i], a[j]);
		  if(p == 0)
		  {
		  	 tmp = a[i];
		  	 a[i] = a[j];
		  	 a[j] = tmp;
		  }	
	   }
    }
	
	for(i = 0; i < n; i++)
	{
		print(a[i]);
	}
	
	
	
	
}

Date read()
{
	Date date;
	printf("On sar odroo oruul:");
	printf("Year: ");
	scanf("%d",&date.y);
	printf("Month: ");
	scanf("%d",&date.m);
	printf("Day :");
	scanf("%d",&date.d);
	return date;
}

void print(Date dt) 
{
	if(dt.m >= 10 && dt.d <= 10)
	  printf("%d/%d/0%d\n",dt.y,dt.m, dt.d);	
    if(dt.m < 10 && dt.d >= 10)
	  printf("%d/0%d/%d\n",dt.y,dt.m, dt.d);	
	if(dt.m < 10 && dt.d < 10)
	  printf("%d/0%d/0%d\n",dt.y,dt.m, dt.d);
	if(dt.m >= 10 && dt.d >= 10)
	  printf("%d/%d/%d\n",dt.y,dt.m, dt.d);	
}

int less(Date a, Date b)
{
	if(a.y < b.y)
	   return 1;
	if(a.y == b.y && a.m < b.m)
	   return 1;
	if(a.y == b.y && a.m == b.y && a.d < b.d)
	   return 1;
	   
	else 
	    return 0;
}
