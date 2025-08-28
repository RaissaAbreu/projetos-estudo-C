#include <stdio.h>
#include <ctype.h>

float calc_hours(int horas[], int numero_semanas, char opcao){
    float total= 0;
    int i = 0;
    for (i=0; i < numero_semanas; i ++){
        total = total + horas[i];
    }
    float media = 0;
    media = total/numero_semanas;
    if (opcao == 'T'){
        return (float)total;
    } else {
        return (float)media;
    }
}

int main(){
    int numero_semanas, i; 
    char opcao;
    printf("número de semanas: ");
    scanf("%d", &numero_semanas);
    int horas [numero_semanas];

    for ( i = 0; i < numero_semanas; i++){
        printf("semana %d:", i+1);
        scanf ("%d", &horas[i]);
       
    }
    getchar();
    printf("entre T ou M:");
    scanf("%c", &opcao);
    opcao = toupper(opcao);
    while (opcao != 'T' && opcao != 'M'){
        printf("entre T ou M: ");
        getchar();
        scanf("%c", &opcao);
        opcao = toupper(opcao);
    }
    
    if (opcao == 'T'){
        printf("%.2f\n", calc_hours(horas, numero_semanas, opcao));
    }
    else if (opcao == 'M') {
        printf("%.2f\n", calc_hours(horas, numero_semanas, opcao));
    }


}