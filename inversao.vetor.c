//Inversão de vetor Leia 5 números inteiros em um vetor e depois mostre-os na ordem inversa.

#include <stdio.h>

int main (){
    int vetor [5], i;
    printf("Digite 5 números inteiros:\n");
    for (i = 0; i < 5; i++){
        scanf("%d", &vetor[i]);
    }
    printf("Números na ordem inversa:\n");
    for (i = 4; i >= 0; i--){
        printf("%d\n", vetor[i]);       
}
    return 0;
}