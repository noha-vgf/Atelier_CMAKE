#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculator.h"

int main(int argc, char *argv[])
{
    if (argc < 3) {
        printf("Erreur de parametres\n");
        return 1;
    }

    char *op = argv[1];

    // ✅ CAS "car" = 1 seul paramètre
    if (strcmp(op, "car") == 0) {
        double a = atof(argv[2]);
        printf("%g\n", _car(a));
        return 0;
    }

    // ⬇️ à partir d’ici : opérations classiques à 2 paramètres
    if (argc < 4) {
        printf("Erreur de parametres\n");
        return 1;
    }

    double a = atof(argv[2]);
    double b = atof(argv[3]);

    if (strcmp(op, "add") == 0) printf("%g\n", _add(a, b));
    else if (strcmp(op, "sub") == 0) printf("%g\n", _sub(a, b));
    else if (strcmp(op, "mul") == 0) printf("%g\n", _mul(a, b));
    else if (strcmp(op, "div") == 0) printf("%g\n", _div(a, b));
    else {
        printf("Erreur de parametres\n");
        return 1;
    }

    return 0;
}
