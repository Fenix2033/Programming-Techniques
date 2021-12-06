#include <iostream>
#include <fstream>
using namespace std;

const int MinData = -9999; //vymezení intervalu dat
const int MaxData = 9999;
const int Max = 10000;

//velikost základního pole
typedef int TypData;

struct Clen {
  TypData Data;
  Clen *Dalsi;
};

typedef Clen *UkClen;
typedef UkClen ZaklPole[Max];
typedef int (*HashFce)(TypData);
struct HashTab {
  ZaklPole ZP;
  HashFce H;
//hešovací funkce je součástí tabulky
};

int Hesuj(TypData D){
  return (D - MinData) % Max;
}

void HTInit(HashTab &HT, HashFce X){
  for (int i=0; i<Max; i++) HT.ZP[i]=NULL;
  HT.H = X; //uživatelská hešovací funkce se vloží do struktury
}

void HTVloz(HashTab &HT, TypData D){
  UkClen Pom = new Clen;
  int I = HT.H(D);
  //hešování -- kam přijdou data?
  Pom->Data = D;
  //naplnění nového záznamu
  Pom->Dalsi = HT.ZP[I]; //vložení na začátek seznamu
  HT.ZP[I] = Pom;
}

bool HTNajdi(HashTab HT, TypData D){
  UkClen Pom = HT.ZP[HT.H(D)]; //hešování a indexace
  while (Pom!=NULL and Pom->Data!=D) //sekvenční hledání
  Pom = Pom->Dalsi;
  return Pom != NULL;
}

int main(){
  ifstream Cisla ("celacisla.txt");

  if (not Cisla.is_open()) {
    cerr << "Vstupní data nelze číst." << endl;
    return 4;
  }

  HashTab T;
  //hešovací tabulka
  int Cis;
  //proměnná pro čtená data
  int pocet=0;
  HTInit(T, Hesuj);
  while (Cisla>>Cis) HTVloz(T, Cis);
  Cisla.close();
  Cisla.open(”celacisla.txt”);
  while (Cisla>>Cis) {
    Cis /= 2;
    if (HTNajdi(T, Cis)) pocet++;
  }
    cout << "Nalezeno " << pocet << " vzorků."<<endl;
    return 0;
}
