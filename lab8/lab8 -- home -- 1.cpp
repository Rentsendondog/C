#include <stdio.h>
#include <string.h>

int main() {
	char s[100];
	int i, j, k;
	printf("Oguulberiig oruul:\n");
    gets(s);
	k = 0;
	for(i = 0; i <= strlen(s); i++)
	{
		if(s[i] == ' ' || s[i] == '\0')
		   k++;

	}
	
	printf("Temdegtiin tsuvaa %d ugtei",k);
	
	return 0;
}
