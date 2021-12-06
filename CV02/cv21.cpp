/******************************************************************************

Napište podprogram, který přepočítá absolutní hodnoty vektoru desetinných čísel na
hodnoty relativní vzhledem k maximu vyjádřené v procentech. Podprogram využijte pro vektor na-
plněný daty ze standardního vstupu.

*******************************************************************************/
#include <iostream>
using namespace std;
const int MaxDelkaVektoru = 100;
typedef double TypVektor[MaxDelkaVektoru];
void norma(TypVektor Vektor, int Obsazeno){
    int KdeMax = 0;
    
    for (int i = 1; i < Obsazeno; i++){
        if (Vektor[i] > Vektor[KdeMax]) KdeMax = i;
    }
    
    for (int i = 0; i < Obsazeno; i++){
        Vektor[i] = Vektor[i]/Vektor[KdeMax]*100;
    }
}

int main(){
    TypVektor V;
    int Pocet = 0;
    cin >> V[Pocet];
    while (V[Pocet] != 0 and Pocet < MaxDelkaVektoru){
        Pocet++;
        cin >> V[Pocet];
    }
    
    norma(V, Pocet);
    
    for (int i = 0; i < Pocet; i++){
        cout << V[i] << endl;
    }
    
    return 0;
}
