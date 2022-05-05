#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x1, x2, d;
    scanf("%f %f %f",&a,&b,&c);
    d = b * b - 4 * a * c;
    if(a != 0)
	{
    	d = b * b - 4 * a * c;
    	if(d > 0)
		{
    	   x1 = (-b + sqrt(d)) / (2 * a);
           x2 = (-b - sqrt(d)) / (2 * a);
           printf("2 Shiidtei\n x1: %.2f\n x2:%.2f",x1,x2);
		}
		else if(d == 0)
		{
			x1 = (-b + sqrt(d)) / (2 * a);
			printf("Davhardsan 1 shiidtei\n x1: %.2f",x1);
		}
		else
		{
			printf("Bodit shiidgui:\n");  // komplex too garj bolno
		}	
	}
	// hervee a=0 bol bx+c=0 bolno
	else
	{
		if(b != 0)
		{
			x1 = -c / b;
			printf("1 Shiidtei\n x1: %.2f");
		} 
		else     
		{
			// a=0,b=0,c=0 bol
			if(c == 0)
			{
				printf("Olon shiidtei:\n");	
			}
			// c!=0 bol ogt shiidgui
			else
			{
				printf("Ogt shiidgui");
			}
		}
	}
    return 0;
}
