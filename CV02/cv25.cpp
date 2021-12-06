/******************************************************************************

Na vstupu je na každém řádku údaj o názvu zboží (řetězec o délce nejvýše 20 znaků),
cena za kus a počet kusů na skladě. Vypište na výstup seznam zboží s nadprůměrným množstvím
kusů na skladě. Dále vypište seznam všech názvů zboží, jehož množství na skladě je menší než 5
kusů.

*******************************************************************************/

#include <iostream>
using namespace std;

struct Zbozi{
    char nazev[20];
    int cena;
    int pocet;
};

int main(){

    float prumer = 0.0;
    int suma = 0;
    struct Zbozi banan = {"Banan", 20, 5};
    struct Zbozi ananas = {"Ananas", 10, 15};
    struct Zbozi jabko = {"Jabko", 15, 25};
    struct Zbozi merunka = {"Merunka", 25, 15};
    
        Zbozi zbozi[4] {banan, ananas, jabko, merunka};
        
        for (int i = 0; i < 4; i++){
            suma += zbozi[i].pocet;
        }
        
        prumer = suma / 4;
        
        for (int i = 0; i < 4; i++){
            if(zbozi[i].pocet > prumer){
                cout << zbozi[i].nazev << endl;
            }
        }
        
        for (int i = 0; i < 4; i++){
            if(zbozi[i].pocet < 10){
                cout << zbozi[i].nazev << endl;
            }
        }

	return 0;
}
    