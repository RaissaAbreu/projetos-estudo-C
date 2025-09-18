//cadastro de produtos e soma do estoque

#include <stdio.h>
#include <stdlib.h>

struct Produto {
    char nome[50];
    float preco;
    int quantidade;
};

int main() {
    int num_produtos;
    printf("Quantos produtos deseja cadastrar? ");
    scanf("%d", &num_produtos);

    // Alocação dinâmica do array de produtos
    struct Produto *produtos = malloc(num_produtos * sizeof(struct Produto));
    if (produtos == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    float soma_preco = 0;
    int soma_quantidade = 0;

    for (int i = 0; i < num_produtos; i++) {
        printf("Digite o nome, preço e quantidade do produto %d:\n", i + 1);
        scanf("%49s", produtos[i].nome);
        scanf("%f", &produtos[i].preco);
        scanf("%d", &produtos[i].quantidade);

        soma_preco += produtos[i].preco;
        soma_quantidade += produtos[i].quantidade;
    }

    printf("\nResumo do estoque:\n");
    printf("→ Soma das quantidades: %d\n", soma_quantidade);
    printf("→ Soma dos preços: %.2f\n", soma_preco);
    float valor_total = soma_preco * soma_quantidade;
    printf("→ Valor total do estoque: %.2f\n", valor_total);

    free(produtos); // Libera a memória alocada
    return 0;
}
