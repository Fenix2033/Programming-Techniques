/******************************************************************************

Předpokládejte, že na standardním vstupu je řada řetězců, na každém řádku jeden.
Implementujte rekurzivním způsobem výpis vstupních řetězců v obráceném pořadí.
Zajistěte, aby se vypisovaly pouze ty řetězce, které byly načteny ze vstupu.
Pro ověření lze na vstup přesměrovat soubor data.txt .

*******************************************************************************/

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
const int MaxPoleU = 1000;
const int MaxDelka = 100;
int Delka = 0;
typedef char TypRet[MaxDelka];
TypRet Cteni;


void pridej(int index){
  while (cin.getline(Cteni, MaxDelka) and index < MaxPoleU){
       TypRet *Pole = new TypRet[MaxDelka];
       strcpy(Pole[index], Cteni);
       index++;
       pridej(index);
   }
}

void vypis(int index){
  cout << Pole[index] << endl;
  index--;
  vypis(index);
}

int main(){
  unsigned int index = 0;
  pridej(index);
  vypis(index);

  return 0;
}
