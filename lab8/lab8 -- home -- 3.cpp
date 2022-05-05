#include <stdio.h>
#include <string.h>

int main() {
	char s[100], a[100];
	char s2[100][100];
	int i, j, k, dugaar, p;
	printf("Oguulberiig oruul:\n");
    gets(s);
	k = 0;
	j = 0;
	for(i = 0; i <= strlen(s); i++)
	{
		if(s[i] == ' ' || s[i] == '\0')
		{
		   k++;
		   j = 0;
		}
		else
		{
			s2[k][j] = s[i];
			j++;
			
		}
	}
	printf("\nvgiig og:\n");
	gets(a);
	p = 0;
	for(i = 0; i < k; i++)
	{
	
		if(strcmp(s2[i], a) == 0)
		{
			dugaar = i+1;
			p++;
			printf("Tsuvaanii %d dah ug.\n",dugaar);
		}
    }
	if(p == 0) 
	    printf("-1  ug oldsongui.\n");
    
	return 0;
}
