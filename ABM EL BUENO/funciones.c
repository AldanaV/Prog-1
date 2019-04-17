#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void inicializarEmpleados(eEmpleado vec[], int tam)
{

    int i;

    for(i=0; i < tam; i++)
    {
        vec[i].ocupado = 0;
    }
}

int menu()
{
    int opcion;

    system("cls");
    printf("  *** ABM Empleados ***\n\n");
    printf("1- Alta Empleado\n");
    printf("2- Baja Empleado\n");
    printf("3- Modificacion Empleado\n");
    printf("4- Ordenar Empleados\n");
    printf("5- Listar Empleados\n");
    printf("6- Salir\n\n");
    printf("Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}

void mostrarEmpleado(eEmpleado emp){

    printf("   %d       %3s     %c    %.2f\n     %d %d %d", emp.legajo, emp.nombre, emp.sexo, emp.sueldo,emp.fecha.dia,emp.fecha.mes,emp.fecha.anio);

}

void mostrarEmpleados(eEmpleado vec[], int tam){
    int contador = 0;
    int i;

    printf(" Legajo   Nombre  Sexo  Sueldo  Fecha de Nac.\n\n");
    for(i=0; i < tam; i++){
        if(vec[i].ocupado == 1){
            mostrarEmpleado(vec[i]);
            contador++;
        }
    }

    if( contador == 0){
        printf("\nNo hay empleados que mostrar\n");
    }
}

int buscarLibre(eEmpleado vec[], int tam){

    int indice = -1;
    int i;

     for(i=0; i < tam; i++)
    {
        if(vec[i].ocupado == 0){
            indice = i;
            break;
        }
    }

    return indice;
}

int buscarEmpleado(eEmpleado vec[], int tam, int legajo){

    int indice = -1;
    int i;

     for(i=0; i < tam; i++)
    {
        if(vec[i].ocupado == 1 && vec[i].legajo == legajo){
            indice = i;
            break;
        }
    }

    return indice;
}

void altaEmpleado(eEmpleado vec[], int tam)
{

    int indice;
    int legajo;
    int esta;


    indice = buscarLibre(vec, tam);

    if( indice == -1)
    {

        printf("\nNo hay lugar en el sistema\n");
    }
    else{
        printf("Ingrese legajo: ");
        scanf("%d", &legajo);

        esta = buscarEmpleado(vec, tam, legajo);

        if( esta != -1)
        {
            printf("Existe un empleado de legajo %d en el sistema\n", legajo);
            mostrarEmpleado(vec[esta]);
        }
        else{
            vec[indice].legajo = legajo;

            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(vec[indice].nombre);

            printf("Ingrese sexo: ");
            fflush(stdin);
            scanf("%c", &vec[indice].sexo );

            printf("Ingrese sueldo: ");
            scanf("%f", &vec[indice].sueldo );

            printf("Ingrese dia de nacimiento: ");
            scanf("%d",&vec[indice].fecha.dia);
            printf("Ingrese mes de nacimiento: ");
            scanf("%d",&vec[indice].fecha.mes);
            printf("Ingrese anio de nacimiento: ");
            scanf("%d",&vec[indice].fecha.anio);



            vec[indice].ocupado = 1;

            printf("Alta empleado exitosa!!!\n\n");

        }

    }

}
