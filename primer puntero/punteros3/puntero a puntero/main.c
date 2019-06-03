#include <stdio.h>
#include <stdlib.h>

typedef struct
{
   int legajo;
   char nombre;
   char apellido[20];
   float sueldo;

}eEmpleado;

int main()
{
    eEmpleado* pEmpleado = (eEmpleado*)malloc(sizeof(eEmpleado)); //reserva el espacio en memoria para un empleado
    eEmpleado** ppEmpleado = &pEmpleado; //apunta/guarda a la direccion de memoria de pEmpleado
      //pide espacio en memoria para un puntero

    pEmpleado->legajo=1234;

    printf("El legajo es: %d\n\n ",pEmpleado->legajo);
    printf("El legajo es: %d\n\n ",(*ppEmpleado)->legajo); //accede a la direccion de memoria de la estructura de pEmpleado



    return 0;
}
