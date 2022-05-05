/*
Daraah fumctionuudiig todorhoil
*/
#include <stdio.h>

void read(int a[ ] , int n)
{
     int i ;
     for ( i = 0; i < n; i++)
           scanf("%d",&a[i]);
}
void print(int a[], int n)
{
     int i ;
     for ( i = 0; i < n; i++)
          printf("%d ",a[i]);
          
     printf("\n");
}
/*
   x buhel too ogogdohod moduliig butsaana
        x < 0 ---->  -x
        x >= 0 --->   x toog butsaana.
*/
int modul(int x)
{
	if(x < 0)
	   return -x;
	else 
	   return x;
}
/*
    a hvsnegt too ogogdohod hadgdldgdsan toonuudiin niilberiig butsaana
          a - hvsnegt
          n - elementuudiin toog butsaana.
*/
int sum(int a[], int n)
{
    int i, sum = 0;
	for(i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	
	return sum;	
}
/*
    a hvsnegt too ogogdohod hadgdldgdsan toonuudiin arifmetick dundajiig butsaana
          a - hvsnegt
          n - elementuudiin too
*/
int avg(int a[], int n)
{
	int i, sum = 0;
	for(i = 0; i < n; i++)
	{
		sum = sum + a[i];
	}
	
	return sum / n;
}
/*
    a hvsnegt too ogogdohod hadgdldgdsan toonuudiin urjveriin butsaana
          a - hvsnegt
          n - elementuudiin too
*/
int product(int a[], int n)
{
	int i, s = 1;
	for(i = 0; i < n; i++)
	{
		s = s * a[i];
	}
	
	return s;
}
int main()
{
    int a[100], n, b[100];
    printf("n toonii utgiig oruul : \n");
    scanf("%d", &n);
    read(a, n);
    printf("Tanii oruulsan daraalal : \n");
    print (a, n);
    int mu, i;
    mu = avg(a, n);
    printf("mu-iin utga : %d\n",mu) ;
/* b */
    for(i = 0; i < n; i++)
        b[i] = modul(a[i] - mu);
        
    int alpha;
    alpha = product(b, n);
    printf("alpha-iin utga : %d\n" ,alpha);
    
    return 0;
}

