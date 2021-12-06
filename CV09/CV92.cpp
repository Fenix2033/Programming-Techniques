#include <iostream>
using namespace std;

const unsigned int MaxUzlu = 30;
const float Infty = 1000;
typedef float TypRadek[MaxUzlu];
typedef TypRadek TypMat[MaxUzlu];

float min(float X, float Y){
  //výběr menší ze dvou hodnot
  if (X<Y) return X; else return Y;
}

float pristup(TypMat X, int a, int b){
  //převod souřadnic do dolního trojúhelníku
  if (a>b) return X[a][b];
  else return X[b][a];
}

int main(){
  TypMat V;
  float d;
  int i, j, x, y;
  cin >> x >> y; //čísla uzlů s hledanou vzdáleností
  for (int i=0; i<MaxUzlu; i++)
  for (int j=0; j<i; j++) //jen dolní trojúhelník
  if (i==j) V[i][i]=0; //hlavní diagonála nulová
  else V[i][j]=Infty;

  while (cin>>i>>j>>d)
  if (i>j) V[i-1][j-1]=d;
  else V[j-1][i-1]=d;

  for (int i=0; i<MaxUzlu; i++)
for (int j=0; j<i; j++)
for (int k=0; k<i; k++)
V[i][j]=min(V[i][j], pristup(V,i,k)+pristup(V,k,j));

cout << "Vzdálenost "<< x << " a " << y << " je "
<< pristup (V,x,y) << endl;
return 0;
}
