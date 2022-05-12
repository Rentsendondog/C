#include <stdio.h>

int main () {
    int i, a[100];
    printf("Elemnetuudiig oruul:\n");
    for(i = 0; i < 5; i++)
        scanf("%d",a + i); // &a[i]
        
    // xevlex uildel xiine uu.
    for(i = 0; i < 5; i++)
        printf("%d ",*(a + i));
}

