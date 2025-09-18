#include <stdio.h>
//rie uma struct Pessoa com os campos: nome, idade e altura.
struct Pessoa {
    char nome [50];
    int idade;
    float altura;

};

int main (){
    printf("Digite o nome, idade e altura da pessoa:\n");
    struct Pessoa p;
    scanf("%49s", p.nome);
    scanf("%d", &p.idade);
    scanf("%f", &p.altura); 
    printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", p.nome, p.idade, p.altura);
    return 0;
}