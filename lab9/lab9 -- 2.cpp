#include <stdio.h>

void read(int a[], int n);
void print(int a[], int n);

int main() 
{
  int a[100], b[100];
  read(a, 5);
  read(b, 3);
  print(a, 5);
  print(b, 3);	
}

void read(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	    scanf("%d",&a[i]);
	    
	printf("\n");
}

void print(int a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	    printf("%d",a[i]);
	    
	    printf("\n");
}
