#include <stdio.h>

int main () {
    int nota, i;
    printf("Digite as 4 notas do aluno: \n");
    int soma = 0;
    for (i = 0; i < 4; i++) {
        scanf("%d", &nota);
        soma += nota;
    }
    float media = soma / 4.0;
    printf("A média do aluno é: %.2f\n", media);
    if (media >= 7) {
        printf("Aprovado\n");
    } else if (media >= 5) {
        printf("Recuperação\n");
    } else {
        printf("Reprovado\n");  
}
    return 0;
}   