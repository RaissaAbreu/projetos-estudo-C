//aloque dinamicamente uma matriz de "m" por "n" posições para cada posição (i,j) atribua o valor de ixj e imprima a matriz

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num_linhas, num_colunas;
    int i, j;
    int **matriz;

    if (argc == 3){
        num_linhas = atoi(argv[1]);
        num_colunas = atoi(argv[2]);
        printf("Número de linhas: %d | Número de colunas: %d\n", num_linhas, num_colunas);

        //alocação da matriz
        matriz = (int**) malloc(num_linhas * sizeof(int*));
        for (i = 0; i < num_linhas; i++){
            for(j=0; j < num_colunas; j++){
                matriz[i] = (int*) malloc(sizeof(num_colunas * sizeof(int)));
            }
        }
        //atribuição dos valores
        for (i = 0; i < num_linhas; i++){
            for(j=0; j < num_colunas; j++){
                matriz[i][j] = (i+1) * (j+1);
            }
        }
        //impressão da matriz
        for (i = 0; i < num_linhas; i++){
            for(j=0; j < num_colunas; j++){
                printf("Matriz na posição [%d][%d] = %d\n", i, j, matriz[i][j]);
            }
        }
        //liberação da memória 
        for (i = 0; i < num_linhas; i++){
            free(matriz[i]);
        }
        free(matriz);
    }
    else{ 
        printf("Número de argumentos inválido!\n");
        return 1;
    }
    return 0;



}