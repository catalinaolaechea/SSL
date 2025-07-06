#include <stdio.h>
#include <stdlib.h>
#include "tabla.h"

//fprintf(stdout, "salida\n") == printf("salida\n")
//fprintf(stderr, "error\n")
//    (0)    (1)   (2)    (3)
//./programa hola mundo mundooo

int main(int argc, char *argv[]) {
    if (argc < 3) {
        fprintf(stderr, "se necesita: %s <inicio> <fin> <incremento>(opcional)\n", argv[0]);
        return 1;
    }

    char *endptr;
    double inicio = strtod(argv[1], &endptr);
    if (*endptr != '\0') {
        fprintf(stderr, "Error: inicio no es una cadena numerica\n");
        return 1;
    }

    double fin = strtod(argv[2], &endptr);
    if (*endptr != '\0') {
        fprintf(stderr, "Error: fin no es una cadena numerica.\n");
        return 1;
    }

    double incremento = 1;
    if (argc >= 4) {
        incremento = strtod(argv[3], &endptr);
        if (*endptr != '\0') {
            fprintf(stderr, "Error: incremento no es una cadena numerica.\n");
            return 1;
        }
    }

    mostrar_tabla(inicio, fin, incremento);
    return 0;
}
