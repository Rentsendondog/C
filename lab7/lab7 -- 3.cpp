#include <stdio.h>
#include <math.h>

int main() {
	int i, n, s, k, m, r;
	printf("n= ");
	scanf("%d",&n);
	int a[n];
	printf("a husngetiin elementuudiig oruul:\n");
	for(i = 1; i <= n; i++)
		scanf("%d",&a[i]);
	
	m = 0;
	for(i = 1; i <= n; i++){
		k = pow(10 ,i - 1);
		m = m + a[i] * k;
	}
	s = 0;
	r = m;
	while(m > 0){
		s = s * 10 + m % 10;
		m = m / 10;
	}
	if(r == s){
		printf("a husnegt tegsh hemtei:");
	}
	else printf("a husnegt tegsh hemgui:");
	return 0;
}
