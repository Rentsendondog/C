#include <stdio.h>
#include <math.h>

int main() {
	float x1, y1, d1;
	float x2, y2, d2;
	float x3, y3, d3;
	printf("x1, y1 coordinatiig og:\n");
	scanf("%f%f",&x1,&y1);
	printf("x2, y2 coordinatiig og:\n");
	scanf("%f%f",&x2,&y2);
	printf("x3, y3 coordinatiig og:\n");
	scanf("%f%f",&x3,&y3);
	d1 = sqrt(x1 * x1 + y1 * y1);
	d2 = sqrt(x2 * x2 + y2 * y2);
	d3 = sqrt(x3 * x3 + y3 * y3);
	
	if(d1 > d2)
	{
		if(d1 > d3)
		{
			printf("hamgiin hol orshih tseg: (%.2f,%.2f)\n",x1,y1);
		}
		else printf("hamgiin hol orshih tseg: (%.2f,%.2f)\n",x3,y3);
	}
	else
	{
		if(d2 > d3)
		     printf("hamgiin hol orshih tseg: (%.2f,%.2f)\n",x2,y2);
		else printf("hamgiin hol orshih tseg: (%.2f,%.2f)\n",x3,y3);
	}
	
	if(d1 < d2)
	{
		if(d1 < d3)
		{
			printf("hamgiin oir orshih tseg: (%.2f,%.2f)\n",x1,y1);
		}
		else printf("hamgiin oir orshih tseg: (%.2f,%.2f)\n",x3,y3);
	}
	else
	{
		if(d2 < d3)
		     printf("hamgiin oir orshih tseg: (%.2f,%.2f)\n",x2,y2);
		else printf("hamgiin oir orshih tseg: (%.2f,%.2f)\n",x3,y3);
	}
	
	return 0;
	
}

