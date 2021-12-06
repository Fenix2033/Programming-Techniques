/******************************************************************************

Napište podprogram, jehož výsledkem je pole naplněné celočíselnými hodnotami ze
standardního vstupu.

*******************************************************************************/

#include <iostream>
using namespace std;

int soucetVectoru(){
	cout << "Kolik prvku: " << endl;
	int kolik = 0;
	cin >> kolik;
	cout << "Prvky vektoru: " << endl;
	int vektor[kolik];
	
	for (int i = 0; i < kolik; i++){
		cin >> vektor[i];
		return vektor[i];
		
	}
	
	return 0;
}

int main(){


	return 0;
}
    