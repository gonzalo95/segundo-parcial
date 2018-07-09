#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "parse.h"
#include "empleado.h"


empleado* nuevoEmpleado()
{
    empleado* nuevo = (empleado*) malloc(sizeof(empleado));
    return nuevo;
}

int setId(empleado* empleado, int id)
{
    int retorno = -1;
    if(empleado != NULL && id > 0)
    {
        empleado->id = id;
        retorno = 1;
    }
    return retorno;
}

int getId(empleado* empleado)
{
    int retorno = -1;
    if(empleado != NULL)
    {
        retorno = empleado->id;
    }
    return retorno;
}

int setNom(empleado* empleado, char* nombre)
{
    int retorno = -1;
    if(empleado != NULL && nombre != NULL)
    {
        strcpy(empleado->nombre, nombre);
        retorno = 1;
    }
    return retorno;
}

char* getNom(empleado* empleado)
{
    char* retorno = NULL;
    if(empleado != NULL)
    {
        retorno = empleado->nombre;
    }
    return retorno;
}

int setSueldo(empleado* empleado, float sueldo)
{
    int retorno = -1;
    if(empleado != NULL && sueldo > 0)
    {
        empleado->sueldo = sueldo;
        retorno = 1;
    }
    return retorno;
}

float getSueldo(empleado* empleado)
{
    float retorno = -1;
    if(empleado != NULL)
    {
        retorno = empleado->sueldo;
    }
    return retorno;
}

int setEdad(empleado* empleado, int edad)
{
    int retorno = -1;
    if(empleado != NULL && edad > 0)
    {
        empleado->edad = edad;
        retorno = 1;
    }
    return retorno;
}

int getEdad(empleado* empleado)
{
    int retorno = -1;
    if(empleado != NULL)
    {
        retorno = empleado->edad;
    }
    return retorno;
}

int setPuesto(empleado* empleado, char* puesto)
{
    int retorno = -1;
    if(empleado != NULL && puesto != NULL)
    {
        strcpy(empleado->puesto, puesto);
        retorno = 1;
    }
    return retorno;
}

char* getPuesto(empleado* empleado)
{
    char* retorno = NULL;
    if(empleado != NULL)
    {
        retorno = empleado->puesto;
    }
    return retorno;
}

void imprimir(empleado* empleado)
{
    if(empleado != NULL)
    {
        printf("ID: %d  --  NOMBRE: %s  --  SUELDO: %.2f  --  EDAD: %d  --  PUESTO: %s\n", getId(empleado), getNom(empleado), getSueldo(empleado), getEdad(empleado), getPuesto(empleado));
    }
}
