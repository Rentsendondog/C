#include <stdio.h>
#include <math.h>

struct Triangle{
	int a, b, c;
};

int main() {
	struct Triangle T1;
	struct Triangle T2;
	double p1, p2, s1, s2;
	
	printf("T1 gurvaljinii a tal:\n");
	scanf("%d",&T1.a);
	printf("T1 gurvaljinii b tal:\n");
	scanf("%d",&T1.b);
	printf("T1 gurvaljinii c tal:\n");
	scanf("%d",&T1.c);
	
	p1 = (T1.a + T1.b + T1.c) / 2;
	s1 = sqrt(p1 * (p1 - T1.a) * (p1 - T1.b) * (p1 - T1.c));
	
	printf("T2 gurvaljinii a tal:\n");
	scanf("%d",&T2.a);
	printf("T2 gurvaljinii b tal:\n");
	scanf("%d",&T2.b);
	printf("T2 gurvaljinii c tal:\n");
	scanf("%d",&T2.c);
	
	p2 = (T2.a + T2.b + T2.c) / 2;
	s2 = sqrt(p2 * (p2 - T2.a) * (p2 - T2.b) * (p2 - T2.c));
	
	if(s1 > s2)
	   printf("T1 gurvaljin hamgiin tom: %.2lf\n",s1);
	else 
	   printf("T2 gurvaljin hamgiin tom: %.2lf\n",s2);
	
	
	
}
