#include <stdio.h>

typedef struct {
        int d, m, y;
} Date;

Date read();
void print(Date dt);
int less(Date a, Date b);

int main()
{
	Date a, b;
	int k;
	a = read();
	b = read();
	k = less(a, b);
	if(k == 1)
	   printf("a ni deer vyiinh\n");
	else 
	   printf("b ni deer vyiinh\n");	
}
// On, sar, odriig garaas avch Date bvttsed hadgalj butsaana
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
// dt on, sar, odriig yyyy/mm/dd formataar hevlene. 
//Herev sar esvel odor ni 10 -s baga baival urt ni 0 nemehiig anhaarna uu  
void print(Date dt) 
{
	if(dt.m < 10)
	  printf("%d/0%d/%d",dt.y,dt.m, dt.d);
	if(dt.d < 10)
	  printf("%d/%d/0%d",dt.y,dt.m, dt.d);
	if(dt.m < 10 && dt.d < 10)
	  printf("%d/0%d/0%d",dt.y,dt.m, dt.d);
	if(dt.m >= 10 && dt.d >= 10)
	  printf("%d/%d/%d",dt.y,dt.m, dt.d);	
}
// a, b bvttsen on,sar, odor torliin huvisagchid ogogdohod a < b buyu b-eesee a ni deer veiin baival 1 vgvi bol 0-g butsaana
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
