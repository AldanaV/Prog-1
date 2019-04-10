//Estructuras - definicion y declaracion

#include <stdio.h>
#include <stdlib.h>

//definimos la estructura
struct datosPersonales{
    char nombre[20];
    char apellido[20];
    char calle[20];
    int numero;
};

int main()
{
    //declaracion de variable agenda de tipo datosPersonales
    struct datosPersonales agenda;

    return 0;
}
