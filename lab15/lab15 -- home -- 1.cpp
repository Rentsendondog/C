#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *get_array_from_file(char fname[]){
        FILE *fp7;
		fp7 = fopen("fname.txt", "r");    
        int i, count = 0, j = 1;
        char c = getc(fp7);
        
        while(c != EOF) {
            if(c >= '0' && c <= '9')
        	    fname[count++] = c;
                c = getc(fp7);
        }
        
        int *p = (int *) malloc(sizeof(int) * (count + 1));
        p[0] = count;
        for(i = 0; i <= count; i++)
           // if(fname[i] >= '0' && fname[i] <= '9')
                 p[j++] = fname[i];

        
        fclose(fp7);
        return p;
}

int main ()
{
    int *a;
    char m[100];
    a = get_array_from_file(m);
    printf("%d ",a[0]);
    for(int i = 1; i <= *a; i++)
        printf("%c ",a[i]);
        
   free(a); // sanax oig choloolno
   return 0;
}
