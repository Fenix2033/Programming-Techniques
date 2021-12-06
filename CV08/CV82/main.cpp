#include <iostream>
#include <iomanip>
#include "pole.h"
using namespace std;

void Velke(void *X){
  float *M = (float*)X; //potřebné přetypování
  cout << setprecision(10) << *M << endl; //výpis
}

int main(){
  unsigned int kolik=0;
  float X, *U; //potřebujeme ukazatel na data
  TypPole A;
  Init(A);
  while (cin >> X) {
  U = new float; //nový ukazatel na data
  *U = X;
  //naplnění dynamické proměnné
  kolik++;
  Pridej(A, U); //vložení do pole
  }
  for (int i = kolik - 1; i >= 0; i--) Vypis(A, i, Velke);
  return 0;
}
