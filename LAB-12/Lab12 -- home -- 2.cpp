#include <stdio.h>
#include <math.h>

typedef struct {
        int x, y;
} Point;

typedef struct {
    Point A, B, C;
} Triangle_P;

double distance(Point a, Point b);
double find_area(Triangle_P g);


int main()
{
  	Triangle_P T1;
  	double Area;
  	printf("Gurvaljinii A taliin x coordinat:\n");
	scanf("%d",&T1.A.x);
	printf("Gurvaljinii A taliin y coordinat:\n");
	scanf("%d",&T1.A.y);
	
	printf("Gurvaljinii B taliin x coordinat:\n");
	scanf("%d",&T1.B.x);
	printf("Gurvaljinii B taliin y coordinat:\n");
	scanf("%d",&T1.B.y);
	
	printf("Gurvaljinii C taliin x coordinat:\n");
	scanf("%d",&T1.C.x);
	printf("Gurvaljinii C taliin y coordinat:\n");
	scanf("%d",&T1.C.y);
	
   
	
     Area = find_area(T1);
     printf("gurvaljinii talbai : %lf",Area);
}

double distance(Point a, Point b)
{
	double d;
	d = sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
	return d;
}

double find_area(Triangle_P g)
{
	double d1, d2, d3, p, s;
	d1 =  distance(g.A, g.B);
	d2 =  distance(g.B, g.C);
	d3 =  distance(g.C, g.A);
	
  	p = (d1 + d2 + d3) / 2;
	s = sqrt(p * (p - d1) * (p - d2) * (p - d3));
	return s;
}


