# include <stdio.h>

void percorrerMatriz(int matriz[3][3]) {
    int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento[%d][%d] = %d\n", i, j, matriz[i][j]);
        }
    }
}

int main() {
    int matriz[3][3] = { {1, 2, 3}, {3, 4, 5}, {5, 6, 7}};
    int i, j;
    percorrerMatriz(matriz);
    //somarLinhas(matriz);    
    //somarColunas(matriz);
}