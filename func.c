void graficar(int cont1, int cont2, int cont3)
{
    int i, max;
    char asterisco='*', espacio=' '; /// variables pre cargadas con asterisco y espacio
    char print1, print2, print3;

    if(cont1>=cont2 && cont1>=cont3)  /// busca el maximo para establecer el tamaño del indice
    {
        max=cont1;
    }
    else
    {
        if(cont2>=cont1 && cont2>=cont3)
        {
            max=cont2;
        }
        else
        {
            max=cont3;
        }
    }

    for(i=max;i>=1;i--)  /// compara cada contador que indica cant de personas en el grupo y lo compara con el indice=max, asignando espacio o asterisco
    {
        if(cont1>=i)
            print1=asterisco;
        else
            print1=espacio;

        if(cont2>=i)
            print2=asterisco;
        else
            print2=espacio;

        if(cont3>=i)
            print3=asterisco;
        else
            print3=espacio;
    printf("%02d\t%c\t%c\t%c\t\n",i, print1,print2,print3);  /// imprime las barras con tantas filas como el indice lo indique
    }

    printf("\n       <18    19-35    >35\n\n");
}