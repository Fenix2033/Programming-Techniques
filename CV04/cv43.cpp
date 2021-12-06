/******************************************************************************

Na vstupu se nachází neuspořádaná řada celých čísel v intervalu 0 až 63. Předpo-
kládejte, že se čísla neopakují, každé je na vstupu nejvýše jednou. Seřaďte tato čísla pomocí mo-
delu bitové množiny v proměnné typu unsigned long long int . (Jako vstup lze využít soubor
cisla.txt .)

*******************************************************************************/


#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream soubor("cisla.txt");
	char  znak, cislo;
	unsigned long long int mnozina = 0;
	if (soubor.is_open()) {

	soubor >> znak;

	while (cin.get(znak)){ 
        for (int i=0; i < 7; i++){
            cout << znak % 2;
            znak = znak >> 1;
        }
    }
    
	soubor.close();

	} else cerr << "Soubor nelze číst" << endl;
	return 0;
}