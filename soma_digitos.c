#include <stdio.h>
#include <string.h>

int main() {
    char numero_str[100];  // Suporta até 99 dígitos + '\0'
    printf("Digite um número: ");
    scanf("%s", numero_str);

    int soma_digitos = 0;
    for (int i = 0; i < strlen(numero_str); i++) {
        if (numero_str[i] >= '0' && numero_str[i] <= '9') {
            soma_digitos += numero_str[i] - '0';  // Converte char para int
        }
    }

    printf("A soma dos dígitos é: %d\n", soma_digitos);
    return 0;
}

// OUTRA FORMA DE RESOLVER: 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char numero[100];  // Suporta até 99 dígitos + '\0'
    printf("Digite um número: ");
    scanf("%s", numero);

    int soma_digitos = 0;
    int i = 0;
    while (i < strlen(numero)) {
        // Verifica se o caractere é um dígito
        if (numero[i] >= '0' && numero[i] <= '9') {
            soma_digitos += numero[i] - '0';  // Converte char para int
        }
        i++;
    }

    printf("A soma dos dígitos é: %d\n", soma_digitos);
    return 0;
}
