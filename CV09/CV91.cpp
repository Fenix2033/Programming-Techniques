#include <iostream>

const unsigned int MaxN = 10000; //řád matice

typedef unsigned long long int TypIndex;
typedef unsigned int TypVyznam;
const TypVyznam Max = 1000;
//max. významových

typedef void * TypHodnoty[Max]; //vektor hodnot
typedef TypIndex TypLambda[Max]; //vektor lambda

typedef struct {
  TypHodnoty hodnoty; //datový vektor
  TypLambda lambda;
  //hodnoty lambda
  TypVyznam obsaz;
  //počet obsazených
  void * majorit;
} TypRMatice;

void Start(TypRMatice &M, void * E){
  M.obsaz = 0;
  M.majorit = E;
}

void *Ziskej(TypRMatice M, TypIndex i, TypIndex j){
  if (i<=MaxN and j<=MaxN){
    TypIndex L = i + (j-1)*MaxN;
    TypVyznam kde = 0;
    while (kde<M.obsaz and M.lambda[kde]!=L)
    kde++;
  if (kde<M.obsaz) return M.hodnoty[kde];
    else return M.majorit;
  } else return NULL;
}

void Uloz(TypRMatice &M, TypIndex i, TypIndex j, void * E){
  if (i<=MaxN and j<=MaxN){
    M.lambda[M.obsaz] = i + (j-1)*MaxN;
    M.hodnoty[M.obsaz] = E;
    M.obsaz++;
  }
}
