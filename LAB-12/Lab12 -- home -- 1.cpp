#include <stdio.h>

typedef struct {
        int d, m, y;
} Date;

Date read();
void print(Date dt);
int modul(int x);
int uduriin_zuruu( Date a, Date b);
int less(Date a, Date b);

int main()
{
	Date a, naadam;
	int honog;
	a = read();
	naadam.y = 2022;
	naadam.m = 7;
	naadam.d = 11;
	honog = uduriin_zuruu(a, naadam);
	printf("\nHonog :%d",honog);
	
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
int uduriin_zuruu( Date a, Date b)
{
	const int monthDays[12]= { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int odor1, odor2;
	odor1 = a.y * 365 + a.d;
	for (int i = 0; i < a.m ; i++)
        odor1 += monthDays[i];
        
    odor2 = b.y * 365 + b.d;
    for (int i = 0; i < b.m ; i++)
        odor2 += monthDays[i];
	if(less(a, b) == 1)	    
      return (odor2 - odor1);
	  
	return (odor1 - odor2);	
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

