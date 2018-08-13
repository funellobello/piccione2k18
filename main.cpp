#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

typedef struct
{
	string Nome;
	string Arma;
	string Desc;
	int Hp;
	int Danno;
	int Spd;
}NPC;

int main() {

	NPC character, nemico;

	int spdiff; 
	int menu;
	int corrente = 2;

	string direzione;

	printf("         ________________________________________________________________________ \n");
	printf("         |FFFFFFFFFF  IIIIIIIIII    RRRRRRRR     EEEEEEEEEE                          | \n");
	printf("         |FFF             II        RR     RR    EEE                                 | \n");
	printf("         |FFFFFF          II        RRRRRRRRR    EEEEEEE                             | \n");
	printf("         |FFF             II        RR  RR       EEE                                 | \n");
	printf("         |FFF             II        RR    RR     EEE                                 | \n");
	printf("         |FFF          IIIIIIIII    RR     RR    EEEEEEEEEE                          |  \n");
	printf("         |                                                                           |\n");
	printf("         |EEEEEEEEEE MMMM    MMMM  BBBBBBBB   LLL      EEEEEEEEEEE  MMMM     MMMM    | \n");
	printf("         |EEE        MMMMM  MMMMM  BB      B  LLL      EEE          MMMMM   MMMMM    | \n");
	printf("         |EEEEEEE    MMMMMMMMMMMM  BBBBBBBB   LLL      EEEEEEEE     MMMMMM MMMMMM    | \n");
	printf("         |EEE        MMMM M  MMMM  BB      B  LLL      EEE          MMMMMMMMMMMMM    | \n");
	printf("         |EEE        MMMM    MMMM  BB     B   LLL      EEE          MMMM  M  MMMM    | \n");
	printf("         |EEEEEEEEEE MMMM    MMMM  BBBBBBBB   LLLLLLLL EEEEEEEEEEE  MMMM     MMMM    | \n");
	printf("         |___________________________________________________________________________| \n");
	cout << "       ______________________" << endl;
	cout << "       |      |       |     |" << endl;
	cout << "       |Nemico|   8   |  7  |" << endl;
	cout << "       |______|_______|_____|" << endl;
	cout << "       |      |       |     |" << endl;
	cout << "       |   6  |   5   |  4  |" << endl;
	cout << "       |______|_______|_____|" << endl;
	cout << "       |      |       |     |" << endl;
	cout << "       | Casa |   2   |  1  |" << endl;
	cout << "       |______|_______|_____|" << endl;

	cout << "Casella 9 = Nemico, Casella 3 = Casa" << endl;
	cout << "Ti trovi nella casella 2." << endl << endl;
	do {
		cin >> direzione;
		cout << endl;

		if (direzione == "su")
		{
			switch (corrente)
			{
			case 7:
			case 8:
			case 9:
				corrente = corrente - 3;
				break;
			}
			corrente = corrente + 3;
		}
		if (direzione == "giu")
		{
			switch (corrente)
			{
			case 1:
			case 2:
			case 3:
				corrente = corrente + 3;
				break;
			}
			corrente = corrente - 3;
		}
		if (direzione == "destra")
		{
			switch (corrente)
			{
			case 1:
			case 4:
			case 7:
				corrente = corrente++;
				break;
			}
			corrente = corrente--;
		}
		if (direzione == "sinistra")
		{
			switch (corrente)
			{
			case 3:
			case 6:
			case 9:
				corrente = corrente--;
				break;
			}
			corrente = corrente++;
		}

		cout << "Ti trovi nella casella " << corrente << endl << endl;

		if (corrente == 3) {
			cout << "MARIO: te morisse il cane ciutaglione!!" << endl;
		}
		if (corrente == 9) {
			cout << " ______________________" << endl;
			cout << "| BATTAGLIA VS PINUCCIO|" << endl;
			cout << "| GIOCATORE    TRIMONE |" << endl;
			cout << "|______________________|" << endl;


		}
	} while (corrente != 9);

	character.Hp = 25;
	character.Spd = 15;
	character.Arma = "Armapiufortedelgiocoottenutaconicheat";

	nemico.Hp = 20;
	nemico.Spd = 10;
	nemico.Arma = "Spalamerda";

	spdiff = character.Spd - nemico.Spd;

	cout << "Parte la battaglia. Cosa fai?" << endl << endl;
	do {
		cout << "1. Attacca" << endl << "2. Vedi Statistiche Nemico" << endl << "3. Le tue statistiche" << endl << endl;
		cin >> menu;
		cout << endl;

		switch (menu)
		{
		case 1:
			cout << "Attacco doppio! Il nemico perde 10 HP" << endl;
			nemico.Hp = nemico.Hp - 10;
			if(nemico.Hp > 0)
			{
				cout << "Il nemico attacca! Perdi 7 HP" << endl;
				character.Hp = character.Hp - 7;
			}
			cout << endl;
			break;

		case 2:
			cout << endl << "HP Nemici: " << nemico.Hp << endl << "Arma del nemico: " << nemico.Arma << endl << "Velocita: " << nemico.Spd << endl << endl;
			break;

		case 3:
			cout << endl << "HP tuoi: " << character.Hp << endl << "Arma del giocatore: " << character.Arma << endl << "Velocita': " << character.Spd << endl << endl;
			break;
		}

	} while (nemico.Hp > 0);
	cout << "Complimenti! Hai battuto il nemico ma la tua vita rimane una merda" << endl;

	system("pause");
	return 0;
}
