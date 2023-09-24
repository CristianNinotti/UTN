/* 9. Realizar un programa que permita ver información a un cliente de un banco. Para ello
el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero),
validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
ingreso de contraseña. Al loguarse correctamente presentar un menú con las
siguientes opciones:
1- Consultar saldo
2- Consultar CBU
3- Salir
Trabajar con las siguientes variables:
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
    int dni, pass, intentos;
    int cbu, saldo, opcion;
    int dniIngresado, passIngresado;

    dni = 34732713;
    pass = 1234;
    saldo = 150000;
    cbu = 986323456;
    intentos = 3;

    do
    {
        printf("Ingrese su usuario con dni \n");
        scanf("%d", &dniIngresado);
        printf("Ingrese su contrasenia \n");
        scanf("%d", &passIngresado);

        if (dni != dniIngresado || pass != passIngresado)
        {
            intentos = intentos - 1;
            printf("Alguno de los datos es incorrecto, reintente nuevamente. Le quedan %d intentos \n", intentos);
        }
        else
        {

            printf("Ha ingresado correctamente al sistema \n");
            do
            {
                printf("Que operacion desea realizar \n");
                printf("1 - Consultar saldo \n");
                printf("2 - Consultar CBU \n");
                printf("3 - Salir \n");
                scanf("%d", &opcion);
                switch (opcion)
                {
                case 1:
                    printf("Su saldo es de %d \n", saldo);
                    break;
                case 2:
                    printf("Su cbu es %d \n", cbu);
                    break;
                case 3:
                    printf("Ha salido del sistema \n");
                    break;
                default:
                    printf("Ingrese una opcion valida \n");
                    break;
                }
                
            } while (opcion != 3);
            break;
        }
        
    } while (intentos != 0);
    
    if (intentos == 0)
    {
    printf("Se le han agotado los intentos vuelva mañana o se le bloqueara la cuenta por seguridad \n");
    }
    else 
    {
        printf("Muchas gracias por elegir Ninotti Bank \n");
    }
    system("pause");
}