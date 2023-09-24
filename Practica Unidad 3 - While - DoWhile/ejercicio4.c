
// validacion usando do-while 
         
         /*/   do
            {
                printf("Ingrese la calificacion %i: \n", j);
                scanf("%f", &notaIngresada);
                if(notaIngresada <= 0 || notaIngresada > 10)
                {
                    printf("Nota invalida\n");
                }
            } while (notaIngresada <= 0 || notaIngresada > 10);
            
           
            // validacion usando while
            printf("Ingrese la calificacion %i: \n", j);
            scanf("%f", &notaIngresada);
            while (notaIngresada <= 0 || notaIngresada > 10)
            {
                printf("Nota invalida\n");
                printf("Ingrese la calificacion %i: \n", j);
                scanf("%f", &notaIngresada);
            } PROFESORA
            */




/* 
4. Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
calculando y por último, el promedio general del curso. */


#include <stdio.h>
#include <stdlib.h>

void main ()
{
    int alumnos, parciales, contador;
    float nota, sumador, promedio;
    printf("Ingrese la cantidad de alumnos \n");
    scanf("%d", &alumnos);
    printf("Ingrese la cantidad de parciales \n");
    scanf("%d", &parciales);

    for (int i = 1; i <= alumnos; i++)
    {
        contador = 0;
        sumador = 0;
        printf("Alumno 1 \n", i);
            for (int j = 1; j <= parciales; j++)
            do
            {
            printf("Ingrese la nota del parcial entre 1 y 10 \n");
            scanf("%f", &nota);
            if (nota > 0 && nota <= 10)
            {
                contador ++;
                sumador = sumador + nota;
            }
            else
            {    
                printf("Ingrese una nota valida entre 1 y 10");
            }
            
            } while (nota <= 0 || nota > 10);
        promedio = sumador / contador;
        printf("El alumno %d tiene un promedio de %.2f \n", i, promedio);    
    }

    system("pause");
}