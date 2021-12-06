/*
Je dána procedura:
void ZpracujKvadr(float a, float b, float c, TypZpusob Zpusob){
cout << ”Vstupní hodnoty jsou: a =” << a <<
”b =” << b << ”c =” << c << endl;
cout << ”Výsledek zpracování:” << endl
<< Zpusob(a, b, c) << endl;}
a) Deﬁnujte datový typ „TypZpusob“. Všechny informace, které k tomu potřebujete, vyplývají
z uvedeného zdrojového textu.
b) Vytvořte tři podprogramy, které mohou být vloženy jako 4. parametr procedury
ZpracujKvadr a které vypočítávají: i) objem kvádru, ii) povrch kvádru, iii) délku tělesové
úhlopříčky kvádru.
c) Přečtěte ze standardního vstupu tři reálná čísla představující rozměry nějakého kvádru a
zavolejte třikrát proceduru ZpracujKvadr , pokaždé s jinou operací v parametru.
*/

#include <iostream>
using namespace std;

typedef float (*TypZpusob)(float a, float b, float c);

float objemKvadra(float a, float b, float c){
    return a*b*c;
}


void ZpracujKvadr(float a, float b, float c, TypZpusob Zpusob){
    cout << "Vstupní hodnoty jsou: a =" << a <<
    "b =" << b << "c =" << c << endl;
    cout << "Výsledek zpracování:" << endl
            << Zpusob(a, b, c) << endl;}


int main(){
    TypZpusob Zpusob;
    Zpusob = objemKvadra;
    float a = 5, b = 10, c = 7;
    ZpracujKvadr(a, b, c, Zpusob);
    return 0;
}
