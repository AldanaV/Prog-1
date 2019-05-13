#include <stdio.h>
#include <stdlib.h>

#define TAM 5

void mostrarVector1(int vec[], int tam);
void mostrarVector2(int vec[], int tam);
void mostrarVector3(int* vec, int tam);
void mostrarVector4(int* vec, int tam);


int main()
{
    int vec[] = {3,5,2,4,3};
    int i;
    int* p;

    /*printf("%x\n", &vec[0]);
    printf("%x\n", *vec);
    printf("%x\n\n", *vec + 1 );

    for(i=0;i<5;i++)
    {
        printf("%x\n", *vec + i);

    }*/

    mostrarVector1(vec,TAM);
    mostrarVector2(vec,TAM);
    mostrarVector3(vec,TAM);
    mostrarVector4(vec,TAM);




    return 0;
}

void mostrarVector1(int vec[],int tam)
{
    int i;

    for(i=0;i<5;i++)
    {
        printf("%d\n",vec[i]);
    }
}

void mostrarVector2(int vec[], int tam)
{
    int i;

    for(i=0;i<5;i++)
    {
        printf("%d\n",vec[i]);
    }
}

void mostrarVector3(int* vec, int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%d ", vec[i]);
    }
    printf("%d");

}

void mostrarVector4(int* vec, int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        printf("%d", *(vec + 1 );

    }
}
