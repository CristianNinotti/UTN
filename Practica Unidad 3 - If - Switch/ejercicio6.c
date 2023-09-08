/* Leer una nota de un alumno por consola e informar la condición del mismo. (menor
que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar
que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota
inválida”.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota1;

    printf("Ingrese su nota para verificar en que condicion esta \n");
    scanf("%i", &nota1);

   if (nota1<4)
   {
    printf("El alumno reprobo \n");
   }
        else if (nota1<6 && nota1>=4)
        {
                printf("El alumno es regular \n");
            }
            else if (nota1>=6 && nota1<=10)
            {
            printf("El alumno esta promocionado \n");
                }
                else
                {
                    printf("Ingrese una nota valida \n");
                }
}