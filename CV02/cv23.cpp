/******************************************************************************

Napište podprogram, který vypočte součet hodnot vektoru desetinných čísel.

*******************************************************************************/

#include <iostream>
using namespace std;

void soucetVectoru(float vektor[], int kolik){
	float suma = 0;

	for (int i = 0; i < kolik; i++){
		suma += vektor[i];
	}

	cout << "Suma vektoru: " << suma;
}

int main(){
	cout << "Kolik prvku: " << endl;
	int kolik = 0;
	cin >> kolik;
	cout << "Prvky vektoru: " << endl;
	float vektor[kolik];
	for (int i = 0; i < kolik; i++){
		cin >> vektor[i];
	}

	soucetVectoru(vektor, kolik);

	return 0;
}
