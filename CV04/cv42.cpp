/******************************************************************************

Na vstupu se nachází neuspořádaná posloupnost celočíselných hodnot. Zjistěte, která
čísla z intervalu 0 až 31 se na vstupu nevyskytovala.

*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	unsigned long int mnozina=0; //32 bitů - na začátku vše nulové
	unsigned long int masky[32], //pole masek
	m=1;
	for (int i=0; i<32; i++) { //naplnění pole masek
		masky[i]=m; m=m<<1;
	}

	unsigned int cislo;
	while (cin >> cislo){
	//čtení vstupu až do konce
	if (cislo>=0 and cislo<=31) //kontrola intervalu
	mnozina = mnozina | masky[cislo]; //nastavení příslušného bitu
	}

	for (int i=0; i<32; i++)
	if ((mnozina & masky[i]) == 0) //bit nulový -> číslo nebylo na vstupu
		
	cout << i << endl;
	return 0;
}