#include <stdio.h>
#include <stdlib.h>

struct Student {
       char fname[20], lname[20], id[10];
       float golch;
};

int main() {
	FILE *fp5;
	int i, n;
	printf("Oyutnii too :");
	scanf("%d",&n);
	struct Student a[n];
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
	
		fp5 = fopen("input5.txt", "w");
		
		for(i = 0; i < n; i++) 
		{
			
		    fprintf(fp5,"-----------%d - r oyutan--------\n\n",i+1);
	        fprintf(fp5,"Ner:    %s\n",a[i].fname);
            fprintf(fp5,"Ovog:   %s\n",a[i].lname);
            fprintf(fp5,"Id:     %s\n",a[i].id);
            fprintf(fp5,"Golch:  %.2f\n",a[i].golch); 
		    fprintf(fp5,"\n");
		}
	
	
}

