#include<stdio.h>
// Parâmetro por referência
void duplica(int *x){
    *x = *x * 2;
}
int main() {
    int a = 5;
    int *pa = &a;

    printf("Valor: %d\n", *pa);
    printf("Endereço: %p\n", pa);
    
    printf("Valor de a antes da função: %d\n", a);
    duplica(pa);
    printf("Valor de a após a função: %d\n", a);
}