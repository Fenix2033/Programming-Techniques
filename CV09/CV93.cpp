
typedef unsigned long long int TypIndex;
typedef unsigned int TypVyznam;
const TypVyznam Max = 1000;
typedef void * TypPoleDat[Max];

float teplota = 5;


typedef struct {
  TypPoleDat pole;
  TypIndex max; // původní rozměr
  TypVyznam obsaz;
  void *majorit;
} TypRPole;

void strat(TypRPole &P, void *E){
  M.obsaz = 0;
  M.majorit = E;
}

void Uloz(TypRPole &M, TypIndex i, void * E){
  if (E - teplota > 0.5 or E - teplota < 0){
    M.hodnoty[M.obsaz] = E;
    M.obsaz++;
  }
}
