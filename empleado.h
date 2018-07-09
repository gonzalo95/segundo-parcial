typedef struct
{
    int id;
    char nombre[20];
    float sueldo;
    int edad;
    char puesto[20];
}empleado;

empleado* nuevoEmpleado();

int setId(empleado*, int);

int getId(empleado*);

int setNom(empleado*, char*);

char* getNom(empleado*);

int setSueldo(empleado*, float);

float getSueldo(empleado*);

int setEdad(empleado*, int);

int getEdad(empleado*);

int setPuesto(empleado*, char*);

char* getPuesto(empleado*);

void imprimir(empleado*);
