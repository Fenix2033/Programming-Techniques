//
// Created by xkudla on 18/10/2021.
//

#ifndef LINEARNISEZNAM_LINEARNIS_H
#define LINEARNISEZNAM_LINEARNIS_H
#include "string"
using namespace std;

typedef string Prvek;

struct Clen {
    Prvek Data;
    Clen *Akt, *Dalsi;
};

typedef Clen *UkClen;
struct LinarniS {
    UkClen Zac;
};


void Init(LinarniS &F);
void Vloz(LinarniS &F, Prvek E);
bool Je_Akt(LinarniS);
Prvek Odeber(LinarniS);
void Vypis_Akt(LinarniS);
void Posun_Akt(LinarniS);
void Posun_Akt_Z(LinarniS);


#endif //LINEARNISEZNAM_LINEARNIS_H
