#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter[21];
    int i;
    int contA=0;
    //int contE=0;
    //int contI=0;
    //int contO=0;
    //int contU=0;

    for(i=0;i<20;i++)
    {
        printf("Ingrese un caracter: ");
        fflush(stdin);
        scanf("%c",&caracter[i]);
    }

    while(caracter == 'a')
    {
        contA++;
    }

    printf("Hay A: %d", contA);



    return 0;
}
