#include<stdio.h>
#include<string.h>
enum dias {
    domingo = 1,
    segunda,
    terca,
    quarta,
    quinta,
    sexta,
    sabado
};
int main() {
    int dia;
    printf("Informe um número de dia (1 a 7): ");
    scanf("%d", &dia);
    switch(dia) {
        case domingo:
            printf("Domingo\n");
            break;
        case segunda:
            printf("Segunda\n");
            break;
        case terca:
            printf("Terça\n");
            break;
        case quarta:
            printf("Quarta\n");
            break;
        case quinta:
            printf("Quinta\n");
            break;
        case sexta:
            printf("Sexta\n");
            break;
        case sabado:
            printf("Sábado\n");
            break;
        default:
            printf("INVÁLIDO!\n");
            break;
    }
    return 0;
}