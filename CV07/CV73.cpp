/******************************************************************************

Rozšiřte příklad 7.1 tak, aby počítal i záporné celočíselné mocniny.

*******************************************************************************/


#include <iostream>
using namespace std;

double Mocnina(double C, unsigned int n){
  if (C > 0) {
    if (n > 0) return C * Mocnina(C, n-1);
    else if (n == 0) return 1;
    else return 0;
  }

  else if (C == 0){
    return 0;
  }

  else if (C < 0){
    if (n > 0) {
      if (n % 2 == 0){
        return C * Mocnina(C, n-1);
      }
      else {
        return C * Mocnina(C, n-1) * -1;
      }
    }

    else if (n==0) return -1;
    else return 0;
  }




//  else if (n < 0){
//    return 1 / (C * Mocnina(C, n+1));
//  }

  else return 0;
}

int main(){
  double cislo;
  unsigned int moc;
  cin >> cislo >> moc;
  cout << Mocnina(cislo, moc) << endl;
  return 0;
}
