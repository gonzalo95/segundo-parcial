#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "ArrayList.h"
#include "parse.h"
#include "empleado.h"

int lectura(ArrayList* lista)
{
    char string[50];

    empleado* aux;
    int retorno = -1;
    FILE* archivo = fopen("csv.txt", "r");
    if(lista != NULL && archivo != NULL)
    {
        while(!feof(archivo))
        {
            aux = nuevoEmpleado();

            fgets(string, 50, archivo);
            setId(aux, atoi(strtok(string, ",")));
            setNom(aux, strtok(NULL, ","));
            setSueldo(aux, atof(strtok(NULL, ",")));
            setEdad(aux, atoi(strtok(NULL, ",")));
            setPuesto(aux, strtok(NULL, ","));

            lista->add(lista, aux);

        }
        retorno = 1;
        fclose(archivo);
    }
    return retorno;
}


int escritura(ArrayList* lista)
{
    empleado* aux;
    int i;
    int retorno = -1;
    FILE* archivo = fopen("out.csv","w");
    if( lista != NULL && archivo != NULL)
    {
        for(i = 0; i < lista->len(lista); i++)
        {
            aux = lista->get(lista, i);
            fprintf(archivo, "%d,%s,%.2f,%d,%s\n", getId(aux), getNom(aux), getSueldo(aux), getEdad(aux), getPuesto(aux));
        }
        retorno = 1;
        fclose(archivo);
    }
    return retorno;
}
