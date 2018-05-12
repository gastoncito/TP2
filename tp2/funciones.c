#include "funciones.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int menu(char texto[])
{
    int opcion;

    printf("%s", texto);
    scanf("%d", &opcion);

    return opcion;
}



void cargarPersona(EPersona lista[], int tam)
{
    int i;
    int j;
    char auxNom[100];
    int auxEdad;






    for(i=0; i<tam; i++)
    {

        if(lista[i].estado==0)
        {





            printf("Ingrese Nombre: ");
            fflush(stdin);
            gets(lista[i].nombre);


            for(j=0; j<tam; j++)
            {
                strcpy( auxNom,lista[i].nombre);

                if( !isalpha(auxNom[j]) )
                {
                    printf( "\nEs un numero, Reingrese el Nombre\n" );
                    printf("Ingrese Nombre: ");
                    fflush(stdin);
                    gets(lista[i].nombre);
                }
                else
                {
                    break;
                }


            }



            printf("\nIngrese Edad: ");
            scanf("%d", &lista[i].edad);


            printf("\nIngrese DNI: ");
            scanf("%d", &lista[i].dni);



            printf("\nIngrese Fecha de Nacimiento\n");
            lista[i].fecha=fechaNacimiento();



            lista[i].estado = 1;

            break;
        }
    }

}


Efecha fechaNacimiento(void)
{
    Efecha fecha;
    printf("\nIngrese Dia:\n ");
    scanf("%d", &fecha.dia);
    printf("\nIngrese Mes:\n ");
    scanf("%d", &fecha.mes);
    printf("\nIngrese Año:\n ");
    scanf("%d", &fecha.anio);

    return fecha;


}

void mostrarLista(EPersona lista[], int tam)
{
    int i;
    for(i=0; i<tam; i++)
    {
        if(lista[i].estado==1)
        {
            mostrarPersona(lista[i]);
        }

    }
}

void ordenarNombre(EPersona lista[], int tam)
{
    int i, j;

    EPersona auxNombre;

    for(i=0; i<tam-1; i++)
    {

        for(j=i+1; j<tam; j++)
        {

            if(stricmp(lista[i].nombre, lista[j].nombre)>0)
                auxNombre=lista[i];
                lista[i]=lista[j];
                lista[j]=auxNombre;

        }
    }


}

//-------------------------------------------------------------------------------
void mostrarPersona(EPersona pers)
{
    printf("\nNombre: %s--\nEdad:%d--\nDni:%d--\nEstado:%d--\nDia:%d--\nMes:%d--\nAnio:%d\n", pers.nombre, pers.edad, pers.dni, pers.estado,pers.fecha.dia,pers.fecha.mes,pers.fecha.anio);
}

void bucarDni (EPersona lista[], int tam)
{
    int i;
    int auxDni;
    int flag=0;


    printf("Ingrese dni a buscar:\n");
    scanf("%d", &auxDni);



    for(i=0; i<tam; i++)
    {

        if(auxDni== lista[i].dni)
        {
            flag=1;
            mostrarPersona(lista[i]);
        }
        else if (flag==0)
        {
            printf("Error, no existe el dni\n");
            break;

        }




    }
}

void EliminaPers (EPersona lista[], int tam)
{
    int i;
    int auxdni;
    int estado;
    char opcion='s';
    int flag=0;
    char respuesta;

    printf("Ingres dni de la persona a eliminar:\n");
    scanf("%d", &auxdni);



    for(i=0; i<tam; i++)
    {

        if(auxdni== lista[i].dni)
        {
            flag=1;
            printf("%c--%d--%d\n", lista[i].nombre, lista[i].dni, lista[i].edad);

            printf("Desea eliminar persona:? s/n\n");
            fflush(stdin);
            respuesta=getche();

            if(respuesta=='s')
            {
                lista[i].estado=0;
                break;
            }
            else
            {
                printf("Accion cancelada");
            }

        }

    }
    if (flag==0)
    {
        printf("Error, no existe la persona\n");
    }
}

//--------------------------------------------------------------------------------

void GraficoEdades(EPersona lista[],int tam)
{
    int i,j;
    int contmenor=0;
    int contbetween=0;
    int contmayor=0;
    int vecontador[3];
    int max;

    for(i=0; i<3; i++)
    {
        vecontador[i]=0;
    }

    if(tam>0 && lista!=NULL)
    {
        for(i=0; i<tam; i++)
        {
            if(lista[i].edad<18 )
            {
                contmenor=contmenor+1;

            }

            if(lista[i].edad >=19 && lista[i].edad<=35)
            {

                contbetween=contbetween+1;
            }

            if(lista[i].edad >35)
            {

                contmayor=contmayor+1;
            }

        }
    }

    printf("%d",vecontador);
    vecontador[1]=contmenor;
    vecontador[2]=contbetween;
    vecontador[3]=contmayor;
//Busco el mayor
    max=vecontador[0];

    for(i=0; i<3; i++)
    {
        if(vecontador[i]>max)
        {
            max=vecontador[i];
        }
    }

    for(i=max; i>0; i--)
    {
        for(j=0; j<3; j++)
        {
            if(vecontador[j] >=i)
            {
                printf(" * ");
            }
            else
            {
                printf(" ");
                printf("\n");
            }
        }

    }

}

void validacionNumero(EPersona lista[],int tam)
{
    int eDad;
    int i;
    int j;

    for(i=0; i<tam; i++)
    {
        lista[i].edad=eDad;
        if(!isdigit(eDad))
        {
            printf("Error!!! es una letra, Reingrese El numero");
        }
        else
        {
            printf("Es un numero");
        }

    }




}

