#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, d, x, y, s;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    x = pow(a,3) + (b / c);
    x = x * x;
    x = x + d;
    x = sqrt(x);
    y = (d * d) - (a * b) / c;
    s = x / y * d;
    printf("hariu: %.2f",s);
    return 0;
}


