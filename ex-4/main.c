#include <stdio.h>

int main(void) {
    int nombre;

    printf("Entrez un nombre différent de 0 : ");
    if (scanf("%d", &nombre) != 1 || nombre == 0) {
        return 1;
    }

    if (nombre > 0) {
        for (int i = 0; i <= nombre; i++) {
            printf("%d\n", i);
        }
    } else {
        for (int i = 0; i >= nombre; i--) {
            printf("%d\n", i);
        }
    }

    return 0;
}

