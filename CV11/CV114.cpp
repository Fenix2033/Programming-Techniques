#include <iostream>
#include <fstream>
using namespace std;

struct TypUzel {
  string data;
  TypUzel *Vlevo, *Vpravo;
};
typedef TypUzel * UkUzel;

void Vloz(UkUzel &S, string d){
  if (S==NULL){
    S = new TypUzel;
    S->data = d;
    S->Vlevo=NULL;
    S->Vpravo=NULL;
  } else if (d<S->data) Vloz(S->Vlevo, d);
      else Vloz(S->Vpravo, d);
}


bool Zjisti(UkUzel S, string co){
  UkUzel pom=S;
  while (pom!=NULL and pom->data!=co)
    if (co<S->data) pom=pom->Vlevo;
      else pom=pom->Vpravo;
  return pom!=NULL;
}

void Hledej(UkUzel S, string odkud){
  string x; bool b;
  ifstream Soub;
  Soub.open (odkud.c_str());
  for (int i=1; i<=120000; i++){
    Soub >> x;
    b=Zjisti(S, x);
  }
  Soub.close();
}
