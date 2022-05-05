#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Rational {
       int d, n; // d/n butarxai
};

typedef Rational Rational;
Rational add( Rational *a,  Rational *b);
Rational sub( Rational *a,  Rational *b);
Rational mult( Rational *a,  Rational *b);
Rational div( Rational *a,  Rational *b);
void simplify(Rational *a); // xuraax
void read(Rational *a); // unshih
void print(Rational *a); // xevlex

// hevleh
void print(Rational *a)
{
	printf("\n %d / %d",a->d,a->n);
}

// xuraax
void simplify(Rational *a)
{
	int i, j;
	Rational g;
	i = a->n;
	j = a->d;
	while(i != j)
	{
		if(i > j)
		   i = i - j;
		else 
		   j = j - i;
	}
	g.d = a->d / j;
	g.n = a->n / j;
	print(&g);
}

int main() 
{
    Rational Ra, Rb;
	read(&Ra);
	read(&Rb);
    printf("\nRa, Rb engiin butarhain niilber: ");
	add(&Ra, &Rb);
	printf("\nRa, Rb engiin butarhain ylgavar: ");
	sub(&Ra, &Rb);
	printf("\nRa, Rb engiin butarhain vrjver: ");
	mult(&Ra, &Rb);
	printf("\nRa, Rb engiin butarhain noogdvor: ");
	div(&Ra, &Rb);
	printf("\nRa engiin butarhaig huraasan ni: ");
	simplify(&Ra);	
}
// unshih
void read(Rational *a)
{
	printf("engiin butarhain hvrtver: \n");
	scanf("%d",&a->d);
	printf("engiin butarhain huvaari: \n");
	scanf("%d",&a->n);
}


//Engiin butarhain niilber
Rational add( Rational *a,  Rational *b)
{
	Rational g;
	g.n = a->n * b->n;
	g.d = (a->d * b->n) - (b->d * a->n);		
	print(&g);
}

//Engiin butarhain ylgavar
Rational sub( Rational *a,  Rational *b)
{
	Rational g;
	g.n = a->n * b->n;
	g.d = (a->d * b->n) + (b->d * a->n);		
	print(&g);
}

//Engiin butarhain vrjver
Rational mult( Rational *a, Rational *b)
{
   Rational g;
   g.d = a->d * b->d;
   g.n = a->n * b->n;
   print(&g);
}

//Engiin butarhain noogdvor
Rational div( Rational *a,  Rational *b)
{
   Rational g;
   g.d = a->d * b->n;
   g.n = a->n * b->d;
   simplify(&g);
}




	

