/******************************************************************************

Vstup je tvořen souvislým textem. Zašifrujte jej operací XOR tříznakovým heslem
složeným z ASCII znaků uloženým v souboru heslo.txt . Výsledek vypište do binárního souboru
sifra.cif .

*******************************************************************************/


#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream soubheslo ("heslo.txt");
	ofstream soubsifra ("sifra.cif", ios::binary); //soubory
	const int DelkaHesla = 3;
	char heslo[DelkaHesla], Znak, Sif;
	int indexHeslo = 0;
	if (soubheslo.is_open()) {
	soubheslo >> heslo; //přečtení hesla ze souboru
	while (cin.get(Znak)) { //čtení vstupu znak po znaku
	Sif = Znak ^ heslo[indexHeslo]; //šifrování
	soubsifra.put(Sif);
	//výpis šifry do výstupu
	if (indexHeslo==DelkaHesla-1) indexHeslo = 0; //heslo znovu
	else indexHeslo++;
	//následující znak hesla
	}

	soubsifra.close();
	//uzavření výstupu
	} else cerr << "Soubor s heslem nelze číst" << endl;
	return 0;
}