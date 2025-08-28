#include <stdio.h>

int main(void){
    char caractere;
    printf("Do you agree? ");
    scanf("%c", &caractere);

    if (caractere == 'Y' || caractere == 'y'){
        printf("Agreed.\n");
    } else {
        if (caractere == 'N' || caractere == 'n'){
            printf("Not agreed.\n");
        }
    }
}