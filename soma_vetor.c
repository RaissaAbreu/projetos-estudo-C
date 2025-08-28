#include <stdio.h>

float soma_valores(float vetor[], int n) {
    int i;
    float soma = 0.0;
    for(i = 0; i < n; i++) {
        soma += vetor[i];
    }
    return soma;
} 
int main() {
    float vetor[] = {2.5, 4.3, 10.6, -2.3, 198.2};
    int i, x = 1;
    int n = 3;
    printf("Soma: %f\n", soma_valores(vetor, n));
    for(i = 0; i < n; i++) {
        printf("vetor[%d] = %f\n", i, vetor[i]);
    }
    return 0;
}