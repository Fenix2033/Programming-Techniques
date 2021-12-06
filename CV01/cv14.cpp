/******************************************************************************

Na každém řádku standardního vstupu je zadán název zboží. Vypište tento seznam
názvů na standardní výstup v obráceném pořadí.

*******************************************************************************/
#include <iostream>
using namespace std;

int main(){
    int kolik = 3;
    string zbozi[kolik]; 
    string nazev;
    cin >> nazev;
    
    for (int i = 0; i < kolik; i++){
        zbozi[i] = nazev;
        cin >> nazev;
    }
    
    for (int i = kolik; i != -1; i--){
        cout << zbozi[i] << endl;
    }
    
    return 0;
}
