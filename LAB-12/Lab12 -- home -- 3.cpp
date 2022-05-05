#include <stdio.h>
#include <math.h>

typedef struct {
    int dim;
    float dat[100];
} Vector;

int dot_product(Vector a, Vector b);
Vector scalar_mult1(Vector a, float t);
Vector scalar_mult2(Vector a, int t);
int len(Vector a);
void printV(Vector a);

int main() 
{
	Vector A, B;
	printf("Vektoriin hemjees: \n");
	scanf("%d",&A.dim);
	printf("\nA vektoriin componentuud: \n");
	for(int i = 0; i < A.dim; i++)
	    scanf("%f",&A.dat[i]);
	   
	printf("\nVektoriin hemjees:(hemjeeg ni adil og)\n");
	scanf("%d",&B.dim);
	printf("\nB vektoriin componentuud: \n");

	for(int j = 0; j < B.dim; j++)
	    scanf("%f",&B.dat[j]);
	    	
	printf("\nA, B Vektoriin skalar vrjver ni:   %d\n",dot_product(A, B));

	float tf;
	printf("\n\nA vektoriig t skalaraar vrjih tf: ");
	scanf("%f",&tf);
	printf("\nA vektoriig t-eer skalar vrjvel : \n");
	printV(scalar_mult1(A, tf));
	int ti;
	printf("\n\nA vektoriig t skalaraar vrjih ti: ");
	scanf("%d",&ti);
	printf("\nA vektoriig t-eer skalar vrjvel : \n");
	printV(scalar_mult2(A, ti));
	
	printf("\n\nA vektoriin urt: %d",len(A));
	
	
}


// a.b vektoriin skalar vrjver
int dot_product(Vector a, Vector b)
{
	int s = 0;
	for(int i = 0; i < a.dim; i++)
	{
		  s = s + a.dat[i] * b.dat[i];
	}
	
	return s;
}

//a vektoriig t skalaraar vrjine
Vector scalar_mult1(Vector a, float t)
{
	for(int i = 0; i < a.dim; i++)
	    a.dat[i] = a.dat[i] * t;
	       
	return a;	
}

// a vektoriig t skalaraar vrjine
Vector scalar_mult2(Vector a, int t)
{
	for(int i = 0; i < a.dim; i++)
	    a.dat[i] = a.dat[i] * t;
	       
	return a;
}

// a vektoriin urt
int len(Vector a)
{
	float k;
    k = dot_product(a, a);
	k = sqrt(k);
	
	return k;	
}

// vektoriig hevleh 
void printV(Vector a)
{
	for(int i = 0; i < a.dim; i++)
	    printf("%f,",a.dat[i]);
}

