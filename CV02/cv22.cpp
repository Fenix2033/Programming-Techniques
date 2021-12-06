/******************************************************************************

Na vstupu se nachází na každém řádku dvojice údajů: identiﬁkace pracovníka (troj-
znakový řetězec) a jeho plat. Vypište na výstup údaje o třech pracovnících s nejvyšším platem.

*******************************************************************************/

#include <iostream>

using namespace std;

typedef struct {
char id[3];
int plat;
} TypPrac;

void zamena(TypPrac &A, TypPrac &B){
TypPrac Pom=A;
A=B;
B=Pom;
}

int main(){
    
    const int PocNej = 3;
    typedef TypPrac TypNejlepsi[PocNej+1];
    
    TypNejlepsi Nejlepsi;
    TypPrac Prac;
    int PocPrac=0;
    
while (cin>>Prac.id) { //dokud není vše přečteno
    cin>>Prac.plat; //přečtení údajů o pracovníkovi
    if (PocPrac<=PocNej) { //ještě není přečten počet sledovaných
        PocPrac++;
        Nejlepsi[PocPrac-1]=Prac; //vložíme na konec
    } else Nejlepsi[3]=Prac; //jinak vkládáme do ”rezervy”
        for (int i=PocPrac-1; i>0; i--)
            if (Nejlepsi[i].plat>Nejlepsi[i-1].plat)
                zamena(Nejlepsi[i], Nejlepsi[i-1]); //umístění nového
}
        for (int i=0; i<PocPrac-1; i++) //výpis výsled      ku
        cout << Nejlepsi[i].id << ” ”<<Nejlepsi[i].plat << endl;
        return 0;
}