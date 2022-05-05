#include <stdio.h>
#include <math.h>

int main() {
    float a, b, xdeg, xrad, c, p=3.141593;
    printf("a,b taliig og:\n");
    scanf("%f%f",&a,&b);
    printf("a,b iin hoorondoh ontsgiig og:\n");
    scanf("%f",&xdeg);
    xrad = xdeg * p / 180;
    c = sqrt((a * a) + (b * b) - (2 * a * b * cos(xrad)));
    printf("gurvaljnii nogoo tal: %.2f",c);
    return 0;
}

