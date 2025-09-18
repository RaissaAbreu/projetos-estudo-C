// ver na prática a diferença entre passagem por valor e passagem por referência em C

#include <stdio.h>
#include <stdlib.h>

int A = 10;
int trocar(int a, int b, int *c){
    a = a * 2;
    b = b * 2;
    *c = *c * 2;

    printf("Dentro da função trocar:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", *c);
    return 0;
}

int main (){
    int b = 20;
    int c = 30;
    printf("Antes da função trocar:\n");
    printf("a = %d | b = %d | c = %d\n", A, b, c);

    trocar(A, b, &c);

    printf("Depois da função trocar:\n");
    printf("a = %d | b = %d | c = %d\n", A, b, c);
    return 0;
}