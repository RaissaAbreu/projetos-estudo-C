//cria um array de inteiros dinamicamente com x posições e preencha todas as posições com o valor 10 e depois imprima o vetor 

#include<stdio.h>
#include<stdlib.h>  

int main() {
    int x;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &x);
    
    int *vetor = (int*) malloc(x * sizeof(int));
    if (vetor == NULL) {
        printf("Erro na alocação de memória!\n");
        return 1; // Sai do programa com erro
    }

    for (int i = 0; i < x; i++) {
        vetor[i] = 10; // Preenche todas as posições com o valor 10
    }

    printf("Vetor preenchido:\n");
    for (int i = 0; i < x; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    free(vetor); // Libera a memória alocada
    return 0;
}