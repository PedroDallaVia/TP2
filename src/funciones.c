#include "funciones.h"
#include <string.h>
#define CANTMAX 2000

int firstMenu(){
	int opcion;
	system("cls");

	printf("Que desea realizar?\n\n"
			"1- Ingresar nuevo pasajero.\n"
			"2- Modificar pasajero.\n"
			"3- Dar de baja un pasajero.\n"
			"4- Informar."
			"5- Salir. \n\n");

	scanf("%d", &opcion);
	return opcion;
}

void passangerLoading(int i, Passenger* list,int len,int id, char name[],char lastName[]
,float price, int typePassenger,char flyCode[])
{
    list[i].id= id;
    *list[i].name = name;
    *list[i].lastName = lastName;
    *list[i].flyCode = flyCode;
    list[i].price= price;
    list[i].typePassenger = typePassenger;
    list[i].isEmpty = 0;
}

void changerSorting(int i, int j, Passenger* list,int len);

int initPassengers(Passenger* list, int len){
    if( list != NULL && len > 0 && len < CANTMAX){
        for(int i = 1; i <= len; i++)
        {
            list[i].isEmpty = 1;
        }
        return 0;
    }else return -1;
}

void addPassenger(Passenger* list, int len,int id, char name[],char lastName[]
,float price, int typePassenger,char flyCode[])
{
    int i = 0;
    int bus;
    if(len <= CANTMAX && list!= NULL ){
        while(i< len && !list[i].isEmpty)
        {
            i++;
        }
        if(list[i].isEmpty)
        {
            passengerLoading(i,list,len,id,name,lastName,price,typePassenger,flyCode);
        }
    }
}

int findPassengerById(Passenger* list,int len,int id)
{
    int ini = 0;
    int m;
    sortPassengersByCode(list,len,1);
    while (list!= NULL&& len <= CANTMAX&&ini<= len && list[m=(ini+len)/2].id != id)
    {
        if(id<list[m].id)len = m-1;
        else ini = m+1;
    }if(ini<=len){
        return m;
    }else return -1;
}

int removePassenger(Passenger* list, int len, int id){
    int bus = findPassengerById(list,len,id);
    if(bus>-1 && list[bus].isEmpty != 1){
        list[bus].isEmpty = 1;
        return 0;
    }else {
        return -1;
    }
}

int sortPassenger(Passenger* list, int len, int orden){
    if(list!= NULL && len <= CANTMAX){
        switch (orden)
        {
        case 0:
            for(int i = 0; i<len-1;i++){
                for(int j = i+1;j<len;j++){
                    if(list[i].typePassenger > list[j].typePassenger){
                    changerSorting(i,j,list,len);
                    }else{
                        if(list[i].typePassenger == list[j].typePassenger){
                            if(strcmp(list[i].lastName,list[j].lastName)<0){
                                changerSorting(i,j,list,len);
                            }
                        }
                    }
                }
            }
        break;
        case 1:
            for(int i = 0; i<len-1;i++){
                for(int j = i+1;j<len;j++){
                    if(list[i].typePassenger < list[j].typePassenger){
                        changerSorting(i,j,list,len);
                    }else{
                        if(list[i].typePassenger == list[j].typePassenger){
                            if(strcmp(list[i].lastName,list[j].lastName)>0){
                                changerSorting(i,j,list,len);
                            }
                        }
                    }
                }
            }
        break;
        }return 0;
    }
    return -1;
}

int sortPassengerByCode(Passenger* list, int len, int orden){
    if(list!= NULL && len <= CANTMAX){
        switch (orden)
        {
            case 0:
                for(int i = 0; i<len-1;i++){
                    for(int j = i+1;j<len;j++){
                        if(list[i].id > list[j].id){
                            changerSorting(i,j,list,len);

                        }
                    }
                }
            break;
            case 1:
                for(int i = 0; i<len-1;i++){
                    for(int j = i+1;j<len;j++){
                        if(list[i].id > list[j].id){
                            changerSorting(i,j,list,len);
                        }
                    }
                }
            break;
        }return 0;
    }return -1;
}

int showPassenger(Passenger* list, int length){
    if(list != NULL && length <= CANTMAX && length >=0){
        for (int i = 0; i < length; i++)
        {
            printf("Datos del pasajero:\n");
            printf("ID: %d\n",list[i].id);
            printf("Nombre: %s\n",list[i].name);
            printf("Apellido: %s\n",list[i].lastName);
            printf("Precio: %f\n",list[i].price);
            printf("FlyCode: %s\n",list[i].flyCode);
            printf("Tipo de pasajero: %d\n",list[i].typePassenger);
        }

        return 0;
    }return -1;
}

void changerSorting(int i, int j, Passenger* list,int len){
    Passenger aux = list[i];
    list[i] = list[j];
    list[j] = aux;
}


void editPassenger(Passenger* list, int len, int id){
    int bus = findPassengerById(list,len,id);
    if(bus>-1 && list[bus].isEmpty != 1){
    	passengerLoading();
    }
}

void salida(flagSalida){
	do{
		printf("Confirma salida?, ingrese: (S/N)\n");
		fflush(stdin);
		scanf("%c",&flagSalida);
		flagSalida = toupper(flagSalida);
		system("pause");
	}while(flagSalida!='N' && flagSalida!='S');
}
