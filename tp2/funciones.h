#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED



typedef struct
{
    int dia;
    int mes;
    int anio;
}Efecha;

typedef struct
{

    char nombre[50];
    int edad;
    int estado;
    int dni;
    Efecha fecha;

} EPersona;

/** \brief Muestra un menu de opciones.
 *
 * \param Recibe  ingreso por teclado como opcion.
 * \param
 * \return Devuelve un entero.
 *
 */

int menu(char texto[]);

/** \brief Carga datos de un usuario.
 *
 * \param Se llama a la estructura Epersona, se le asigna un nombre y se le pasa la cantidad.
 * \param
 * \return devuelve 1 si fue cargado los datos y sale.
 *
 */

void cargarPersona(EPersona lista[], int);

/** \brief Muestra  lista de usuarios.
 *
 * \param Se pasa un array de los usuarios ingresados y la cantidad de usuarios.
 * \param
 * \return No devuelve nada.
 *
 */

void mostrarLista(EPersona lista[], int);

/** \brief Ordena usuarios alfabeticamente.
 *
 * \param recibe un array de lista y la cantidad de usuarios.
 * \param
 * \return No devuelve nada.
 *
 */

void ordenarNombre(EPersona lista[], int);

/** \brief Muestra una persona.
 *
 * \param Recibe un array de lista de usuarios y la cantidad de usuarios.
 * \param
 * \return No devuelve nada.
 *
 */

void mostrarPersona(EPersona);

/** \brief Busca Un usuario por dni y lo muestra si existe.
 *
 * \param Se  pasa un array de listado de usuarios y la cantidad de usuarios.

 * \param
 * \return No devuelve nada.
 *
 */

void bucarDni (EPersona lista[], int tam);

/** \brief Busca un usuario para eliminarlo.
 *
 * \param Se pasa un array de lista de usuarios y cantidad de usuarios.
 * \param busqueda por dni de usaurio, si exite , pregunta si desea eliminarlo.
 * \return No devuelve nada.
 *
 */

void EliminaPers (EPersona lista[], int tam);

/** \brief Se llama a la estructura Efecha y se le asigna un nombre de referencia.
 *
 * \param
 * \param
 * \return No devuelve nada.
 *
 */

 Efecha fechaNacimiento(void);

 void GraficoEdades(EPersona lista[],int cantidad);

 void validacionNumero(EPersona lista[],int tam);


#endif //FUNCIONES_H_INCLUDED


