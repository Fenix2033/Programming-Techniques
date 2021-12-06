/******************************************************************************

Na vstupu se nachází řada celočíselných hodnot zakončená nulou. Vypište na výstup
počet vstupních hodnot dělitelných beze zbytku deseti.

*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
	int hodnota;
	int pocet = 0;
	cin >> hodnota;
	while (hodnota != 0){
		if (hodnota % 10 == 0) pocet++;
		cin >> hodnota;
	}
	cout << pocet << endl;
	return 0;
}