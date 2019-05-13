#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    eFecha FechaIngreso;

}eEmpleado;

typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;

int main()
{
    eEmpleado unEmpleado={1234,"Juan",'m',30000,{13,08,1994}};
    eEmpleado* p;

    p = &unEmpleado;




    printf("Legajo: %d\n", p->legajo);
    printf("Sexo: %d\n", p->sexo);
    printf("Dia: %d\n",p->FechaIngreso.dia);
    printf("Mes: %d\n",p->FechaIngreso.mes);
    printf("Anio: %d\n",p->FechaIngreso.anio);
    //printf("Nombre: %s\n",(*p)


    return 0;
}
