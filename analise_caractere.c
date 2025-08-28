#include <stdio.h>
#include <string.h>
int main(){
    char texto[21], copia[21];
    int i = 0;
    printf("Informe o texto: ");
    fgets(texto, 20, stdin);
    printf("Texto lido: %s\n", texto);
    for(i = 0; i <= strlen(texto); i++) {
        printf("Posição %d | Caractere: %c (%d)\n", i, texto[i], texto[i]);
    }
    printf("Variável cópia: %s\n", copia);
    strcpy(copia, texto);
    printf("Variável cópia: %s", copia);
    return 0;
}