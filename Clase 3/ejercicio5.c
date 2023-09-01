#include <stdio.h>                 
#include <stdlib.h>    
#include <math.h>     


// area rectangulo base * altura
// perimetro = 2*(base+altura)
// diagonal = raiz de (a^2 + b^2)

// El usuario debe poder ingresar los lados de un rectangulo y el programa calcula con esos datos la diagonal principal del rectangulo, superficie y perimetro.
// Mostrar al usuario los resultados

int main()
{

    float lado1,lado2,area,diagonal,perimetro;
    
    printf("Ingrese un lado del triangulo: \n");
    scanf("%f", &lado1);

    printf("Ingrese otro lado del triangulo: \n");
    scanf("%f", &lado2);

    diagonal = sqrt(pow(lado1, 2) + pow(lado2, 2));  // sqrt raiz, p2ow(variable, a las 2)
    
    printf("la diagonal es:  %f\n", diagonal);

    perimetro = (lado1*2) + (lado2*2);

    printf("el perimetro es:  %f\n", perimetro);

    area = (lado1*lado2);

    printf("el area es:  %f\n", area);

    system("pause");
    return 0;
}

