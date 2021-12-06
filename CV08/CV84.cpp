/*
Je dán datový typ:
typedef signed char (*TypMax) (void *X, void *Y);
Vytvořte dvě funkce vyhovující tomuto datovému typu, které jako výsledek předají hodnotu 1,
ukazuje-li první parametr na hodnotu větší než druhý, hodnotu 0, jsou-li hodnoty shodné, a hod-
notu −1 ve zbylých případech.
a) První funkce předpokládá, že X a Y ukazují na hodnoty typu longint; větší číslo je to, které
je na číselné ose více vpravo.
b) Vytvořte vlastní datový typ Komplex – záznam představující komplexní čísla ve složkovém
tvaru; druhá funkce předpokládá, že X a Y ukazují na komplexní čísla, kde větší komplexní
číslo je to, které má větší absolutní hodnotu.
*/

#include <iostream>
using namespace std;

typedef signed char (*TypMax) (void *X, void *Y);

signed char porovnani(int X, int Y){
  long int *A = (long int*)X, *B = (long int*)Y;
  if (A > B){
    return '1';
  } else if (A == B){
    return '0';
  } else {
    return '-1';
  }
}

signed char porovnaniComple(long int X, long int Y){
    long int *A = (long int*)X, *B = (long int*)Y;
    if (A < 0){X * -1;}
    if (B < 0){Y * -1;}

    if (A > B){
      return '1';
    } else if (A == B){
      return '0';
    } else {
      return '-1';
    }
}

signed char Zpracuj(void *X, void *Y, TypMax max){
    cout << max(X, Y) << endl;
}

int main(){

    TypMax max;
    max = porovnani;
    void *X = -5, *Y = 3;
    Zpracuj(X, Y, max);
    return 0;
}
