#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

// don't touch
typedef char* string;

bool valid(string password) {
    bool has_lower = false;
    bool has_upper = false;
    bool has_digit = false;
    bool has_symbol = false;

    for (int i = 0; password[i] != '\0'; i++) {
        char c = password[i];
        
        if (islower(c)) {
            has_lower = true;
        }
        else if (isupper(c)) {
            has_upper = true;
        }
        else if (isdigit(c)) {
            has_digit = true;
        }
        else {
            has_symbol = true; // qualquer outro caractere vira símbolo
        }

        // Se já encontrou todos, pode encerrar mais cedo
        if (has_lower && has_upper && has_digit && has_symbol) {
            return true;
        }
    }

    return has_lower && has_upper && has_digit && has_symbol;
}

int main(void) {

    char str[100];
  
    printf("Entre sua senha (sem espaços): ");
    scanf("%s", str);
  
    if (valid(str)) {
        printf("Sua senha é forte! Parabéns!\n");
    }
    else {
        printf("Sua senha é fraca! Tente novamente.\n");
    }

    return 0;
}
