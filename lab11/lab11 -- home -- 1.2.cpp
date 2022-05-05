#include <stdio.h>
#include <string.h>

struct Student {
    char fname[20], lname[20], id[10];
    float golch;
};
typedef struct Student Student;
void read_students(Student a[], int n);
void print_students(Student a[], int n);
void print(Student st );
int search_by_fname(Student a[], int n, char fname[]);
int search_by_lname(Student a[], int n, char lname[]);
int search_by_id(Student a[], int n, char id[]);
int search_by_golch(Student a[], int n, float golch);
void sort_by_golch (Student a[], int n);
void swapString(char str1[], char str2[]);

int main( )
{
    Student a[100];
    int n, btn, i;
    printf("Oyutnii too : ");
    scanf("%d",&n);
    read_students(a, n);
    print_students(a, n);
    char fname[20], lname[20], id[20];
    float golch;
    while (true) 
	{
        printf("1: Nereer xaix, 2: Ovgoor xaix, 3: ID-aar xaix, 4: Golchoor xaix, 5: Golchoor erembelex, 6: Xevlex, 7: Garax\n");
        scanf("%d",&btn);
        if(btn == 1) 
		{
           printf("Xaix ner : ");
           scanf("%s", fname);
           i = search_by_fname(a, n, fname);
           if(i == -1)
              printf("Oyutan oldsongui \n");
           else
              print(a[i]);
        } 
		else if(btn == 2) 
		{
           printf("Xaix ovog: ");
           scanf("%s",lname);
           i = search_by_lname(a, n, lname);
           if(i == -1)
              printf("Oyutan oldsongui \n");
           else
              print(a[i]);
        } 
		else if(btn == 3)
		{
           printf("Xaix id : ");
           scanf("%s",id);
           i = search_by_id(a, n, id);
           if(i == -1)
              printf("Oyutan oldsongui \n");
           else
              print(a[i]);
		} 
		else if(btn == 4) 
		{
		   printf("Xaix golch:");
		   scanf("%f",&golch);
           i = search_by_golch(a, n, golch);
		   if(i == -1)
		      printf("Oyutan oldsongui\n");
		   else
		      print(a[i]);
        } 
		else if(btn == 5)
            sort_by_golch(a, n);
        else if(btn == 6)
            print_students(a, n);
		else
            break;
   }
   return 0;
}



// n oyutnii medeellig garaas avch hvsnegted hadgalna.
void read_students(Student a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("-----------%d - r oyutan--------\n\n",i+1);
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

// a hvsnegted hadgalsan n oyutnii medeelliig hevlene
void print_students(Student a[], int n)
{
	int i;
	for(i = 0; i < n; i++)
	{
		printf("-----------%d - r oyutan--------\n\n",i+1);
	    printf("Ner:    %s\n",a[i].fname);
        printf("Ovog:   %s\n",a[i].lname);
        printf("Id:     %s\n",a[i].id);
        printf("Golch:  %.2f\n",a[i].golch); 
		printf("\n");
	}
}

// st oyutnii medeelliig hevlene
void print(Student st)
{
     printf("Ner:    %s\n",st.fname);
     printf("Ovog:   %s\n",st.lname);
     printf("Id:     %s\n",st.id);
     printf("Golch:  %.2f\n",st.golch); 
}

// a hvsnegted hadgalsan n oyutnii medeellees fname neriig haina.
// Ug nertei oyutan oldoj baigaa bol hvsnegtiin dugaariig vgvi bol -1 utgiig butsaana.
int search_by_fname(Student a[], int n, char fname[])
{
	int i, j = 0;
	for(i = 0; i < n; i++)
	{
		if(strcmp(a[i].fname, fname)== 0)
		    return i;
	    else 
	        j++;
	}
	
	if(j == n)
	   return -1;
}

// a hvsnegted hadgalsan n oyutnii medeellees lname neriig haina.
// Ug ovogtoi oyutan oldoj baigaa bol hvsnegtiin dugaariig vgvi bol -1 utgiig butsaana.
int search_by_lname(Student a[], int n, char lname[])
{
	int i, j = 0;
	for(i = 0; i < n; i++)
	{
		if(strcmp(a[i].lname, lname)== 0)
		    return i;
	    else 
	        j++;
	}
	
	if(j == n)
	   return -1;
}

//a hvsnegted hadgalsan n oyutnii medeellees id id-g haina.
// Ug id-tai oyutan oldoj baigaa bol hvsnegtiin dugaariig vgvi bol -1 utgiig butsaana.
int search_by_id(Student a[], int n, char id[])
{
	int i, j = 0;
	for(i = 0; i < n; i++)
	{
		if(strcmp(a[i].id, id)== 0)
		    return i;
	    else 
	        j++;
	}
	
	if(j == n)
	   return -1;
}

//a hvsnegted hadgalsan n oyutnii medeellees golch golchiig haina.
// Ug golchtoi oyutan oldoj baigaa bol hvsnegtiin dugaariig vgvi bol -1 utgiig butsaana.
int search_by_golch(Student a[], int n, float golch)
{
	int i, j = 0;
	for(i = 0; i < n; i++)
	{
		if(a[i].golch == golch)
		    return i;
	    else 
	        j++;
	}
	
	if(j == n)
	   return -1;
}

//a hvsnegted hadgalsan n oyutnii medeellees golchoor ni eremblene.
void sort_by_golch(Student a[], int n)
{
	int i, j;
	float temp;
	for(i = 0; i < n; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(a[i].golch < a[j].golch)
			{
				temp = a[i].golch;
				a[i].golch = a[j].golch;
				a[j].golch = temp;
				swapString(a[i].fname, a[j].fname);
				swapString(a[i].lname, a[j].lname);	
				swapString(a[i].id, a[j].id);		
				
			}
		}
	}
	
	for(i = 0; i < n; i++)
	{
		printf("Golch :   %.2f\n",a[i].golch);
	}
}

void swapString(char str1[], char str2[])
{
	char temp2[20];
	strcpy(temp2, str1);
	strcpy(str1, str2);
	strcpy(str2, temp2);
}
