#include <stdio.h>
#include <string.h>

int main() {
	char a[100];
	int i, p;
	printf("Tsuvaag og:\n");
//    scanf("%s",s1);
    gets(a);
    p = 0;
    for(i = 0; i < strlen(a); i++)
    {
    	if(a[i] == 'A' || a[i] == 'E' || a[i] == 'U' || a[i] == 'I' || a[i] == 'O')
    	      p++;
    	if(a[i] == 'a' || a[i] == 'e' || a[i] == 'u' || a[i] == 'i' || a[i] == 'o')
    	      p++;
	}
	
	printf("Egshgiin too: %d",p);
	
	return 0;
}
