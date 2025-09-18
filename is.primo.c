//Números primos - Peça um número inteiro e diga se ele é primo ou não.

#include <stdio.h>

int main(){
    int num, i, cont = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++){
        if(num % i == 0){
            cont++;
        }
    }


    if(cont == 2){
        printf("O número %d é primo", num);
    }else{
        printf("O número %d não é primo", num);
    }

    return 0;
}