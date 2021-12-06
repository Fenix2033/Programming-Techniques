/******************************************************************************

Implementujte funkci, která zjišťuje hodnotu nulového bodu zadané funkce v para-
metru v zadaném intervalu. Předpokládejte, že v tomto intervalu má daná funkce
právě jeden nulový bod. Správnost výpočtu ověřte pro knihovní funkci sinus v
počátečním intervalu ⟨1, 4⟩.

*******************************************************************************/


#include <iostream>
#include <cmath>
using namespace std;

typedef double (*realfce)(double X);

double nulbod(realfce R, double A, double B){
  const double EPS = 1E-5; //požadovaná přesnost
  double C;
  if (R(A) * R(B) > 0){
    cerr << "chybně zadaný interval" << endl;
    return 0;
  }
  while ((B - A) > EPS) {
    C = (B + A)/2; //střed intervalu
    if ((R(A)*R(C)) < 0) B = C; //nulový bod vlevo, mezi A-C
    else if ((R(C) * R(B)) < 0) A = C; //nulový bod pravo, mezi C-B
    else A = B; //chyba -- není vůbec nulový bod
  }
  return (B + A) / 2; //střed nalezeného intervalu
}

int main(){
  double dolni, horni;
  cin >> dolni >> horni;
  cout << "Nulový bod je: " << nulbod(sin, dolni, horni) << endl;
  return 0;
}
