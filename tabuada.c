#include <stdio.h>


int main (){
    int num, i;
    printf("Digite um número inteiro:");
    scanf("%d", &num);
    printf("A Tabuado de %d é: \n", num);

    for (i = 0; i < 11; i++){
        printf("%d x %d = %d\n", num, i, num * i);
    }
    return 0;

}
