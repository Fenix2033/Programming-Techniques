//
// Created by xkudla on 18/10/2021.
//

#include "LinearniS.h"
#include "iostream"
using namespace std;

void Init(LinarniS &F){
    F.Akt = F;
    F.Zac = F;
}

void Vloz(LinarniS &F, Prvek E){
    UkClen Retez = new Clen;
    Retez->Data = E;
    Retez->Dalsi = F.Akt;
    F.Akt = Retez;
}

bool Je_Akt(LinarniS){
    return F.Akt = NULL;
}

Prvek Odeber(LinarniS){
   if (not Je_Akt(){
      UkClen Retez = F.Akt;
      
      F.Akt = F.Akt->Dalsi;
      
      if (Je_Akt == NULL){
        F.Akt = F.Zac;
      }
      
      delete Retez;
    }
    
}


void Vypis_Akt(LinarniS){
    UkClen Retez = F.Akt;

    cout << Retez->Data << endl;   
    
}

void Posun_Akt(LinarniS){
     F.Akt = F.Akt->Dalsi;
}

void Posun_Akt_Z(LinarniS){
    F.Akt = F.Zac;
}