#include <stdio.h>
#include <string.h>

int main() {
	char s1[100], s2[100], sum[200];
	int i, k, x, y;
	printf("Ehnii temdegt moriig og:\n");
	scanf("%s",s1);
	printf("2 doh temdegt moriig og:\n");
	scanf("%s",s2);
	x = strlen(s1);
	for(k = 0,i = 0; k < x; k++)
	{
		sum[k] = s1[i];
		i++;
	}
	y = strlen(s2);
	for(k = x,i = 0; k < x + y; k++)
	{
		sum[k] = s2[i];
		i++;
	}
	
	for(k = 0; k < x + y; k++)
	{
		printf("%c",sum[k]);
	}
	
	return 0;
	
}
