#include <stdio.h>
int fatorial_simples(int n) {
    int i, m = 1;
    for(i = 1; i <= n; i++) {
        m = m * i;
    }
    return m;
}
int fatorial_recursivo(int n) {
    printf("Chamada %d\n", n);
    //caso base
    if(n == 1) return 1;
    //recursão
    int result = n * fatorial_recursivo(n-1); 
    printf("Chamada %d => Retorno: %d\n", n, result);
    return result;
}
int main() {
    int n = 5; 
    printf("%d\n", fatorial_recursivo(n));
    return 0;
}