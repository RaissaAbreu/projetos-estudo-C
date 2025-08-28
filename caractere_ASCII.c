/*
Leia uma cadeia de caracteres com, no máximo, 20 caracteres.
Considere que haja apenas letras minúsculas e maiúsculas.
Transformar maiúsculas em minúsculas e minúsculas em maiúsculas
Imprimir a frase modificada
*/
#include <stdio.h>
#include <string.h>
int main(){
    char palavra[21];
    int i;
    printf("Digite uma palavra com letras maiúsculas e minúsculas: ");
    fgets(palavra, 20, stdin);
    printf("Palavra lida: %s, tamanho: %lu", palavra, strlen(palavra));
    // Caractere de fim de string: \0 ou 0 ou NUL
    for(i = 0; i < strlen(palavra); i++) {
        printf("\nPosição: %d | Caractere: %c | ASCII: %d\n", i, palavra[i], (int)palavra[i]);
    }
    
    return 0;
}