#include <stdio.h>
#include <string.h>

int main() {
	char s1[100], s2[100];
	printf("Ehnii ug: ");
	gets(s1);
	printf("2 doh ug: ");
	gets(s2);
	strcat(s1, s2);
	puts(s1);
}
