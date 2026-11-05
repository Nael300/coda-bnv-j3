if (operateur == '+') {
    int resultat = nombre_1 + nombre_2;
} else if (operateur == '-') {
    int resultat = nombre_1 - nombre_2;
} else if (operateur == '*') {
    int resultat = nombre_1 * nombre_2;
} else if (operateur == '/') {
    if (nombre_2 == 0) {
        printf("Il est mathématiquement impossible de diviser par 0.\n");
    } else {
        float resultat = (float)nombre_1 / nombre_2;
    }
} else if (operateur == '%') {
    if (nombre_2 == 0) {
        printf("Il est mathématiquement impossible de diviser par 0.\n");
    } else {
        int resultat = nombre_1 % nombre_2;
    }
} else {
    printf("L'opérateur n'est pas reconnu.\n");
}
