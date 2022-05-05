#include <stdio.h>
#include <string.h>

int count(char s[]);

int main()
{
	char a[100];
	printf("Temdegten tsuvaag og: ");
	gets(a);
	printf("Egshgiin too : %d\n",count(a));
}

int count(char s[])
{
	int i, p = 0;
	for(i = 0; i < strlen(s); i++)
    {
    	if(s[i] == 'A' || s[i] == 'E' || s[i] == 'U' || s[i] == 'I' || s[i] == 'O' || s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i' || s[i] == 'o')
    	      p++;
	}
	return p;
}

