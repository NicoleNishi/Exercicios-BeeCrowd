#include <stdio.h>
#include <stdlib.h>

int comp (const void * a, const void * b) {
    return *(int *) a - *(int *) b;
}
 
int main() {
    int numero[3], ordenado[3];
    
    for (int j = 0; j < 3; j++) {
        scanf("%d", &numero[j]);
        ordenado[j] = numero[j];
    }
    
    qsort(numero, 3, sizeof(int), comp);
    
    for (int i = 0; i < 3; i++) {
        printf("%d\n", numero[i]);
    }
    
    printf("\n");
    
    for (int k = 0; k < 3; k++) {
        printf("%d\n", ordenado[k]);
    }
    return 0;
}