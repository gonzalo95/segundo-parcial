#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayList.h"
#include "parse.h"
#include "empleado.h"

int funcionQueFiltra(void* item);

int main()
{
    ArrayList* filtrada;
    empleado* aux;
    int i;
    ArrayList* lista = al_newArrayList();
    lectura(lista);
    printf("LISTA\n");
    for(i = 0; i < lista->len(lista); i++)
    {
        aux = lista->get(lista, i);
        imprimir(aux);
    }

    printf("\nFILTRADA\n");
    filtrada = al_filter(lista, funcionQueFiltra);
    for(i = 0; i < filtrada->len(filtrada); i++)
    {
        aux = filtrada->get(filtrada, i);
        imprimir(aux);
    }
    escritura(filtrada);

    return 0;
}


int funcionQueFiltra(void* item)
{
    int retorno = 0;
    if(item != NULL)
    {
        if(getEdad((empleado*)item) > 30 && strcmp(getPuesto((empleado*)item), "programador") == 0)
            retorno = 1;
    }
    return retorno;
}
