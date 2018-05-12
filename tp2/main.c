#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"
#define tam 5


int main()
{
    char seguir='s';
    int opcion;
    int i;

    EPersona ListaPersona[tam];





    for(i=0; i<tam; i++)
    {
        ListaPersona[i].estado = 0;
    }


    while(seguir=='s')
    {
        printf("-------------------------------------------------------\n");
       opcion=menu("\n1- Agregar persona\n2- Borrar persona\n3- Imprimir lista ordenada por  nombre\n4- Buscar DNI de una persona\n5- Imprimir grafico de edades\n6- Mostrar Personas\n7- Salir\n");

        switch(opcion)
        {
        case 1:

            cargarPersona( ListaPersona,tam);


            break;

        case 2:

            EliminaPers(ListaPersona,tam);

            break;

        case 3:

            ordenarNombre(ListaPersona,tam);
            mostrarLista(ListaPersona, tam);
            break;

        case 4:

            bucarDni (ListaPersona, tam);
            break;

        case 5:
            GraficoEdades(ListaPersona,tam);

            break;
        case 6:

            mostrarLista(ListaPersona,tam);

            break;

        case 7:

            seguir = 'n';
            break;
        }
    }
    return 0;
}

