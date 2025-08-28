/*
Leia uma cadeia de caracteres com, no máximo, 20 caracteres.
Considere que haja apenas letras minúsculas e maiúsculas.
Transformar maiúsculas em minúsculas e minúsculas em maiúsculas
Imprimir a frase modificada
*/
#include <stdio.h>
int main(){
    char palavra[21];
    printf("Digite uma palavra com letras maiúsculas e minúsculas: ");
    fgets(palavra, 20, stdin);
    printf("Palavra lida: %s", palavra);
    // Caractere de fim de string: \0 ou 0 ou NUL
    return 0;
}
