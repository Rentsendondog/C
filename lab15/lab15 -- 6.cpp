#include <stdio.h>
#include <stdlib.h>

struct Student {
       char fname[20], lname[20], id[10];
       float golch;
};

int main() {
	FILE *fp6;
	int i, n;
	
		fp6 = fopen("student.txt", "r");
		fscanf(fp6,"%d",&n);
		struct Student a[n];
		for(i = 0; i < n; i++) 
		{
			
	       fscanf(fp6,"%s",a[i].fname);
           fscanf(fp6,"%s",a[i].lname);
           fscanf(fp6,"%s",a[i].id);
		   fscanf(fp6,"%f",&a[i].golch); 
		}
		
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
