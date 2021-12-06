/******************************************************************************

Napište program, který vypíše na standardní výstup N-tý řetězec ze souboru, jehož
formát odpovídá vstupu příkladu 3.2. Číslo N čtěte ze standardního vstupu.

*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream Retezce ("retezce.dat", ios::binary);
	string Retez;
	char znak;
	int pocet = 0;
	int Max = 0;
	int vstup = 0;
	cin >> vstup;

	while (not Retezce.eof()) {
		pocet++;
		getline(Retezce, Retez);
		if (vstup == pocet){
			cout << Retez << endl;
		}
	}

	return 0;
}