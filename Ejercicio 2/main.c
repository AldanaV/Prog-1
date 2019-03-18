#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = 10;
    int numero2 = 34;
    char letra = 'a';
    float altura = 23.5;

    int numero3;

    numero2 = altura;

    //printf("La variable numero vale: %d y el numero2 vale: %d\n", numero, numero2);

    //printf("La variable letra vale: %c\n",letra);

    //printf("La variable altura vale: %d\n", numero2);


    printf("Ingrese un numero: ");
    scanf("%d", &numero3);

    printf("\nUsted ingreso el numero: %d\n", numero3);


    return 0;
}
