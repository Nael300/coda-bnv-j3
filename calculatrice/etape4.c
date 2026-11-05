#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int nombre_1;
    int nombre_2;
    char operateur;

    printf("Bonjour !\n");
    printf("Choisissez un opérateur (+, -, *, /, %%) : ");
    scanf(" %c", &operateur);

    printf("Entrez un premier nombre : ");
    scanf("%d", &nombre_1);

    printf("Entrez un second nombre : ");
    scanf("%d", &nombre_2);

    if (operateur == '+') {
        printf("addition\n");
    } else if (operateur == '-') {
        printf("soustraction\n");
    } else if (operateur == '*') {
        printf("multiplication\n");
    } else if (operateur == '/') {
        printf("division\n");
    } else if (operateur == '%') {
        printf("modulo\n");
    } else {
        printf("L'opérateur n'est pas reconnu.\n");
    }

    return 0;
}
