#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int *punteroInt;
    int **punteroPuntero;

    punteroInt = &a;
    punteroPuntero = &punteroInt;

    printf("El valor de a es: %d\n\n",a);
    printf("La direccion de memoria de a que apunta el doble puntero es: %p\n\n",punteroPuntero);

    return 0;
}
