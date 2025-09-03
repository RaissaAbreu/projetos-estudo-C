#include <stdio.h>

void somarLinhas(int matriz[3][3]) {
    int i, j;
    int s = 0;
    for(i = 0; i < 3; i++) {
        s = 0;
        for(j = 0; j < 3; j++) {
            s += matriz[j][i];    
        }
        printf("Linha %d: %d\n", i, s);
    }
}

int main() {
    int matriz[3][3] = { {1, 2, 3}, {3, 4, 5}, {5, 6, 7}};
    int i, j;
    //percorrerMatriz(matriz);
    somarLinhas(matriz);    
    //somarColunas(matriz);
}