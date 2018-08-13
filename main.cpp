#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {

  int caselle[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  int corrente = 2;
  string direzione;
  cout << caselle[9] << caselle[8] << caselle[7] << endl;
  cout << caselle[6] << caselle[5] << caselle[4] << endl;
  cout << caselle[3] << caselle[2] << caselle[1] << endl;
  
  cout << "Casella 9 = Nemico, Casella 3 = Casa" << endl;
  cout << "Ti trovi nella casella 2." << endl;
  caselle[0]=2;
  do{
  cin >> direzione;
  if (direzione == "su") {
       if (corrente==9) {corrente =corrente-3;}
        if (corrente==8) {corrente =corrente-3;}
         if (corrente==7) {corrente =corrente-3;}
       corrente = corrente + 3;
      cout << "Ti trovi nella casella " << corrente <<endl;
  }
  if (direzione == "giu") {
      if (corrente==1) {corrente =corrente+3;}
       if (corrente==2) {corrente =corrente+3;}
        if (corrente==3) {corrente =corrente+3;}
      corrente=corrente -3;
      cout << "Ti trovi nella casella " << corrente <<endl;
  }
  if (direzione == "destra") {
      if (corrente==1) {corrente =corrente+1;}
      if (corrente==4) {corrente =corrente+1;}
      if (corrente==7) {corrente =corrente+1;}
      corrente=corrente -1;cout << "Ti trovi nella casella " << corrente <<endl;
  }
  if (direzione == "sinistra") {
      if (corrente==3) {corrente =corrente-1;}
      if (corrente==6) {corrente =corrente-1;}
      if (corrente==9) {corrente =corrente-1;}
      corrente=corrente +1; cout << "Ti trovi nella casella " << corrente <<endl;}
      
    if (corrente==3) {
        cout << "MARIO: te morisse il cane ciutaglione!!"<< endl;
    }
    if (corrente==9) {
        cout << " ______________________"<<endl;
        cout << "| BATTAGLIA VS PINUCCIO|"<<endl;
        cout << "| GIOCATORE    TRIMONE |"<<endl;
        cout << "|______________________|"<<endl;
		if (direzione == "sinistra" ||  direzione == "destra" ||  direzione == "su" ||  direzione == "giu"   ) {
			cout << "Non puoi scappare."<<endl;
		
		}
		corrente = 9;
		}
        
} while (direzione != "suca");
  system("pause");
  return 0;
  }
