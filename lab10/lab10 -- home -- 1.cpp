#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void read_2darray(int a[][100], int n, int m)
{
     int i, j;
     for(i = 0; i < n; i++)
        for(j = 0; j < m; j++)
            scanf("%d",&a[i][j]);
            
    printf("\n");
}
void print_2darray(int a[][100], int n, int m)
{
     int i , j ;
     for(i = 0; i < n; i++)
	 {
        for(j = 0; j < m; j++)
            printf("%d ",a[i][j]);
            printf("\n");
     }
     printf("\n");
}
/*Daraah parametruudiig avch mor bur, bagana buriin hamgiin bagiig
row, col hvsnegtvvded hadgalna.
a : 2 hemjeest hvsnegt
n : hvsnegtiin moriin too
m : hvsnegtiin baganiin too
row : mor buriin baga ni hadgalagdana
col : bagana buriin baga ni hadgalagdana.
*/
void min(int a[][100], int n, int m, int row[], int col[])
{
	int i, j, min1, min2;
	for(i = 0; i < n; i++)
	{
		min1 = a[i][0];
		for(j = 0; j < m; j++)
		{
			if(min1 > a[i][j])
			{
				min1 = a[i][j];
			}
		}
		row[i] = min1;
	}
	
	for(j = 0; j < m; j++)
	{
		min2 = a[0][j];
		for(i = 0; i < n; i++)
		{
			if(min2 > a[i][j])
				min2 = a[i][j];
		}
		col[j] = min2;
	}
}
int main()
{
    int c_row, c_col;
    int A[100], B[100];
    int C[100][100];
    printf("xusnegtiin mor, baganii toog oruul : \n" );
    scanf("%d%d",&c_row,&c_col);
    read_2darray(C, c_row, c_col);
    print_2darray(C, c_row, c_col);
    min(C, c_row, c_col, A, B);
	printf("mor buriin xamgiin baga: \n\n");
    for(int i = 0; i < c_row; i++) 
	{
        printf("%d - r moriin xamgiin baga: %d\n" ,i,A[i]);
    }
    printf("\nbagana buriin xamgiin baga: \n\n");
    for(int i = 0; i < c_col; i++) 
	{
        printf("%d - r moriin xamgiin baga: %d\n",i,B[i]);
    }
    return 0;
} 
