#include <iostream>
#include "pole.h"
using namespace std;

void Init(TypPole &P){
  P.obsaz = 0;
}

void Pridej(TypPole &P, void *E){
  P.obsaz++;
  P.pole[P.obsaz-1] = E;
}

void Vypis(TypPole P, unsigned int i, TypJak Jak){
  if (i < P.obsaz) Jak(P.pole[i]);
}
