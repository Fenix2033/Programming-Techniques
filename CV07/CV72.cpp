/******************************************************************************

Implementujte obecný strom (počet následníků v každém uzlu může být libovolný).
Datovou složkou uzlu je celé číslo. Naplňte tento strom daty ze standardního
vstupu, kde se nachází posloupnost čísel zakončená nulou představující cestu k
danému uzlu a za ní následuje číslo vkláda- né do nového uzlu. Vypište pak celý
strom na standardní výstup.

*******************************************************************************/

#include <iostream>
using namespace std;

typedef struct Uzel {
  int data;
  unsigned int pocnasled; //aktuální počet následníků
  Uzel *nasled[100];      //v každém uzlu je 100 možných následníků
} Uzel;                   //definice uzlu stromu

typedef Uzel *UkUzel; //ukazatel na uzel
typedef UkUzel Strom; //strom je reprezentován ukazatelem na kořen

void Pridej(Strom &U){ //přidání uzlu
U = new Uzel;         //U je předáno odkazem, vytvoří se tedy i vazba
cin >> (U->data);     //data se vloží ze vstupu
U->pocnasled = 0;     //nový uzel je listem
}

void Najdi(Strom &U){
  int kam;
  int i = 0;
  UkUzel pom;
  cin >> kam;
  if (kam==0) Pridej(U); //je dosaženo uzlu
  else {
    pom=U->nasled[i]; //jinak sekvenční hledání následníka
    while ((i<U->pocnasled) and (U->nasled[i]->data!=kam)) i++;
    Najdi(U->nasled[i]); //vstup do další hladiny
  }
}

void Pruchod(Strom U){
  if (U!=NULL) {
    cout << U->data << " "; //výpis daného uzlu
    for (int i=0; i<U->pocnasled; i++)
      Pruchod(U->nasled[i]); //výpis všech následníků
  }
}

int main(){
  Strom S=NULL; //prázdný strom
  Najdi(S);
  Pruchod(S);
  return 0;
}
