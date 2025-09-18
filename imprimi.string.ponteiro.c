//imprimir cada caractere de uma string sem utilizar o operador []
#include<stdio.h>
#include<string.h>
typedef char* string;

int main() {        
    string s = "Curso de C";
    int i = 0;
    while (*(s+i) != '\0') {
        printf("Caractere %d: (%c)\n", i, *(s+i));
        i++;
    }
return 0;
}
