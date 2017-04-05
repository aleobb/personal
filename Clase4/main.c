#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#define MAX 100

int main()
{
    int i=5;
    int size=5;
    //int edad[MAX] = {22,11,33,55,66};
    int edad[MAX];
    char respuesta;
    int buffer;

    for(i=0; i<MAX;i++){

        printf("\nIngrese la edad de la persona %d: ", i);
        scanf("%d", &edad[i]);

        printf("\n\nDesea seguir ingresando? [s/n]");
        fflush(stdin);
        scanf("%c", &respuesta);

        if(respuesta!='s'&&respuesta!='S'){
            break;
        }
    }

    printf("\nEl promedio de las edades ingresadas es %.2f\n\n", promedio(edad, i+1));
    printf("\nEl minimo es %d\n\n", minimo(edad[]));
    printf("\nEl maximo es %d\n\n", maximo(edad[]));
    printf("Compactado eliminando posicion 2:\n\n");

    compactar(edad,2,size);
    for(i=0; i<size-1; i++)
    {
        printf("%d\n\n",edad[i]);
    }
    return 0;
}
