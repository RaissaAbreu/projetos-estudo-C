#include <stdio.h>

int main (){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    int soma_digitos = 0;
    while (numero > 0) {
        soma_digitos = soma_digitos + numero % 10;
        numero = numero / 10; 
    }
    printf("A soma dos dígitos é: %d", soma_digitos);
    return 0;
}