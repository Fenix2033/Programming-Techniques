#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
using namespace std;

struct TypUzel { //uzel stromu
  string data;
  TypUzel *Vlevo, *Vpravo;
};
typedef TypUzel * UkUzel; //ukazatel reprezentuje strom

void Vloz(UkUzel &S, string d){ //vkládání do stromu
  if (S==NULL){
    S = new TypUzel;
    S->data = d;
    S->Vlevo=NULL;
    S->Vpravo=NULL;
  } else if (d<S->data) Vloz(S->Vlevo, d);
      else Vloz(S->Vpravo, d);
}

bool Zjisti(UkUzel S, string co){ //vyhledání ve stromu
  UkUzel pom=S;
  while (pom!=NULL and pom->data!=co)
  if (co<S->data) pom=pom->Vlevo;
    else pom=pom->Vpravo;
  return pom!=NULL;
}

void Napln(UkUzel &S, int pocdat){
  string x;
  for (int i=1; i<=pocdat; i++){
    cin>>x;
    //přečtení z datového souboru
    Vloz(S, x);
    //vložení do stromu
  }
}

void Hledej(UkUzel S, string odkud){
  string x; bool b;
  ifstream Soub;
  Soub.open (odkud.c_str());
  for (int i=1; i<=120000; i++){
    Soub >> x;
    //přečtení hledané hodnoty
    b=Zjisti(S, x); //vyhledání ve stromu
  }
  Soub.close();
}

void inorder(UkUzel S){ //použito pro výpis seřazených dat
  if (S!=NULL) {
    inorder(S->Vlevo);
    cout << S->data<<endl;
    inorder(S->Vpravo);
  }
}

int Hladina=0, MaxHladina=0;
void Hladin(UkUzel S){ //zjištění počtu hladin
  if (S!=NULL){
    Hladina++;
    if (Hladina>MaxHladina) MaxHladina = Hladina;
    Hladin(S->Vlevo);
    Hladin(S->Vpravo);
    Hladina--;
  }
}

void VemPar(int &mnozstvi, string &zdroj, int p, char *par[]){
  //zpracování parametrů z příkazového řádku
  mnozstvi=1;
  zdroj="";
  if (p>1) mnozstvi=strtol(par[1], NULL, 10);
  //strtol = konverze string to long; z knihovny cstdlib
  if (p>2) zdroj.append(par[2]);
}

int main(int pocet, char *param[]){
  UkUzel strom;
  clock_t t;
  int kolik;
  string hled_retezce;
  VemPar(kolik, hled_retezce, pocet, param);
  strom=NULL;
  //inicializace stromu
  Napln(strom, kolik); //naplnění stromu
  t = clock();
  //uchování aktuálního času
  Hledej(strom, hled_retezce);
  t = clock() - t;
  //výpočet spotřebovaného času
  Hladin(strom);
  //zjištění počtu hladin
  cout<<"Hladin stromu: "<<MaxHladina<<"; hodnot ve stromu: "
  <<kolik<<"; čas trvání "<< t <<" tiků ("
  <<(((float)t)/CLOCKS_PER_SEC)<<" sec.)."<<endl;
  // inorder(strom); -- využito k seřazení pracovního souboru
  return 0;
}
