#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct datosPersonales
{
    char nombre[20];
    char apellido [20];
    char calle[20];
    int numero;
};

int main()
{
    char nombre[10]={"NOMBRE"};
    char apellido[10]={"APELLIDO"};
    char calle[10]={"CALLE"};
    char numero[10]={"NUMERO"};

    struct datosPersonales vecAgenda[3];

    int i;

    for(i=0; i<3; i++)
    {
        printf("Ingrese nombre:");
        fflush(stdin);
        gets(vecAgenda[i].nombre);

        printf("Ingrese apellido:");
        fflush(stdin);
        gets(vecAgenda[i].apellido);

        printf("Ingrese nombre de calle:");
        fflush(stdin);
        gets(vecAgenda[i].calle);

        printf("Ingrese numero de calle:");
        fflush(stdin);
        scanf("%d",&vecAgenda[i].numero);

        system("cls");

    }


    printf("%s%15s%10s%10s\n\n",nombre,apellido,calle,numero);

    for(i=0; i<3; i++)
    {
        printf("%s%15s%10s%10d\n",vecAgenda[i].nombre,vecAgenda[i].apellido,vecAgenda[i].calle,vecAgenda[i].numero);
    }

    return 0;
}
