#include <stdio.h>
#include <stdlib.h>

void leerPuntero(int* p);


int main()
{

    int x = 10;
    int* p; //el * indica que es un puntero

    p = &x; //la direccion de memoria de x se guarda en p


    //printf("%d \n",*p);
    leerPuntero(&x);

    printf("Despue de llamar a leer puntero x vale: %d\n",x);

    return 0;
}

void leerPuntero(int* p)
{
  printf("Direccion de guardada en p: %x\n",p);
  *p=38;
}

/*int x=10;
int* p = &x;
int** r= &p;

printf("%d\n",*r); */

