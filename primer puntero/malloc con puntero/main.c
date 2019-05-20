//realoc= surve oara agregar esoacio en memoria, se le debe de asignr un tipo a guardar , malloc

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* pnum;
    int i;
    int* pAux;

    pnum = (int)malloc(sizeof(int)*5);

        if(pnum==NULL)
        {
            printf("No se ha conseguido memoria\n\n");
            system("pause");
            exit(1); //libera la memoria?
        }

            for(i=0;i<5;i++)
            {

                printf("Ingrese un num: ");
                scanf("%d", pnum+i);
            }
            printf("\n\n");

             for(i=0;i<5;i++)
            {

                printf("Ingrese un num: ");
                scanf("%d", *(pnum+i));
            }
            printf("\n\n");


    pAux = (int)realloc(sizeof(int)*5);
     if(pnum==NULL)
    {
        printf("No se ha conseguido memoria");
        system("pause");
        exit(1);
    }
    else
    {
        pAux=pnum;
    }

    return 0;
}
