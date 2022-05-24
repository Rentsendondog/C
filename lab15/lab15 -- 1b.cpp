#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fpib;
	FILE *fpibo;
	int a, b, sum;
    fpib = fopen("input1b.txt", "r");
    fscanf(fpib,"%d%d", &a,&b);
    sum = a + b;
    fpibo = fopen("output1b.txt", "w");
    fprintf(fpibo,"sum = %d\n",sum);
    fclose(fpib);
    fclose(fpibo);
}
