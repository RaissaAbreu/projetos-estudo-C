#include <stdio.h>

int main()
{
  int altura;
  int largura;

  largura = altura + 1;

  // check command-line arguments
  printf("Digite a altura da pirâmide: ");
  scanf("%i", &altura);

  if (altura < 1 || altura > 8) {
    printf("Error: NUM precisa ser entre 1 e 8.\n");
    return 1;
  }

  // main block
 
  for (int i = 0; i <= altura; i++){
    for (int j = 0; j < i- 1; j++){
        printf('#');

    }
  }
  
}
