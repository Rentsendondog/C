#include <stdio.h>

int main() {
	int n,i,j,s,d,x,y,d2;
	printf("a husnegtiin hemjeesiig oruul:\n");
	scanf("%d",&n);
	int a[n][n];
	printf("a husnegtiin elementuudiig oruul:\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++)
			scanf("%d",&a[i][j]);
	}
	d = 0;
	d2 = 0;
	for(i = 0; i < n; i++){
		x = 0;
		for(j = 0;j < n; j++){
			x = x + a[i][j];
			if(i + j == n - 1)
				d2 = d2 + a[i][j];
		}
		printf("%d-r moriin niilber: %d\n",i,x);
	}
	printf("\n");
	for(j = 0;j < n;j++){
		y = 0;
		for(i = 0; i < n; i++){
			y = y + a[i][j];
			if(i == j)
				d = d + a[i][j];
		}
		printf("%d-r baganiin niilber: %d\n",j,y);
	}
	printf("\n");
	printf("baruun diagnonaluudiin niilber: %d\n",d);
	printf("zvvn diagonaluudiin niilber: %d\n",d2);
	return 0;
}
