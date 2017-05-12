#include <stdio.h>
#include <stdlib.h>

/*
direccion &variable
variable = *puntero // leer // variable = puntero->campo
*puntero = 8 // escribir // puntero -> campo = 8
*/





void funcion(int* a, int* b, int* resultado)
{
*resultado=*a+*b;
}

void swap(int* a, int* b)
{
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
}

int main()
{

    int res, num1, num2;

    printf("ingrese num 1\n\n\n");
    scanf("%d",&num1);
    printf("ingrese num 2\n\n\n");
    scanf("%d",&num2);

    funcion(&num1, &num2, &res);
    printf("el restultado es: %d\n\n\n",res);

    swap(&num1, &num2);
    printf("num1: %d\n\n\n",num1);
    printf("num2: %d\n\n\n",num2);

    char cadena[8]="hola";
    char cadena2[]="hola";
    char cadena3="hola";
    printf("direccion cadena: 0x%x\n",cadena);
    printf("direccion cadena2: 0x%x\n",cadena2);
    printf("direccion cadena3: 0x%x\n",cadena3);


    return 0;
}
