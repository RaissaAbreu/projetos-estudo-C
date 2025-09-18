#include<stdio.h>
// Parâmetro por valor
void duplica(int x){
    x = x * 2;
    printf("Dentro da função: %d\n", x);
}
// Parâmetro por referência
void duplica_vetor(int x[], int tam) {
    int i;
    for(i = 0; i < tam; i++)
        x[i] = x[i] * 2;
}
int main() {
    int a = 5, i, tam = 3;
    /*printf("Valor de a antes da função: %d\n", a);
    duplica(a);
    printf("Valor de a após a função: %d\n", a);*/
    int vetor[3] = {1, 2, 3};
    printf("\nANTES DA FUNÇÃO\n");
    for(i = 0; i < tam; i++)
        printf("%d\n", vetor[i]);
    duplica_vetor(vetor, tam);
    printf("\nAPÓS A FUNÇÃO\n");
    for(i = 0; i < tam; i++)
        printf("%d\n", vetor[i]);
    
        return 0;
}