#include <stdio.h>
#include <stdlib.h>

#include "usuario.h"


int initUsuario(Usuario usuarios[], int largoArray)
{
    int retorno = -1;
    int i;

    if(usuarios != NULL && largoArray > 0)
    {
        retorno = 0;
        for(i=0;i<largoArray;i++)
        {
            usuarios[i].isEmpty = 1;
        }
    }


    return retorno;
}

int proximoLugarVacioUsuario(Usuario usuarios[], int largoArray)
{
    int i;
    int idMaximo = -1;

    if(usuarios != NULL && largoArray > 0)
    {
        for(i=0;i<largoArray;i++)
        {
                if(usuarios[i].isEmpty == 0  && usuarios[i].idUsuario > idMaximo)
                {
                    idMaximo = usuarios[i].idUsuario;
                }
        }
    }


    return idMaximo + 1;
}

int altaUsuario(Usuario usuarios[], int largoArray)
{
    int retorno = -1;
    int i;
    int idAlta;
    int indexAlta;

    if(usuarios != NULL && largoArray>0)
    {

        idAlta = proximoId(usuarios, largoArray);
        indexAlta = proximoLugarVacioUsuario(usuarios, largoArray);
        if(idAlta !=-1 && indexAlta !=-1)
        {
            retorno = 0;
            usuarios[indexAlta].idUsuario = idAlta;
            usuario[indexAlta].id = idAlta;
        }
    }
}
