#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){
const int MaxPocRet = 100000;
const int MaxDelka = 180;
typedef char TypRet[MaxDelka];

TypRet *Pole = new TypRet[MaxPocRet];
TypRet Cteni;
unsigned int index=0;

while (cin.getline(Cteni, MaxDelka)) {
strcpy(Pole[index], Cteni);
index++;
}

ofstream vyst ("x.dat", ios::binary);
for (int i=0; i<index; i++) vyst.write(Pole[i],MaxDelka);
vyst.close();
return 0;
}