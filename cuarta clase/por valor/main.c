#include <stdio.h>
#include <stdlib.h>

void muestra(int x,int y);

int main()
{
    int x;
    int y;

    printf("Ingrese: ");
    scanf("%d",&x);
    printf("Ingrese otro: ");
    fflush(stdin);
    scanf("%d",&y);
    muestra(x,y);
    fflush(stdin);
    printf("x: %d y: %d",x,y);

    return 0;
}

void muestra(int x, int y)
{
    x=y;

    printf("x: %d y: %d",x,y);
}



