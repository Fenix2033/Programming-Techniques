/******************************************************************************

Implementujte iterativní výpočet n členů Fibonacciho posloupnosti a vyzkoušejte ře-
šení pro výpis jejích prvních 100 členů.

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
    for (int i = 0; i < 10; i++)
        cout << fibonacci(i) << " ";

    return 0;
}
