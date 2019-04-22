#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>

#define TAM 2


typedef struct
{
    int id;
    char nombre[51];
    char apellido[51];
    float salario;
    int sector;
    int vacio;

}eEmployee;

void initEmployee(eEmployee vec[],int tam); //listo
void addEmployee(eEmployee vec[],int tam, int id, int nombre[], int apellido[], float salario, int sector);
int findEmployeeById(eEmployee vec[],int tam, int id); //listo
int removeEmployee(eEmployee vec[],int tam, int id);
int sortEmployee(eEmployee vec[],int tam, int order); //ordenar
void printEmployee(eEmployee emp); //listo
void printEmployees(eEmployee vec[], int tam);



int main()
{
    char seguir='s';
    int opcion;

    while(seguir=='s')
    {
        printf("Menu de opciones: \n\n");
        printf("1.Alta\n");
        printf("2.Modificar\n");
        printf("3.Baja\n");
        printf("4.Informar\n");
        printf("5.Salir\n\n");

        printf("Su opcion es: ");
        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
        }
    }


    return 0;
}

void initEmployee(eEmployee vec[],int tam)
{
    int i;

    for(i=0;i<tam;i++)
    {
        vec[i].vacio=0;
    }
}

int findEmployeeById(eEmployee vec[],int tam, int id)
{
    int i;
    int indice=-1;

    for(i=0;i<tam;i++)
    {
        if(vec[i].vacio==0 && vec[i].id==id)
        {
            indice=i;
            break;
        }
    }

    return indice;
}

void printEmployee(eEmployee emp)
{
    printf("%d %8s %8s %.2f %d",emp.id,emp.nombre,emp.apellido,emp.salario,emp.sector);
}

void printEmployees(eEmployee vec[], int tam)
{
    int i;
    int flag=0;

    printf("Id  Nombre  Apellido  Salario  Sector");

    for(i=0;i<tam;i++)
    {
        if(vec[i].vacio==1)
        {
            printEmployee(vec[i]);
            flag++; //la bandera sirve para indicar que hay empleados registrados
        }
    }

    if(flag==0)
    {
        printf("No hay empleados registrados");
    }
}

