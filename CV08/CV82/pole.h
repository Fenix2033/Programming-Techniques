#ifndef POLE_H
#define POLE_H

const unsigned int MaxPole = 1000;
typedef void *DatPole[MaxPole]; // pole obecných ukazatelů

typedef struct {
  DatPole pole; // data
  unsigned int obsaz; // počet obsazených prvků
} TypPole;

typedef void (*TypJak)(void *A);

void Init(TypPole &P);
void Pridej(TypPole &P, void *E);
void Vypis(TypPole P, unsigned int i, TypJak Jak);

#endif
