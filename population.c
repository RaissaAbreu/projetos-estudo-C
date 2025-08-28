#include <stdio.h>
#include <stdlib.h>

#define R_INC 3
#define R_DEC 4

int main() {

  int start, end;
  int populacao;
  int nascimento;
  int morte;
  int anos = 0;

  printf("Entre com inicial: ");
  scanf("%d", &start);
  printf("  Entre com final: ");
  scanf("%d", &end);

  if (start <= 9) {
    printf("Error: START precisa ser maior que 9.\n");
    return 1;
  }
  
  if (end <= start) {
    printf("Error: END precisa ser maior que START.\n");
    return 1;
  }

  // calculate the number of years
  populacao = start;
  while (populacao < end){

    nascimento = populacao/R_INC;
    morte = populacao/R_DEC; 
    populacao = populacao + nascimento - morte;

    anos++;
  printf("Anos: %d, População: %d\n", anos, populacao);
  }
	     
  // print result
  printf("Years: %i\n", anos);
  return 0;
}