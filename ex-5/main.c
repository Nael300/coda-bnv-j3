#include <stdio.h>

int main(void) {
    char symbole;
    int nombre;

    printf("Entrez un symbole (+ ou -) : ");
    if (scanf(" %c", &symbole) != 1) {
        return 1;
    }

    printf("Entrez un nombre différent de 0 : ");
    if (scanf("%d", &nombre) != 1 || nombre == 0) {
        return 1;
    }

    if (symbole == '+') {
        for (int i = 0; i <= nombre; i++) {
            printf("%d\n", i);
        }
    } else if (symbole == '-') {
        for (int i = nombre; i >= 0; i--) {
            printf("%d\n", i);
        }
    } else {
        printf("Le symbole n'est pas reconnu.\n");
    }

    return 0;
}
