#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fpi;
	FILE *fpo;
	int a, b, sum;
//    const char * name = " input ";
//    const char * mode = "r";
    printf("a = ");
    scanf("%d",&a);
    printf("\nb = ");
    scanf("%d",&b);
    fpi = fopen("input.txt", "w");
    fprintf(fpi,"%d %d",a,b);
    
    fpi = fopen("input.txt", "r");
    fscanf(fpi,"%d%d", &a,&b);
    
    fpo = fopen("output.txt", "w");
    sum = a + b;
    fprintf(fpo,"sum = %d",sum);
    fclose(fpi);
    fclose(fpo);
    
    
    
    

}
