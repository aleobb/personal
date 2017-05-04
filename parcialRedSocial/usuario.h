typedef struct
{
    char nombre[50];
    char nick[20];
    char mail[50];
    int clave;
    int idUsuario;
    int isEmpty;
}Usuario;

int initUsuario(Usuario usuarios[], int largoArray);
//int agregarUsuario(Usuario usuarios[], int largoArray, int  );
