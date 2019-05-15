#include <stdio.h>
#include <stdlib.h>

void mostrarCadena(char* punteroCadena);

int main()
{
    char* p='a';

    printf("La direccion de memoria de p es: %p\n\n",p);



    return 0;
}

void mostrarCadena(char* punteroCadena)
{
    while(*punteroCadena != '\0')
    {
    printf("%c",*punteroCadena);
    punteroCadena++;
    }
}
