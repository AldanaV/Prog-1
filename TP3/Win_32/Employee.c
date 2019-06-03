#include <stdlib.h>
#include "Employee.h"

int employee_setSueldo(Employee* this,int sueldo) //escribir, esta setean
{
    int todoOk=0;

    if(this != NULL && id > 0 && sueldo < 100000)
    {
        this->sueldo = sueldo;
        todoOk=1;
    }

    return todoOk;
}


int employee_getSueldo(Employee* this,int* sueldo) //leer/tomar el sueldo
{

    int todoOk;

    if(this != NULL && sueldo != NULL)
    {
        *sueldo = this->sueldo;
        todoOk=1;
    }

    return todoOk;

}

Employee* employee_new()
{
    Employee* = nuevoEmpleado (Employee*)malloc(sizeof(Employee));
    if(nuevoEmpleado != NULL)
    {
        nuevoEmpleado->id;
        strcpy(nuevoEmpleado->nombre, " ");
        nuevoEmpleado->horasTrabajadas=0;
        nuevoEmpleado->sueldo=0;
    }

    return nuevoEmpleado;
}


Employee* employee_newParametros(char* idStr,char* nombreStr,char* horasTrabajadasStr,char* sueldoStr)
{
    Employee* = nuevoEmpleado (Employee*)malloc(sizeof(Employee));

    int todoOk=0;

    if(nuevoEmpleado != NULL)
    {
        if(employee_setId(nuevoEmpleado,atoi(idStr))==1)
        {
            if(employee_setHorasTrabajadas(nuevoEmpleado, horasTrabajadasStr)==1)
            {
                if(employee_setSueldo(nuevoEmpleado,sueldoStr)==1)
                {
                    todoOk=1;
                }
            }
        }
        if(todoOk==0)
        {
            free(nuevoEmpleado);
            nuevoEmpleado = NULL;
        }

    }


    return nuevoEmpleado;
}

