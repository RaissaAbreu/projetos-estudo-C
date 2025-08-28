#include <stdio.h>

int multiplicacao(int a, int b){
    return a*b;
}


int main (){
    int val1, val2,result;
    printf("Digite o primeiro valor: ");
    scanf("%d", &val1);
    printf("Digite o segundo valor: ");
    scanf("%d", &val2);

    result=multiplicacao(val1,val2);
    printf("O resultado da multiplicação é: %d\n", result);
    return 0;
}