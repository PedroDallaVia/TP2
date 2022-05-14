#ifndef FUNCIONES_H
#define FUNCIONES_H
#include <stdio.h>
#include <stdlib.h>

struct
{
    int id;
    char name[51];
    char lastName[51];
    float price;
    char flyCode[10];
    int typePassenger;
    int isEmpty =0;
} typedef Passenger;

int initPassengers(Passenger* list, int len)
{
/**\brief To indicate that all position in the array are empty,
* this function put the flag (isEmpty) in TRUE in all
* position of the array
* \param list Passenger* Pointer to array of passenger
* \param len int Array length
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
    return -1;
}
int addPassenger(Passenger* list, int len,int id, char name[],char lastName[]
,float price, int typePassenger,char flyCode[])
{
    /**\brief añade elementos a una lista de pasajeros en la primera posicion
* \param list passenger*
* \param len int
* \param id int
* \param name[] char
* \param lastName[] char
* \param price float
* \param typePassenger int
* \param flycode[] char
* \return devuelve (-1) si hay error o (0) si esta todo bien
* Controlar si el pasajero esta cargado
*/
    return -1;
}
int findPassengerById(Passenger* list, int len,int id)
{
    /**\brief busca un pasajero por su id
*
* \param list Passenger*
* \param len int
* \param id int
* \return devuelve la posicion del pasajero o (-1) si hay error
*/
    return NULL;
}
int removePassenger(Passenger* list, int len, int id)
{
    /**\brief desactiva un pasajero buscandolo por su id
*
* \param list Passenger*
* \param len int
* \param id int
* \return int devuelve (-1) si hay error
*
*/
    return -1;
}

int sortPassengers(Passenger* list, int len, int order)
{
    /**\brief ordena los pasajeros segun sus elementos
*
* \param list Passenger*
* \param len int
* \param order [1] para orden ascendente - [0] para orden descendente
* \return int Return (-1) if Error [Invalid length or NULL pointer] - (0) if Ok
*
*/
    return 0;
}

int printPassenger(Passenger* list, int length)
{
    /**\brief muestra los elementos de la lista de pasajeros
*
* \param list Passenger*
* \param length int
* \return int
*
*/
    return 0;
}

int showPassengers(Passenger* list, int len, int order)
{
    /**\brief muestra los elementos de los pasajeros ordenados segun criterio
*
* \param list Passenger*
* \param len int
* \param order int [1] sentido ascendente - [0] sentido descendente
* \return int (-1) si hay error - (0) si esta todo bien
*
*/
    return 0;
}

void salida(flagSalida);

#endif
