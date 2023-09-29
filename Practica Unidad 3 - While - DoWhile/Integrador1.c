/* Ejercicio Integrador 1
La compañía que gestiona la autopista ha decidido cambiar las tarifas de peaje. Estas tarifas
dependen de:
● Tipo horario del día:
Horario A: horas de “Alta” congestión:
● Los automóviles con tres pasajeros o más no pagan peaje
● Los camiones pagan $300
● Las motos pagan $100
Horario B: horas de “Baja” congestión:
● Los automóviles pagan $150
● Los camiones pagan $200
● Las motos no pagan peaje
En este horario la tarifa es independientemente del número de pasajeros.
Escriba un programa que leyendo el tipo de vehículo, tipo de horario de congestión alta o baja
y el número de pasajeros, calcule la tarifa que le debe cobrar a un vehículo. Validar que el tipo
de vehículo sea uno de los mencionados y que el número de pasajeros no sea mayor a 5.
● Tipo de vehículo (camión, automóvil o moto) que desee utilizar la autopista
● Número de pasajeros que lleve */

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int horario, A, B, tipoVehiculo, cantPasajeros;
    int costoPeaje;

    printf("Ingrese el tipo de horario de gestion, 1 Para Alta o 2 Para Baja \n");
    scanf("%d", &horario);
    if (horario == 1)
    {

        printf("Ingrese la cantidad de pasajeros en su vehiculo \n");
        scanf("%d", &cantPasajeros);
        while (cantPasajeros > 4 || cantPasajeros < 1)
        {
            printf("Ingrese una cantidad de pasajeros validas, no deben ser superior a 4 ni menores a 1 \n");
            scanf("%d", &cantPasajeros);
        }
        do
        {
            printf("Ingrese el tipo de vehiculo \n");
            printf("1 - Camion \n");
            printf("2 - Automovil \n");
            printf("3 - Moto \n");
            scanf("%d", &tipoVehiculo);

            switch (tipoVehiculo)
            {
            case 1:
                costoPeaje = 300;
                printf("Su costo a abonar es de %d \n", costoPeaje);
                break;
            case 2:
                if (cantPasajeros >= 3)
                {
                    costoPeaje = 0;
                    printf("Su costo a abonar es de %d \n", costoPeaje);
                }
                else
                {
                    costoPeaje = 150;
                    printf("Su costo a abonar es de %d \n", costoPeaje);
                }
                break;
            case 3:
                costoPeaje = 100;
                printf("Su costo a abonar es de %d \n", costoPeaje);
            }

        } while (tipoVehiculo < 1 || tipoVehiculo > 4);
    }
    else if (horario == 2)
    {
        printf("Ingrese la cantidad de pasajeros en su vehiculo \n");
        scanf("%d", &cantPasajeros);
        while (cantPasajeros > 4 || cantPasajeros < 1)
        {
            printf("Ingrese una cantidad de pasajeros validas, no deben ser superior a 4 ni menores a 1 \n");
            scanf("%d", &cantPasajeros);
        }
        do
        {
            printf("Ingrese el tipo de vehiculo \n");
            printf("1 - Camion \n");
            printf("2 - Automovil \n");
            printf("3 - Moto \n");
            scanf("%d", &tipoVehiculo);

            switch (tipoVehiculo)
            {
            case 1:
                costoPeaje = 200;
                printf("Su costo a abonar es de %d \n", costoPeaje);
                break;
            case 2:
                costoPeaje = 150;
                printf("Su costo a abonar es de %d \n", costoPeaje);
                break;
            case 3:
                costoPeaje = 0;
                printf("Su costo a abonar es de %d \n", costoPeaje);
            }

        } while (tipoVehiculo < 1 || tipoVehiculo > 4);
    }
    system("pause");
}
