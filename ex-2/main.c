#include <stdio.h>

int main(void) {
    char symbol;

    printf("Entrez un signe d'opération (+, -, /, *, %%) : ");
    if (scanf(" %c", &symbol) != 1) {
        return 1;
    }

    if (symbol == '+') {
        printf("L'opération est une addition.\n");
    } else if (symbol == '-') {
        printf("L'opération est une soustraction.\n");
    } else if (symbol == '*') {
        printf("L'opération est une multiplication.\n");
    } else if (symbol == '/') {
        printf("L'opération est une division.\n");
    } else if (symbol == '%') {
        printf("L'opération est un module.\n");
    } else {
        printf("L'opération n'existe pas.\n");
    }

    return 0;
}
