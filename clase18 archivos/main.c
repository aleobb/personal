#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    id,first_name,last_name,is_empty
    1,Eric,Knight,false
    */

    FILE* pData;


    char id[4096];
    char nombre[4096];
    char apellido[4096];
    char vacio[4096];

    pData = fopen("data.csv", "r"); // devuelve un puntero a archivo y lo guardo en pData
    if (pData != NULL)
    {
        printf("Todo ok.\n\n\n");
    }
    else
    {
        printf("Todo mal.\n\n\n");
    }

    while(!feof(pData)) // while(feof(pData)!= true)
    {
        /*cantidadLeidos = fread(auxString+(QTY-60), sizeof(char),60,pData);

        pChar=realloc(auxString, sizeof(char)*(QTY+60));
        if(pChar == NULL)
            break;

        auxString = pChar;
        QTY=QTY+60;*/

        fscanf(pData,"%[^,],%[^,],%[^,],%[^\n]",id,nombre,apellido,vacio);
        printf("%s--%s--%s--%s\n",id,nombre,apellido,vacio);
    }

    return 0;
}

