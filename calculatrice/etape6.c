if (operateur == '+') {
    int resultat = nombre_1 + nombre_2;
    printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
} else if (operateur == '-') {
    int resultat = nombre_1 - nombre_2;
    printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
} else if (operateur == '*') {
    int resultat = nombre_1 * nombre_2;
    printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
} else if (operateur == '/') {
    if (nombre_2 == 0) {
        printf("Il est mathématiquement impossible de diviser par 0.\n");
    } else {
        float resultat = (float)nombre_1 / nombre_2;
        printf("%d %c %d = %.2f\n", nombre_1, operateur, nombre_2, resultat);
    }
} else if (operateur == '%') {
    if (nombre_2 == 0) {
        printf("Il est mathématiquement impossible de diviser par 0.\n");
    } else {
        int resultat = nombre_1 % nombre_2;
        printf("%d %c %d = %d\n", nombre_1, operateur, nombre_2, resultat);
    }
} else {
    printf("L'opérateur n'est pas reconnu.\n");
}
