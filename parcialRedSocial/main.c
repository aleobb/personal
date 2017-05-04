#include <stdio.h>
#include <stdlib.h>

int main()


{
    int menuOpcionElegida;
    char menuPrincipalMensaje[] =
                "\n1-Alta de Usuario\
                 \n2-Modificar datos del usuario\
                 \n3-Baja de Usuario\
                 \n4-Nuevo comentario\
                 \n5-NUevo me gusta\
                 \n6-Informar\
                 \n7-Listar\
                 \n8-Salir\n\n\n\
                 \nIngrese opcion: ";
    char menuPrinsipalMensajeError[] = "\nSe debe elegir una opcion del 1 al 9";


    do
    {
        menuOpcionElegida = 0;

        switch(menuOpcionElegida)
        {
        case 1: // ALTA ABONADO

            break;

        case 2: // MODIFICAR ABONADO


            break;

        case 3: // BAJA ABONADO


            break;

        case 4: // NUEVA LLAMADA


            break;

        case 5: // FINALIZAR LLAMADA


            break;

        case 6: // INFORMES


            break;

        case 7: // LISTAR LLAMADAS


            break;

        case 8:
            //SALIR
            break;

        default:
            printf("\nNO ES UNA OPCION VALIDA!!!\n\n");
            pause();
            break;
        }

    }while(menuOpcionElegida != 8);

    return 0;

}
