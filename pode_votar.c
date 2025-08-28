#include <stdio.h>

int main (){
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade < 16){
      printf("Você não pode votar");  
    }
        
    else if (idade > 16 && idade < 18){
        printf("Você pode votar, mas não é obrigado");
    }
    else if (idade >= 18 && idade < 70){
        printf("Você é obrigado a votar");
    }
    else if (idade >= 70){
        printf("Você pode votar, mas não é obrigado");

    }
        
    }


