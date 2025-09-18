#include <stdio.h>
#include <stdlib.h>


// Retorna: posição do elemento na lista ORDENADA
int buscaBinaria(int* lista, int ini, int fim, int chave) {
    if(ini > fim) 
        return -1; //não encontrado
    int meio = (fim + ini) / 2;
    if(chave == lista[meio])
        return meio; //encontrado
    if(chave > lista[meio])
        return buscaBinaria(lista, meio + 1, fim, chave); //busca à direita
    
    if(chave < lista[meio])
        return buscaBinaria(lista, ini, meio - 1, chave); //busca à esquerda
}
int main(int argc, char* argv[]) {
    int chave = atoi(argv[1]);
    int lista[] = {1, 15, 20, 32, 45, 58};
    int pos = buscaBinaria(lista, 0, 5, chave);
    if(pos == -1) {
        printf("Não encontrado!\n");
    }
    else {
        printf("Posição %d\n", pos);
    }
    return 0;
}