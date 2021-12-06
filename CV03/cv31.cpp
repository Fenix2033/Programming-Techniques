/******************************************************************************
 * 
Na standardním vstupu se na každém řádku nachází trojice údajů o zaměstnanci: jmé-
no (max. 13 znaků), číslo pracoviště (celočíselná hodnota) a výkon (desetinné číslo typu double ).
Vytvořte na disku soubor záznamů s těmito údaji.

*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	typedef struct {
		char jmeno[13]; 
		int dilna;
		double vykon;
	} TypZam;

	const int MaxPrac = 50;
	typedef TypZam TypZavod[MaxPrac];

	fstream zapis("zavod.dat", ios::out | ios::binary);
	TypZavod Zavod;
	int Obsazeno=0;

	while (cin>>Zavod[Obsazeno].jmeno>>Zavod[Obsazeno].dilna
	>>Zavod[Obsazeno].vykon) Obsazeno++; //přečtení vstupu
	zapis.write((char*)&Obsazeno, sizeof(Obsazeno));

	zapis.write((char*)Zavod, sizeof(TypZam)*Obsazeno);

	zapis.close();
	return 0;

}