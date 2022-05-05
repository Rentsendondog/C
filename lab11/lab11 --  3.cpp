#include <stdio.h>
#include <math.h>

struct Triangle{
    int a, b, c;
};

double find_area(Triangle g)
{
	double p, s;
  	p = (g.a + g.b + g.c) / 2;
	s = sqrt(p * (p - g.a) * (p - g.b) * (p - g.c));
	return s;
}

int main() {
	struct Triangle T1;
	struct Triangle T2;
	double s1, s2;
	
	printf("T1 gurvaljinii a tal:\n");
	scanf("%d",&T1.a);
	printf("T1 gurvaljinii b tal:\n");
	scanf("%d",&T1.b);
	printf("T1 gurvaljinii c tal:\n");
	scanf("%d",&T1.c);
	
	s1 = find_area(T1);
	
	printf("T2 gurvaljinii a tal:\n");
	scanf("%d",&T2.a);
	printf("T2 gurvaljinii b tal:\n");
	scanf("%d",&T2.b);
	printf("T2 gurvaljinii c tal:\n");
	scanf("%d",&T2.c);
	
	s2 = find_area(T2);
	
	if(s1 > s2)
	   printf("T1 gurvaljin hamgiin tom: %.2lf\n",s1);
	else 
	   printf("T2 gurvaljin hamgiin tom: %.2lf\n",s2);
	
	
	
}
