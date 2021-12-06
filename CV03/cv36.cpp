/******************************************************************************

Napište program, který ze zadaných dat (soubor data.txt ) vytvoří binární soubor,
kde bude každý řetězec vypisován na délku 170 bajtů.

*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream Retezce("data.txt");
	ofstream fileWrite("data1.txt");
	string Retez;
	char znak;

	while (not Retezce.eof()) {
		Retez = "";
		znak = Retezce.get(); 

		while (not Retezce.eof()) {
			Retez += znak;
			znak = Retezce.get();

			if (Retez.length() == 170){
				znak = '\n';
			}
		}

		fileWrite << Retez;
	}

	return 0;
}