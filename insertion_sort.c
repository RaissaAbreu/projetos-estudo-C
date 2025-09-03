#include <stdio.h>
void insertionSort(int A[], int qtdElementos){
    int i, j;
    int chave;
    for(j = 1; j < qtdElementos; j++) {
        chave = A[j];
        i = j - 1;
        while(i >= 0 && A[i] > chave) {
            A[i + 1] = A[i];
            i = i - 1;
        }
        A[i + 1] = chave;
    }
}
int main() {
    int vetor[] = {10, 8, 4, 20, 5, 0, 1};
    const int SIZE = 7;
    int i;
    insertionSort(vetor, SIZE);
    for(i = 0; i < 7; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}