#include <stdio.h>
#include <assert.h>
#include "conversion.h"
#include "tabla.h"

void mostrar_tabla(double inicio, double fin, double incremento) {
    assert(inicio <= fin);
    assert(incremento > 0);

    fprintf(stdout, "TABLA DE CONVERSIONES\n");
    fprintf(stdout, "PSI\tKPA\n");

    for (double psi = inicio; psi <= fin; psi += incremento) {
        double kpa = psi_a_kpa(psi);
        printf("%.2f\t%.2f\n", psi, kpa);
    }
}
