/******************************************************************************

Napište program, který vypíše na standardní výstup N-tý řetězec ze souboru, jehož
formát odpovídá vstupu příkladu 3.6. Hodnota N je přečtena ze standardního vstupu. Porovnejte
charakter tohoto algoritmu s identickým příkladem 3.5.
*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream Retezce ("data.txt");
	string Retez;
	char znak;
	int pocet = 0;
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