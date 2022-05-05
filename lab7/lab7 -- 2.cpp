#include <stdio.h>

int main() {
	int i, n, s=0, p;
	float avg;
	printf("angiin huuhduudiin too:\n");
	scanf("%d",&n);
	int a[n];
	printf("huuhduudiin ondriig oruul:\n");
	for(i = 1; i <= n; i++)
		scanf("%d",&a[i]);
	
	for(i = 1; i <= n; i++){
		s = s + a[i];
	}
	avg = s / n;
	p = 0;
	for(i = 1; i <= n; i++){
		if(avg <= a[i]){
			p++;
		}
	}
	printf("dundjaas deeguur ondortoi %d huuhed bna",p);
	return 0;
}
