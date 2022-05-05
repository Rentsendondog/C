#include <stdio.h>

int main() {
	int y, m , d ;  //2022-2-28
	printf("On sar odriig oruul:\n");
	scanf("%d%d%d",&y,&m,&d);
	if(y > 2022)
	   printf("Ireedui\n");
	else if(y == 2022)
	{
		if(m > 2)
		   printf("Ireedui\n");
		else if(m == 2)
		{
			if(d > 28)
			  printf("Ireedui\n");
			else if(d == 28)
			  printf("Onoodor\n");
			else printf("Ongorson\n");
		}
		else printf("Ongorson\n");
	}
	else printf("Ongorson");
	
	return 0;
	
}
