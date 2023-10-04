/* 5. Dado el vector inflación {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9}
Cada ítem del vector representa la inflación de un mes de tal manera que el primer
ítem del vector que es 0.8 representa la inflación de Enero, y el último ítem del vector
que es 0.9 representa la inflación de diciembre. Se pide:
a. Informar la inflación anual
b. Informar la inflación más baja, junto con el nro. de mes. Por ejemplo: Mes 2 =
0.1
c. Informar la inflación más alta, junto con el nro. de mes. Por ejemplo: Mes 12 =
0.9 */

#include <stdio.h>
#include <stdlib.h>

void main()
{

float totalInflacion, menorInflacionMensual, mayorInflacionMensual;
int i, indiceMenorInflacionMensual, indiceMayorInflacionMensual;

float array[] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
menorInflacionMensual = array[0];
mayorInflacionMensual = 0;

for(i = 0; i < 12; i ++)
{
    totalInflacion = totalInflacion + array[i];

    if(array[i] < menorInflacionMensual) 
    {
        menorInflacionMensual = array[i];
        indiceMenorInflacionMensual = i+1;
    }
    if(array[i] > mayorInflacionMensual)
    {
        mayorInflacionMensual = array[i];
        indiceMayorInflacionMensual = i+1;
    }

}

printf("La inflacion anual total es %.2f \n", totalInflacion);
printf(" La inflacion menor en el mes %d es de %.2f \n", indiceMenorInflacionMensual, menorInflacionMensual);
printf(" La inflacion mayor en el mes %d es de %.2f \n", indiceMayorInflacionMensual, mayorInflacionMensual);


system("pause");
}