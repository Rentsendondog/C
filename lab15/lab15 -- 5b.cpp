#include <stdio.h>
#include <stdlib.h>

struct Student {
       char fname[20], lname[20], id[10];
       float golch;
};

int main() {
	FILE *fp5b;
	int i, n;
	printf("Oyutnii too :");
	scanf("%d",&n);
	struct Student a[n];
	fp5b = fopen("input5b.txt", "w");
	for(i = 0; i < n; i++)
	{
//		printf("-----------%d - r oyutan--------\n\n",i);
//	    printf("Ner:    ");
	    scanf("%s",a[i].fname);
//        printf("\nOvog:   ");
        scanf("%s",a[i].lname);
//        printf("\nId:     ");
        scanf("%s",a[i].id);
//        printf("\nGolch:  ");
		scanf("%f",&a[i].golch); 
//		printf("\n");
		fwrite(a, sizeof(struct Student ), n, fp5b);
	}
	

//	for(i = 0; i < n; i++)
//	{
//       fwrite(a, sizeof(struct Student ), n, fp5b); 
//	}
		
//	 fwrite(a, sizeof(struct Student ), n, fp5b);
	 fclose(fp5b);		
}

