/******************************************************************************

Implementujte rekurzivní výpočet n členů Fibonacciho posloupnosti a vyzkoušejte
řešení pro výpis jejích prvních 15 členů. Porovnejte spotřebovaný čas výpočtu s
iterativní metodou.

*******************************************************************************/

#include <iostream>
using namespace std;

int fibonacci(int cislo){
    if (cislo == 0)
        return 0;
    if (cislo == 1)
        return 1;
    return fibonacci(cislo - 1) + fibonacci(cislo - 2);
}


int main(){
    for (int i = 10; i > 0; i--)
        cout << fibonacci(i) << " ";

    return 0;
}
