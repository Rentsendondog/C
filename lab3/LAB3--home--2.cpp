#include <stdio.h>

int main() {
	int a, b, c, d,i,j,k,p;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	for(i=0;i<=9;i++)
	{
		for(j=0;j<=9;j++)
		{
			for(k=0;k<=9;k++)
			{
				for(p=0;p<=9;p++){
					if((i == a || i == b || i == c || i == d) && (j == a || j == b || j == c || j == d) && (k == a || k == b || k == c || k == d) && (p == a || p == b || p == c || p == d)
					&& (i != j && i != k && i != p && j != k && j != p && p != k))
					{
						printf("%d%d%d%d",i,j,k,p);
						printf("\n");
						
					}
				}
			}
		}
	}
	return 0;
}
