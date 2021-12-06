#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream Retezce ("retezce.dat", ios::binary);
	string Retez;
	char znak;
	int Max = 0;

	while (not Retezce.eof()) {
		Retez = "";
		znak = Retezce.get(); 

		while (znak != 0 and not Retezce.eof()) {
			Retez += znak;
			znak = Retezce.get();
		}

	if (Retez.length() > Max) Max = Retez.length();

	}

	cout << "Nejdelší řetězec má " << Max << " bajtů." << endl;
	return 0;
}