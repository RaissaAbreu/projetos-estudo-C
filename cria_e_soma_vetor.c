#include <stdio.h>
int main() {
    int n, i;
    // double vetor[] = {1.5, 2.7, 4.8, 10.0, 0.0, 1.0, 2.8, 8.0, 9.0, 2.0};
    double vetor[10], aux, soma = 0.0;
    printf("Informe o valor de n: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Informe o valor para a posição %d: ", i);
        scanf("%lf", &aux);
        vetor[i] = aux;
    }
    printf("\n****VALORES LIDOS:\n");
    for(i = 0; i < n; i++) {
        printf("vetor[%d] = %lf\n", i, vetor[i]);
    }
    for(i = 0; i < n; i++) {
        soma += vetor[i];
    }
    printf("\nSoma dos valores: %lf\n", soma);
    return 0;
}