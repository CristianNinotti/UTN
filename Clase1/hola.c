#include <stdio.h>                  /*  Me permite llamar a la funcion printf Libreria para importar las funciones  de entrada y salida ejemplo: print f, put, fprintf  */
#include <stdlib.h>                 /*  Me permite llamar a la funcion system */

int main()                          /* Siempre int main () para declarar una funcion en C */
{
    printf("Hola mundo\n");         /* \n salto de linea */
    
    system("pause");

    return 0;
}

/*                                  No hace falta declarar return 0 si se usa void main en vez de int main
void main()
{

}
*/

