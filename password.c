#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

// don't touch
typedef char* string;


bool contemMaiuscula(string password) {
    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i])) {
            return true;
        }
    }
    return false;
}

bool contemMinuscula(string password) {
    for (int i = 0; password[i] != '\0'; i++) {
        if (islower(password[i])) {
            return true;
        }
    }
    return false;
}

bool contemDigito(string password) {
    for (int i = 0; password[i] != '\0'; i++) {
        if (isdigit(password[i])) {
            return true;
        }
    }
    return false;
}

bool contemSimbolo(string password) {
    for (int i = 0; password[i] != '\0'; i++) {
        char c = password[i];
        if (!isalnum(c)) { // se não é letra nem número → é símbolo
            return true;
        }
    }
    return false;
}

bool valid(string password) {
    if (!contemMaiuscula(password)) return false;
    if (!contemMinuscula(password)) return false;
    if (!contemSimbolo(password)) return false;
    if (!contemDigito(password)) return false;

    return true;
}

int main(void) {
    char str[100];
    
    printf("Entre sua senha (sem espaços): ");
    scanf("%s", str);

    if (valid(str)) {
        printf("Sua senha é forte! Parabéns!\n");
    } else {
        printf("Sua senha é fraca! Tente novamente.\n");
    }

    return 0;
}
