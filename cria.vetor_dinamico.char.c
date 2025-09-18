//cria um array (vetor) dinamicamente com x posições do tipo char e preencha todas as posições com o caractere 'A' e depois imprima o vetor

#include<stdio.h>
#include<stdlib.h>  

int main() {
    int x;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &x);
    
    char *vetor = (char*) malloc(x * sizeof(char));
    if (vetor == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1; // Sai do programa com erro
    }

    for (int i = 0; i < x; i++) {
        vetor[i] = 'A'; // Preenche todas as posições com o caractere 'A'
    }

    printf("Vetor preenchido:\n");
    for (int i = 0; i < x; i++) {
        printf("vetor[%d] = %c\n", i, vetor[i]);
    }

    free(vetor); // Libera a memória alocada
    return 0;
}