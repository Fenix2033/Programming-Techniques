//
// Created by xkudla on 18/10/2021.
//

#include <iostream>
#include "Fronta2.h"
using namespace std;

void Start(FrontaOba &F){
    F.Zac=F.Kon=NULL;
}

void Pripoj(FrontaOba &F, Prvek E){
    if (F.Zac==NULL){
        F.Zac = new Clen;
        F.Kon = F.Zac;
        F.Kon->Predch = NULL;
    } else {
        F.Kon->Nasled = new Clen;
        F.Kon->Nasled->Predch = F.Kon;
        F.Kon = F.Kon->Nasled;
    }
    F.Kon->Data = E;
}

void PripojZac(FrontaOba &F, Prvek E){
    UkClen Pom = new Clen;
    Pom->Nasled = F.Zac;
    if (Pom->Nasled != NULL) Pom->Nasled->Predch = Pom;
    Pom->Predch = NULL;
    Pom->Data = E;
    F.Zac = Pom;
    if (F.Kon==NULL) F.Kon=F.Zac;
}

Prvek Odeber(FrontaOba &F){
    if (not JePrazdna(F)) {
        return F.Zac->Data;
        UkClen Pom = F.Zac;
        F.Zac = F.Zac->Nasled;
        F.Zac->Predch = NULL;
        delete Pom;
    } else return 0;
}

void Vypis(FrontaOba F){
    UkClen Pom = F.Zac;
    while (Pom != NULL) {
        cout << Pom->Data << " ";
        Pom = Pom->Nasled;
    }
    cout << endl;
}

void VypisZ(FrontaOba F){
    UkClen Pom = F.Kon;
    while (Pom != NULL) {
        cout << Pom->Data << " ";
        Pom = Pom->Predch;
    }
    cout << endl;
}

bool JePrazdna(FrontaOba F){
    return F.Zac == NULL;
}