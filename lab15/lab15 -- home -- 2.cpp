#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {
        char fname[20], lname[20], id[10];
        float golch;
};
typedef struct Student Student;
void read(Student a[], int n);
void print(Student a[], int n);
void student_write(Student a[], int n, const char fname[]);
int student_read(Student a[], const char fname[]);

int main()
{
    Student a[100], b[100];
    int n, m;
    /* Oyutnii medeelliig garaas awna */
    printf("Oyutnii too: ");
    scanf("%d", &n);
    read(a, n);
    print(a, n);
    student_write(a, n, "info.dat");
    m = student_read(b, "info.dat");
    print(b, m);
    return 0;
}

void read(Student a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("-----------%d - r oyutan--------\n\n",i);
	    printf("Ner:    ");
	    scanf("%s",a[i].fname);
        printf("\nOvog:   ");
        scanf("%s",a[i].lname);
        printf("\nId:     ");
        scanf("%s",a[i].id);
        printf("\nGolch:  ");
		scanf("%f",&a[i].golch); 
		printf("\n");
	}
}

void print(Student a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("-----------%d - r oyutan--------\n\n",i);
	    printf("Ner:    %s\n",a[i].fname);
        printf("Ovog:   %s\n",a[i].lname);
        printf("Id:     %s\n",a[i].id);
        printf("Golch:  %.2f\n",a[i].golch); 
		printf("\n");
	}
}

/* a xvsnegted baigaa n oyutnii medeellig fname file -d bichne */
void student_write(Student a[], int n, const char fname[])
{
	FILE *fp8;
	fp8 = fopen("fnameinfo.txt", "w");
	fwrite(a, sizeof(Student), n, fp8);
	fclose(fp8);
}

/* fname file -d baigaa oyutnii medeellig neg neg unshin a xvsnegted
xadgalaad
xeden oyutnii medeelel unshij awsanaa butsaana .
*/
int student_read(Student a[], const char fname[])
{
	int n;
	FILE *fp8b;
	fp8b = fopen("fnameinfo.txt", "r");
	fread(a, sizeof(Student), n, fp8b);
	fclose(fp8b);
	
	return n;
}


