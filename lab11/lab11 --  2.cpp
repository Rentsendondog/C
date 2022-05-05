#include <stdio.h>
#include <math.h>

struct Point{
    int x, y;
};
double distance(Point a, Point b)
{
	float d;
	d = sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
	return d;
}

int main() {
	double k;
	struct Point a;
	struct Point b;
	printf("a tsegiin x: coordinat:\n");
	scanf("%d",&a.x);
	printf("a tsegiin y: coordinat:\n");
	scanf("%d",&a.y);
	printf("b tsegiin x: coordinat:\n");
	scanf("%d",&b.x);
	printf("b tsegiin y: coordinat:\n");
	scanf("%d",&b.y);
	k = distance(a, b);
	printf("2 tsegiin horondoh zai : %.4lf",k);
}



