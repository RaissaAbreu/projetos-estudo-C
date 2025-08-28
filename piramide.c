#include <stdio.h>

int main() {
    int n;

    // Entrada do tamanho
    printf("Digite o tamanho da sua pirâmide: ");
    scanf("%i", &n);

    // Validação
    if (n < 1 || n > 8) {
        printf("Error: NUM precisa ser entre 1 e 8.\n");
        return 1;
    }

    // Construção da pirâmide
    for (int i = 0; i < n; i++) {
        // 1. Espaços à esquerda
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // 2. Blocos '#'
        for (int k = 0; k <= i; k++) {
            printf("#");
        }

        // Pular para próxima linha
        printf("\n");
    }

    return 0;
}
