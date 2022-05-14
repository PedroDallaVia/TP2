
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	char flagSalida = "N";

	int len;
	int id;
	char name[];
	char lastName[];
	float price;
	int typePassenger;
	char flyCode[];



	do
	{
		firstMenu();
		switch(firstMenu()){
			case 1:
				system("cls");
				addPassenger(Passenger list, int len,int id, char name[],char lastName[],float price, int typePassenger,char flyCode[]);
				break;

			case 2:
				system("cls");
				edditPassenger(Passenger list, int len, int id);
				break;

			case 3:
				system("cls");
				removePassenger(Passenger list, int len, int id);
				break;

			case 4:
				system("cls");
				printf("Listado de pasajeros con sus datos:\n\n");
				sortPasssenger(Passenger list, int len, int order);
				showPassenger(Passenger list, int len, int order);

				printf("\n\n ");
				printf("Listado de pasajeros ordenados por ID:\n\n");
				sortpassengerByCode(Passenger list,len,1);
				break;

			case 5:
				salida(flagSalida);
				break;
		}

	} while(flagSalida == 'N');
}

