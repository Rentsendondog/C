#include <stdio.h>
#include <stdlib.h>


int* get_array(int size, int value);
int main(){
	int n, k = 1;
	printf("Sanah oin hemjeesiig og:\n");
	scanf("%d",&n);
	printf("Mallocoor duurgesen ni:\n");
	*get_array(n, k);
	
	
}

int* get_array(int size, int value){
    int *p = (int *) malloc(sizeof(int) * size);
    for(int i = 0; i < size; i++)
    {
    	*p = value;
    	printf("%d ",*p++);
	}
	free(p);
	p = NULL;
	return p;
	
}
