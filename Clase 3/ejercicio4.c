#include <stdio.h>                 
#include <stdlib.h>    
#include <math.h>           


// superficie triangulo rectangulo =  base * altura/2
// perimetro = 2*(base+altura)
// hipotenusa = raiz de (a^2 + b^2)

// Solicitar ingresar dos lados de un triangulo rectangulo y calcular, la hipotenusa, el perimetro, la superficie. Imprima los resultados de las operaciones solicitadas.

int main()
{

    float lado1,lado2,superficie,hipotenusa,perimetro;
    
    printf("Ingrese un lado del triangulo: \n");
    scanf("%f", &lado1);

    printf("Ingrese otro lado del triangulo: \n");
    scanf("%f", &lado2);

    hipotenusa = sqrt(pow(lado1, 2) + pow(lado2, 2));  // sqrt raiz, p2ow(variable, a las 2)
    
    printf("la hipotenusa es:  %f\n", hipotenusa);

    perimetro = lado1 + lado2 + hipotenusa;

    printf("el perimetro es:  %f\n", perimetro);

    superficie = (lado1*lado2)/2;

    printf("la superficie es:  %f\n", superficie);

    system("pause");
    return 0;
}





// hipotenusa
// perimetro
//superficie