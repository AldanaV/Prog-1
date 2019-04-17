typedef struct
{
    int id;
    char desc[31];

}eSector;

typedef struct
{
    int dia;
    int mes;
    int anio;

}eFecha;

typedef struct
{

    int legajo;
    char nombre[20];
    char sexo;
    float sueldo;
    int ocupado;
    eFecha fecha;
    int idSector;

} eEmpleado;




int menu();
void inicializarEmpleados(eEmpleado vec[], int tam);
void mostrarEmpleado(eEmpleado emp);
void mostrarEmpleados(eEmpleado vec[], int tam);
int buscarLibre(eEmpleado vec[], int tam);
int buscarEmpleado(eEmpleado vec[], int tam, int legajo);
void altaEmpleado(eEmpleado vec[], int tam);


/*

for(Int i=0; i<cant_sect;i++)
{
    for(int j=0;j<cant_emp;j++)
    {
        if(sectorAux==sectores[i].id && sectores[i].id==emp[j].idSector)
        {
            printf("%d %s %s, emp[j].legajo,emp[j].nombre,sectores[i].desc")
        }
    }
}



eEmpleado auxEmp;

for(i=0;i<cant_emp-1;i++)
{
    for(j=i+1;j<cant_emp;j++)
    {
        if(strcmp(emp[i].nombre,emp[j].nombre))
        {
            auxEmp=emp[i];
            emp[i]=emp[j];
            emp[j]=auxEmp;
        }
    }
}

*/
