#include <stdio.h>

int main() {
    int a, b, c, d, e, f, g, h;
    printf("a,b toog og:\n");
    scanf("%d%d",&a,&b);
    c = a > b;
    d = a < b;
    e = a >= b;
    f = a <= b;
    g = a != b;
    h = a == b;
    printf(" a ih            :%d\n",c);  
    printf("b ih             :%d\n",d);
    printf("a ih buyu tentsuu:%d\n",e);
    printf("b ih buyu tentsuu:%d\n",f);
    printf("a,b ylgaatai     :%d\n",g);
    printf("a,b tentsuu      :%d\n",h);
    
    return 0;
}
