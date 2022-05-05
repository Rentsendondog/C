#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	char s2[100][100];
	int i, j, k;
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
	printf("ug ugeer tsalan hevlevel:\n");
	for(i = 0; i < k; i++)
		printf("%s\n", s2[i]);
		
	return 0;
}
