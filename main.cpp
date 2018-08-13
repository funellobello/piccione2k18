#include <iostream>
#include <string>
using namespace std;
int main() {

	int caselle[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, };
	int corrente = 2;
	string direzione;
	cout << caselle[9] << caselle[8] << caselle[7] << endl;
	cout << caselle[6] << caselle[5] << caselle[4] << endl;
	cout << caselle[3] << caselle[2] << caselle[1] << endl;

	cout << "Casella 9 = Nemico, Casella 3 = Casa" << endl;
	cout << "Ti trovi nella casella 2." << endl;
	caselle[0] = 2;
	do {
		cin >> direzione;
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
			cout << "Ti trovi nella casella " << corrente << endl;
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
			cout << "Ti trovi nella casella " << corrente << endl;
		}
		if (direzione == "destra") 
		{
			switch (corrente)
			{
			case 1:
			case 4:
			case 7:
				corrente = corrente++;
			}
			corrente = corrente--;
			cout << "Ti trovi nella casella " << corrente << endl;
		}
		if (direzione == "sinistra") 
		{
			switch (corrente)
			{
			case 3:
			case 6:
			case 9:
				corrente = corrente--;
			}
			corrente = corrente++;
			cout << "Ti trovi nella casella " << corrente << endl;
		}

		if (corrente == 3) 
		{
			cout << "MARIO: te morisse il cane ciutaglione!!" << endl;
		}

		if (corrente == 9) {
			cout << " ______________________" << endl;
			cout << "| BATTAGLIA VS PINUCCIO|" << endl;
			cout << "| GIOCATORE    TRIMONE |" << endl;
			cout << "|______________________|" << endl;
		}

	} while (direzione != "suca");

	return 0;
}
