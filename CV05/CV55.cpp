/******************************************************************************

Proveïte další optimalizaci uloení øetìzcù – velikost základního pole. 
Vytvoøte po-le 1000 ukazatelù na stoprvková pole øetìzcù. Stoprvkové segmenty 
alokujte a v pøípadì potøeby.Kontrolu správnosti uloení a pøístupu k 
jednotlivım øetìzcùm proveïte stejnım zpùsobem jakov pøíkladu 5.4. Po zpracování 
všech dat uvolnìte veškerou pamì vyuívanou na ukládání øetìzcù.

*******************************************************************************/


#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){
  const int MaxPoleU = 1000;
  const int MaxDelka = 100;
  int Delka = 0;
  typedef char TypRet[MaxDelka];
  TypRet Cteni;
  unsigned int index = 0; 

   while (cin.getline(Cteni, MaxDelka) and index < MaxPoleU){
        TypRet *Pole = new TypRet[MaxDelka];
        strcpy(Pole[index], Cteni);
        index++;
    }
    
  return 0;
}