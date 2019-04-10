#include <stdio.h>
#include <stdlib.h>

struct datosPersonales{
    char nombre[20];
    char apellido [20];
    char calle[20];
    int numero;
    int codPostal;
};

int main()
{
    system("color 0a");

    struct datosPersonales agenda;

    printf("Ingrese el nombre:");
    gets(agenda.nombre);
    fflush(stdin);

    printf("Ingrese el apellido:");
    gets(agenda.apellido);
    fflush(stdin);

    printf("Ingrese la calle:");
    gets(agenda.calle);
    fflush(stdin);

    printf("Ingrese el numero de la calle:");
    scanf("%d",&agenda.numero);

    printf("Ingrese codigo postal:");
    scanf("%d",&agenda.codPostal);

    return 0;
}
