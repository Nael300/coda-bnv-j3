#include <stdio.h>

int main(void) {
    char mot[100];

    printf("Entrez un mot : ");
    if (scanf("%s", mot) != 1) {
        return 1;
    }

    for (int i = 0; i < 5; i++) {
        printf("%s\n", mot);
    }

    return 0;
}
