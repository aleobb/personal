#include <stdio.h>
#include <stdlib.h>
#include "func.h"
#define MAX 100

int main()
{
int arreglo[MAX] = {87,120,1,-5,99};

int i, aux, index;

// loop que recorre todo el arreglo
for ( i = 0 ; i < 5 ; i++ ){
    index = i; // para saber en que posicion estoy cuando voy recorriendo
    aux = arreglo[i]; // guarda el valor del arreglo para esa posicion en aux

    /*
    va desde la posicion 1 en adelante, no puede empezar desde 0 porque a la izq de este no hay numeros para comparar
    luego compara si el valor que esta en la posicion actual es menor al numero que esta a su izquierda (si es menor, el numero que esta la izq es mayor que el actual en aux)
    despues si esto se cumple, los intercambio (izquierda por el numero actual)

     */
    while ( (index>0) && (aux < arreglo[index-1]) ){
    arreglo[index] = arreglo[index-1];
    index--;
    }
    arreglo[index] = aux;
}

for (i = 0 ; i < 5 ; i++){

    printf("%d\n\n",arreglo[i]);

}

}
