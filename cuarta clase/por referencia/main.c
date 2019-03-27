#include <stdio.h>
#include <stdlib.h>

void muestra(int *x,int y);

int main()
{
    int x;
    int y;

    printf("Ingrese: ");
    scanf("%d",&x);
    printf("Ingrese: ");
    scanf("%d",&y);
    muestra(&x,y); //a la x se le pone el & porque esta esperando una direccion de memoria ya que es un puntero
    printf("x: %d y: %d\n\n",x,y);

    return 0;
}

void muestra(int *x, int y)
{
    *x=y; //le estamos asignando el valor de Y al puntero dado a que el "*" hace que busque el valor

   printf("x: %d y: %d",x,y);
}
