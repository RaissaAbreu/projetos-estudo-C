#include <stdio.h>
#include <string.h>

// don't touch
typedef char* string;

void replace(string input, string output) {
    int i;
    for (i = 0; i < strlen(input); i++) {
        switch (input[i]) {
            case 'a':
                output[i] = '6';
                break;
            case 'e':
                output[i] = '3';
                break;
            case 'i':
                output[i] = '1';
                break;
            case 'o':
                output[i] = '0';
                break;
            case 'u':
                output[i] = 'u'; 
                break;
            default:
                output[i] = input[i]; 
                break;
        }
    }
    output[i] = '\0'; 
}

int main(int argc, string argv[]) {

    char buffer[100];

    if (argc < 2) {
        printf("Usage: ./a.out <word>\n");
        return 1;
    }

    replace(argv[1], buffer);

    printf("%s\n", buffer);

    return 0;
}
