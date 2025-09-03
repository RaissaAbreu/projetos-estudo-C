#include<stdio.h>
#include<string.h>
struct ponto {
    int x;
    int y;
};
struct contato {
    char nome[30];
    char telefone[10];
};
int main() {
    struct ponto p;
    struct contato c;
    strcpy(c.nome, "Rodrigo");
    strcpy(c.telefone, "311234598");
    printf("Nome: %s | Telefone: %s\n", c.nome, c.telefone);
    // printf("Coordenada x: "); scanf("%d", &p.x);
    // printf("Coordenada y: "); scanf("%d", &p.y);
    //printf("Coordenadas do ponto: (%d, %d)\n", p.x, p.y);
    return 0;
}