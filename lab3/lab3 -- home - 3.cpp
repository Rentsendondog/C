#include <stdio.h>

int main() {
	int n, dun;
	printf("onoog oruul:\n");
	scanf("%d",&n);
	dun = n * 100 / 35;
	dun <= 100 && dun >= 90 && printf("A");
	dun <= 89 && dun >= 80 && printf("B");
	dun <= 79 && dun >= 70 && printf("C");
	dun <= 69 && dun >= 60 && printf("D");
	dun <= 59 && printf("F");
	
	return 0;
}
