// 7. Diseñe un algoritmo que sume los 20 primeros números impares.

#include <stdio.h>
#include <stdlib.h>


int main() {
    int suma = 0;

    for (int i = 1; i < 20; i += 2) {
        suma = suma + i;

    }

    printf("La suma de los 20 primeros números impares es: %d\n", suma);

    return 0;
}