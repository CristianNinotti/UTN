/* 11- Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar. */

#include <stdio.h>
#include <stdlib.h>

float main()
{
    float num1, num2, suma, resta, multiplicacion, division;
    int numOpcion;

    printf("Ingrese un numero \n");
    scanf("%f", &num1);

    printf("Ingrese otro numero \n");
    scanf("%f", &num2);

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;

    printf("Elija la opcion correcta dependiendo la operacion\n");
    printf("Opcion 1: Suma \n");
    printf("Opcion 2: Resta \n");
    printf("Opcion 3: Multiplicacion \n");
    printf("Opcion 4: Division \n");
    printf("Salir: Cualquier otra tecla o numero \n");

    scanf("%i", &numOpcion);

    switch (numOpcion)
    {
    case 1:
        printf("La suma es %.2f \n", suma);
        break;
    case 2:
        printf("La resta es %.2f \n", resta);
        break;
    case 3:
        printf("el resultado de la multiplicacion es %.2f \n", multiplicacion);
        break;
    case 4:
        printf("el resultado de la division es %.2f \n", division);
        break;
    default:
        break;
    }
    return 0;
    system("pause");
}