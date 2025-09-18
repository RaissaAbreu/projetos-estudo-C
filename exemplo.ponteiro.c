#include<stdio.h>
int main() {
    int k;
    k = 5;
    
    int *pk;
    pk = &k;
    printf("Valor de k: %d\n", k);
    printf("Valor de pk: %p\n", pk);
    printf("Valor apontado por pk: %d\n", *pk);
    return 0;
}