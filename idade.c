#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade); // lê um inteiro e coloca na variável idade

    printf("Você tem %d anos.\n", idade);

    return 0;
}