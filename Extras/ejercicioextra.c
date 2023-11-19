

#include <stdio.h>
#include <stdlib.h>

float ingresoCapital(float ingreso, float dinero);   // Prototipo funcion para ingresar dinero
float extraccionCapital(float retiro, float dinero); // Prototipo funcion para retirar dinero
                              
float main()
{
                  
    int opcion, operacionesMaximas;
    float capital, saldo, operacion, saldoAntesDeMovimiento, saldoDespuesDeMovimiento;
    float resumen[20];
    saldo = 100000;               // Se inicializa en ese valor segun la consigna
    operacionesMaximas = 0;

    do
    {
        printf(" 1-Ingreso de Dinero \n");
        printf(" 2-Extracci%cn \n", 162);
        printf(" 3-Consulta de Saldo \n");
        printf(" 4-Consulta de %cltimos movimientos \n", 163);
        printf(" 5-Salir \n");

        scanf("%d", &opcion);

        if (opcion < 1 || opcion > 5)
        {
            printf("Ingrese una opcion valida \n");
        }
        if (opcion == 1 || opcion == 2)
        {
            operacionesMaximas += 1;
        }

        switch (opcion)
        {
        case 1:
            saldoAntesDeMovimiento = saldo;
            saldo = ingresoCapital(capital, saldo);
            saldoDespuesDeMovimiento = saldo - saldoAntesDeMovimiento;
            printf("En su cuenta ahora tiene %.2f \n", saldo);
            resumen[operacionesMaximas] = saldoDespuesDeMovimiento;
            break;

        case 2:
            saldoAntesDeMovimiento = saldo;
            saldo = extraccionCapital(capital, saldo);
            saldoDespuesDeMovimiento = saldoAntesDeMovimiento - saldo;
            printf("En su cuenta ahora tiene %.2f \n", saldo);
            resumen[operacionesMaximas] = saldoDespuesDeMovimiento;
            
            break;

        case 3:
            printf("Su saldo es: %.2f \n", saldo);
            break;

        case 4:

            for (int i = 1; i <= operacionesMaximas; i++)
            {
                printf("Numero movimiento: %d  Importe: %.2f \n", i, resumen[i]);
            }

            break;

        case 5:
            printf("Gracias por elegir nuestro Banco, vuelva pronto \n");
            return 0;
            break;
        }
        

    } while (opcion < 1 || opcion > 5 || operacionesMaximas <= 20);

    system("pause");
}

float ingresoCapital(float ingreso, float dinero)
{

    printf("Ingrese el valor a ingresar en su cuenta Bancaria \n");
    scanf("%f", &ingreso);
    while (ingreso > 20000)
    {
        printf("El monto a ingresar en su cuenta no debe superar los $20.000 \n");
        printf("Reingrese el monto a depositar \n");
        scanf("%f", &ingreso);
    }

    dinero += ingreso;

    return dinero;
}

float extraccionCapital(float retiro, float dinero)

{

    printf("Ingrese el valor a retirar en su cuenta Bancaria \n");
    scanf("%f", &retiro);
    while (retiro > 20000)
    {
        printf("El monto a retirar en su cuenta no debe superar los $20.000 \n");
        printf("Reingrese el monto a extraer \n");
        scanf("%f", &retiro);
    }

    
    dinero -= retiro;

    return dinero;
}