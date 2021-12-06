//
// Created by xkudla on 18/10/2021.
//

#ifndef CV61_FRONTA2_H
#define CV61_FRONTA2_H


typedef double Prvek; //datová složka je desetinné číslo

struct Clen { //jeden člen seznamu
    Prvek Data;
    Clen *Nasled, *Predch; //dva ukazatele
};

typedef Clen * UkClen;

struct FrontaOba {
    UkClen Zac, Kon; //fronta potřebuje ukazatel na začátek i konec
};

void Start(FrontaOba &F);
//inicializace fronty

void Pripoj(FrontaOba &F, Prvek E);
//přidání prvku na konec fronty

void PripojZac(FrontaOba &F, Prvek E);
//přidání prvku na začátek fronty

Prvek Odeber(FrontaOba &F);
//odebrání prvku z konce fronty

Prvek OdeberZad(FrontaOba &F);
//odebrání prvku ze začátku fronty

void Vypis(FrontaOba F);
//výpis obsahu fronty na standardní výstup

void VypisZ(FrontaOba F);
//výpis obsahu fronty zezadu na standardní výstup

bool JePrazdna(FrontaOba F);
//zjištění prázdnosti fronty


#endif //CV61_FRONTA2_H
