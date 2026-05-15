#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct Tarea
{
int TareaID;//Numérico autoincremental comenzando en 1000
char *Descripcion; //
int Duracion; // entre 10 – 100
} Tarea;

typedef struct Nodo
{
Tarea T;
Nodo *Siguiente;
} Nodo;

Nodo* crearNodoTarea(int id, char* descripcion, int duracion)
{
    Nodo* nuevoNodo = (Nodo*) malloc(sizeof(Nodo));
    nuevoNodo -> T.TareaID = id;
    nuevoNodo -> T.Descripcion = (char *) malloc(strlen(descripcion) + 1);
    strcpy (nuevoNodo -> T.Descripcion, descripcion);

    nuevoNodo -> T.Duracion = duracion;
    nuevoNodo -> Siguiente = CrearListaVacia();
}

int main ()
{
    Nodo * comienzo = CrearListaVacia();
    Nodo * nodoActual = comienzo;
    srand(time(NULL));
    int idInicial = 1000;
    printf("\n----------------------- MÓDULO TO-DO --------------------------\n");

    while(comienzo != NULL)
    {
        if ();
        printf("¿Se realizó la tarea numero %d? (S/N) \n", nodoActual -> T.TareaID);
        fflush(stdin);
        gets(YnQ);
        if(YnQ == 'Y')
        {

        } else if (YnQ == 'N')
        {

        } else
        {
            printf("Error, escriba correctamente Y o N.\n");
            return 0;
        }
    }

    return 0;
}

Nodo *CrearListaVacia()
{
    return NULL;
}

