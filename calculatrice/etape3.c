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

    return 0;
}
