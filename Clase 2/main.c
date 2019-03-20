#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;

    while(i<10)
    {
        printf("%d\n",(i+1)); // lo muestra, no lo modifica
        i++; //este lo incrementa, lo modifica

    }
    return 0;
}
