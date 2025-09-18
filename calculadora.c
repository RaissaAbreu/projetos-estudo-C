//Calculadora simples  - Peça dois números e uma operação (+, -, *, /) e mostre o resultado.

//Utilize switch para escolher a operação.

#include <stdio.h>

int main (){
    int num1, num2;
    char op;
    float resultado;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite a operação (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op){
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if(num2 != 0){
                resultado = (float)num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            }else{
                printf("Erro: Divisão por zero!\n");
            }
            break;
        default:
            printf("Operação inválida!\n");
    }

    return 0;
}