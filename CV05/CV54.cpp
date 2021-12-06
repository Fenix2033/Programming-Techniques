/******************************************************************************

Optimalizujte uložení øetìzcù z pøíkladu 5.1 tak, aby zabíraly v pamìti jen 
tolik místa,kolik je nezbytnì potøeba. Velikost základního pole ponechte 
stejnou. Pro kontrolu správnosti ulo-žení a pøístupù k jednotlivým øetìzcùm 
vypište na standardní výstup každý 100. øetìzec poèínaje odkonce. Pro ladìní 
využijte souboru data.txt pøesmìrovaného na standardní vstup.

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