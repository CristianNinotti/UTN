#include <stdio.h>
#include <stdlib.h>

void intercambio(int *a, int *b); // prototipo de la función intercambio
int main()
{
    int i = 3, j = 50;
    printf("i = %d y j = %d \n", i, j);

    printf("La direccion de i es %d \n", &i);
    printf("La direccion de j es %d \n", &j);

    intercambio(&i, &j); // se pasan a la función intercambio()  & si o si para las direcciones de memoria


    printf("i = %d y j = %d \n", i, j);


    printf("La direccion de i es %d \n", &i);
    printf("La direccion de j es %d \n", &j);


    system("pause");
    return 0;
}
void intercambio(int *a, int *b)
{

    printf("Estoy dentro de la funcion intercambio \n");
    printf("El valor del puntero de a es %d \n", a);
    printf("El valor del puntero de b es %d \n", b);


    printf("El valor de la variable a la que apunta a es %d \n", *a);
    printf("El valor de la variable a la que apunta b es %d \n", *b);

    int aux = *a; // asigna a la variable aux el valor de la variable a la que apunta  a(es decir, la variable i)

    *a = *b; // asigna el valor de variable que a la que apunta b, a la variable que a punta a

    *b = aux; // asigna el valor de aux a la variable que apunta b (es decir,la variable j)

    printf("Fin de la funcion intercambio \n");
}