#include <iostream>
#include "Fronta2.h"
using namespace std;

int main(){
    FrontaOba Moje;
    Start(Moje);
    int pocet;
    double vstup;
    cin >> pocet;
    for (int i=0; i<pocet/2; i++){
        cin >> vstup;
        Pripoj(Moje, vstup);
    }
    while (cin>>vstup) PripojZac(Moje, vstup);

    Vypis(Moje);
    VypisZ(Moje);

    return 0;
}
