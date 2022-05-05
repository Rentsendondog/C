#include <stdio.h>
#include <math.h>

struct Rational {
    int d, n; 
};
typedef struct Rational Rational;
Rational add(Rational a, Rational b); 
Rational sub(Rational a, Rational b); 
Rational mult(Rational a, Rational b); 
Rational div(Rational a, Rational b); 
Rational simplify(Rational a);
void print(Rational a);

int main() 
{
	Rational Ra, Rb;
	printf("Ra engiin butarhain hvrtver: \n");
	scanf("%d",&Ra.d);
	printf("Ra engiin butarhain huvaari: \n");
	scanf("%d",&Ra.n);
	printf("Rb engiin butarhain hvrtver: \n");
	scanf("%d",&Rb.d);
	printf("Rb engiin butarhain huvaari: \n");
	scanf("%d",&Rb.n);
	

	printf("\nRa, Rb engiin butarhain niilber: ");
	print(add(Ra, Rb));
	printf("\nRa, Rb engiin butarhain ylgavar: ");
	print(sub(Ra, Rb));
	printf("\nRa, Rb engiin butarhain vrjver: ");
	print(mult(Ra, Rb));
	printf("\nRa, Rb engiin butarhain noogdvor: ");
	print(div(Ra, Rb));
	printf("\nRa engiin butarhaig huraasan ni: ");
	print(simplify(Ra));
}

Rational add(Rational a, Rational b)
{
	Rational g;
	g.n = a.n * b.n;
	g.d = (a.d * b.n) + (b.d * a.n);		
	return g;
}

Rational sub(Rational a, Rational b)
{
    Rational g;
	g.n = a.n * b.n;
	g.d = (a.d * b.n) - (b.d * a.n);
    return g;	
}

Rational mult(Rational a, Rational b)
{
   Rational g;
   int d, n;
   g.d = a.d * b.d;
   g.n = a.n * b.n;
   return g;		
}

Rational div(Rational a, Rational b)
{
   Rational g;
   g.d = a.d * b.n;
   g.n = a.n * b.d;
   return g;
	
}

Rational simplify(Rational a)
{
	int i, j;
	Rational g;
	i = a.n;
	j = a.d;
	while(i != j)
	{
		if(i > j)
		   i = i - j;
		else 
		   j = j - i;
	}
	g.d = a.d / j;
	g.n = a.n / j;
    return g;
   		
}
//
void print(Rational a)
{
	printf("\n %d / %d",a.d,a.n);
}
