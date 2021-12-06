/******************************************************************************

Deﬁnujte rekurzivní výpočet celočíselné mocniny reálného čísla a proveďte jeho im-
plementaci.

*******************************************************************************/


#include <iostream>
using namespace std;

double Mocnina(double C, unsigned int n){
if (n>0) return C * Mocnina(C, n-1); //rekurzivní výpočet
else if (n==0) return 1; //rekurzivní zarážka
else return 0; //ošetření chybného vstupu
}

int main(){
double cislo;
unsigned int moc;
cin >> cislo >> moc;
cout << Mocnina(cislo, moc) << endl;
return 0;
}
