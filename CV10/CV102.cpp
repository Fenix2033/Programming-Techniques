#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
using namespace std;

bool TestSoub(string Jmeno){ //test použitelnosti souboru
  ifstream temp;
  temp.open(Jmeno.c_str(), ios::binary); //pokus o otevření
  if (temp.is_open()){
    temp.close();
    return true;
    //soubor je použitelný
    } else return false;
}

bool JeJmeno(string &pom, int pocet, char *param[]){
  bool vysled=false;
  if (pocet>1) {
    //je zadán parametr z příkazového řádku
    pom=""; pom.append(param[1]); //parametr přiřazen
    if (TestSoub(pom)) vysled=true;
  }
  if (not vysled) {
    //parametr selhal
    char *XX = getenv("ZDROJ"); //zkusíme proměnnou prostředí
    pom=""; if (strlen(XX)>0) pom.append(XX);
    if (TestSoub(pom)) vysled=true;
  }
  return vysled;
}

int main(int pocpar, char *par[]){
  string jmeno;
  //jméno souboru
  if (JeJmeno(jmeno, pocpar, par)) { //soubor úspěšně zadán
    char X;
    ifstream data (jmeno.c_str(), ios::binary);
    for (int i=1; i<=10; i++){ //přečtení 10 bajtů
      data.get(X);
      cout << int(X) << " ";
    }
    cout << endl;
    return 0;
  } else {cerr << "Nenalezen vstupní soubor."<<endl;
  return 4;
  }
}
