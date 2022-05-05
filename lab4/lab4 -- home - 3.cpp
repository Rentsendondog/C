#include <stdio.h>

int main() {
	float H, M, X, Y;   //H(cm),M(kg)  eregtei ondor jin;
	float h, m, x, y;   //h(cm),m(kg)  emegtei ondor jin;
	printf("Eregtei hunii ondor jing oruul:\n");
	scanf("%f%f",&H,&M); 
	printf("emegtei hunii ondor jing oruul:\n");
	scanf("%f%f",&h,&m);
	X = (H - 150) / 2.5 * 1.9;
	Y = X + 52;
	x = (h - 150) / 2.5 * 1.7;
	y = x + 49;
	printf("Eregtei\n\n");
	if(M > Y)
	    printf("iluudel jin %.2f\n",M-Y);
	else if (M == Y)
	    printf("heviin jin %.2f\n",M-Y);
	else printf("jingiin dutagdaltai %.2f\n", M-Y);
	printf("Emegtei\n\n");
	if(m > y)
	    printf("iluudel jin %.2f\n",m-y);
	else if (m == y)
	    printf("heviin jin %.2f\n",m-y);
	else printf("jingiin dutagdaltai %.2f\n", m-y);
}
