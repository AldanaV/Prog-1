#include <stdio.h>
#include <stdlib.h>


void getChar(char* message, char* caracter);
void mostrarCadena(char* cadena);

int main()
{
    //char nombres[20]={3,5,2,4,3};
    //char sexo;
    //char mensaje[]="Ingrese sexo:";

    //getChar(mensaje, &sexo);

    //printf("El sexo es: %c\n",sexo);




    return 0;
}

void getChar(char* message, char* caracter)
{
    printf("%s",message);
    fflush(stdin);
    scanf("%c",caracter);
}
void mostrarCadena(char* cadena)
{

    char* x =cadena;

    while(*cadena != '\0')
    {
        printf("%c",*cadena);
        cadena++;
    }
}
