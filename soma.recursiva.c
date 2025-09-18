#include <stdio.h>
int somaLista(int* lista, int tam) {
    int i, soma = 0;
    while(i < tam) {
        soma += lista[i];
        i++;
    }
    return soma;
}
int somaLista_recursivo(int* lista, int ini, int tam) {
    printf("Somando ini = %d, tam = %d\n", ini, tam);
    if (ini >= tam) {
        printf("ini = %d | Result = %d\n", ini, 0);    
        return 0;
    }
    int result = lista[ini] + somaLista_recursivo(lista, ini + 1, tam);
    printf("Result = %d\n", result);
    return result;
}


int main() {
    int lista[] = {10, 11, 21, 35, 13};
    printf("Soma iterativa: %d | Soma recursiva: %d\n", somaLista(lista, 5), somaLista_recursivo(lista, 0, 5));
}