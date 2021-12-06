/******************************************************************************

Na standardním vstupu jsou zadány rozměry matice (dvě čísla – počet řádků a po-
čet sloupců) a za nimi se nachází řada celočíselných hodnot představujících prvky matice zapsané
po řádcích. Počet hodnot může být menší, než je potřebný počet prvků takto zadané matice, v tom
případě se zbylé prvky budou považovat za nulové. Pokud bude hodnot naopak více, zpracuje se jen
tolik, kolik je pro zadané rozměry potřeba. Načtěte takto zadanou matici, vypište ji přehledným způsobem na výstup, proveďte její trans-
pozici a výsledek opět vypište na výstup.

*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
    const int radky = 4;
    const int slopcy = 4;
    int matice[slopcy][radky];
    int cisla = 0;
    
    for (int i = 0; i < slopcy; i++){
        for (int j = 0; j < radky; j++){
            matice[i][j] = 0;
        }
    }
    
    
    while (cin >> cisla){
        int i = 0, j = 0;
        matice [i][j] = cisla;
        j++;
        
        if (j == radky - 1){
            i++;
        }
    }
    
    for (int i = 0; i < slopcy; i++){
        for (int j = 0; j < radky; j++){
           cout << matice[i][j] << " ";
           
        }
         cout << "" << endl;
    }
	
	return 0;
}