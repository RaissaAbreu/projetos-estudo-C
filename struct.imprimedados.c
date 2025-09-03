#include<stdio.h>
#include<string.h>
typedef struct Pessoa {
    int idade;
    char sexo;
    char estado_civil[10];
    char nome[30];
    double salario;
} Pessoa;
void mostrarPessoa(Pessoa p) {
    printf("Idade: %i\nSexo: %c\nEst. civil %s\nNome: %s\nSalário: %.2lf\n", p.idade, p.sexo, p.estado_civil, p.nome, p.salario);
}
int main() {
    Pessoa p1 = {18, 'M', "solteiro", "Pedro", 10000};
    Pessoa pessoas[3];
    //printf("%i, %c, %s, %s, %lf\n", p1.idade, p1.sexo, p1.estado_civil, p1.nome, p1.salario);
    mostrarPessoa(p1);
    // pessoas[0].idade = 20;
    // pessoas[0].sexo = 'F';
    // strcpy(pessoas[0].estado_civil, "casada");
    // strcpy(pessoas[0].nome, "Maria");
    // pessoas[0].salario = 12000;
    // mostrarPessoa(pessoas[0]);
    return 0;
}