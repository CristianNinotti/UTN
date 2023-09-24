/* 10- Pedir al usuario que ingrese un número del 1 al 12 e indicar a qué mes corresponde
dicho número (por ejemplo: si ingresa el número 2 se deberá mostrar febrero en la
consola, si ingresa el 8, agosto, etc.) (realizar el ejercicio primero utilizando estructura
if y luego estructura switch). */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numMes;

    printf("Ingrese el numero del mes para saber cual es \n");
    scanf("%i" , &numMes);

    if (numMes<=12 && numMes!=0)
    {
    switch (numMes)
        {
            case 1:
            printf("Es el mes de enero \n");
            break;
            case 2:
            printf("Es el mes de febrero \n");
            break;
            case 3:
            printf("Es el mes de marzo \n");
            break;
            case 4:
            printf("Es el mes de abril \n");
            break;
            case 5:
            printf("Es el mes de mayo \n");
            break;
            case 6:
            printf("Es el mes de junio \n");
            break;
            case 7:
            printf("Es el mes de julio \n");
            break;
            case 8:
            printf("Es el mes de agosto \n");
            break;
            case 9:
            printf("Es el mes de septiembre \n");
            break;
            case 10:
            printf("Es el mes de octubre \n");
            break;
            case 11:
            printf("Es el mes de noviembre \n");
            break;
            case 12:
            printf("Es el mes de diciembre \n");
            break;
        }
}
    else
    {
        printf("Ingrese un valoro valido entre el 1 y 12");
    }    
}
