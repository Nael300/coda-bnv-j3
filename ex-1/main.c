#include <stdio.h>

int main(void) {
    int nombre;

    printf("Entrez un nombre entier : ");
    if (scanf("%d", &nombre) != 1) {
        return 1;
    }

    if (nombre > 42) {
        printf("Le nombre est supérieur à 42.\n");
    } else if (nombre < 42) {
        printf("Le nombre est inférieur à 42.\n");
    } else {
        printf("Le nombre est égal à 42.\n");
    }

    return 0;
}
