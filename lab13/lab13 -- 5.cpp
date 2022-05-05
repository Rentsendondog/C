#include <stdio.h>

struct Triangle {
       int a, b, c;
};
void read(struct Triangle *p)
{
     printf("a tal: ");
     scanf("%d",&p->a);
     printf("b tal: ");
     scanf("%d",&p->b);
     printf("c tal: ");
     scanf("%d",&p->c);
}

void print(struct Triangle *p)
{
     printf("\n\na tal : %d\n",p->a);
     printf("b tal : %d\n",p->b);
     printf("c tal : %d\n",p->c);
}
int main ()
{
	float P;
    struct Triangle g;
    read(&g);
    print(&g);
    P = (float)(g.a + g.b + g.c) / 2;
    printf("P : %.2f",P);
// ...
}
