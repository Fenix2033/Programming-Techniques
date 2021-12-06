/******************************************************************************

Prove�te dal�� optimalizaci ulo�en� �et�zc� � velikost z�kladn�ho pole. 
Vytvo�te po-le 1000 ukazatel� na stoprvkov� pole �et�zc�. Stoprvkov� segmenty 
alokujte a� v p��pad� pot�eby.Kontrolu spr�vnosti ulo�en� a p��stupu k 
jednotliv�m �et�zc�m prove�te stejn�m zp�sobem jakov p��kladu 5.4. Po zpracov�n� 
v�ech dat uvoln�te ve�kerou pam� vyu��vanou na ukl�d�n� �et�zc�.

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