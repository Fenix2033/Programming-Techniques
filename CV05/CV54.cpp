/******************************************************************************

Optimalizujte ulo�en� �et�zc� z p��kladu 5.1 tak, aby zab�raly v pam�ti jen 
tolik m�sta,kolik je nezbytn� pot�eba. Velikost z�kladn�ho pole ponechte 
stejnou. Pro kontrolu spr�vnosti ulo-�en� a p��stup� k jednotliv�m �et�zc�m 
vypi�te na standardn� v�stup ka�d� 100. �et�zec po��naje odkonce. Pro lad�n� 
vyu�ijte souboru data.txt p�esm�rovan�ho na standardn� vstup.

*******************************************************************************/


#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main(){
  const int MaxPocRet = 100000;
  const int MaxDelka = 180;
  string str;
  int Delka = 0;
  typedef char TypRet[MaxDelka];
  

  TypRet Cteni;
  unsigned int index = 0; 
   

   while (cin.getline(Cteni, MaxDelka)){
        Delka = strlen(Cteni); 
        TypRet *Pole = new TypRet[Delka + 1];  
        strcpy(Pole[index], Cteni);
        index++;
    }
    
                   

  
  return 0;
}