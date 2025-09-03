#include <stdio.h>
int main() {
    int vetor[10], i;
    int n;
    
    for(i = 0; i < 10; i++) {
        vetor[i] = i * 2;
        printf("%d\n", vetor[i]);
    }
    
    printf("Tamanho do vetor: %lu", sizeof(vetor) / sizeof(vetor[0]));
    
    
    vetor[i] = i * 2;
    return 0;
}