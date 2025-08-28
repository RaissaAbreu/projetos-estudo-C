#include <stdio.h>
#include <string.h>

// don't touch
typedef char* string;

int replace(string palavra) {
    int i;
    for (i = 0; i < strlen(palavra); i++) {
        switch (palavra[i]) {
            case 'a':
                palavra[i] = '6';
                break;
            case 'e':
                palavra[i] = '3';
                break;
            case 'i':
                palavra[i] = '1';
                break;
            case 'o':
                palavra[i] = '0';
                break;
            case 'u':
                break;
            default:
                break;
        }
    }
    return 0;
}


int main(int argc, string argv[]) {
    if (argc < 1) {
        printf("Erro: nenhum argumento fornecido.\n");
        return 1;
    }

    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    replace(palavra);

    printf("Palavra transformada: %s\n", palavra);

    return 0;
}


