#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char palavra[21], palavra_modificada[21];
    int i;
    printf("Digite uma palavra com letras maiúsculas e minúsculas: ");
    fgets(palavra, 20, stdin);
    printf("Palavra lida: %s, tamanho: %lu\n", palavra, strlen(palavra));
    for(i = 0; i < strlen(palavra); i++) {
        printf("Posição: %d | Caractere: %c | ASCII: %d\n", i, palavra[i], (int)palavra[i]);
        if(palavra[i] >= 'a' && palavra[i] <= 'z'){
            palavra_modificada[i] = toupper(palavra[i]);
        }
        else {
            if(palavra[i] >= 'A' && palavra[i] <= 'Z') {
                palavra_modificada[i] = tolower(palavra[i]);
            }
        }
    }
    printf("Palavra modificada: %s\n", palavra_modificada);
    
    return 0;
}