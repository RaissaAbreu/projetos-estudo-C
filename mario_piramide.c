#include <stdio.h>

int main()
{
  int n;

  

  // check command-line arguments
  printf("Digite a altura da pirâmide: ");
  scanf("%i", &n);

  if (n < 1 || n > 8) {
    printf("Error: NUM precisa ser entre 1 e 8.\n");
    return 1;
  }

  // main block
 
  for (int i = 1; i <= n; i++) {
    // Espaços à esquerda
    for (int espacos = 0; espacos < n + 1; espacos++) {
        printf(" ");
    }
    
    // Símbolos #
    for (int j = 0; j < i; j++) {
        printf("#");
    }
    // Pular para próxima linha
    printf("\n");
}

  
}
