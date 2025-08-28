#include <stdio.h>

int main (void){
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("Even\n");}

    else{
        printf("Odd\n");}
        

}