#include <iostream>
#include <cstring>
using namespace std;

const int MaxDelkaRet = 180;
	typedef char TypRet[MaxDelkaRet];
	typedef struct Prvek {
	TypRet data;
	Prvek *dalsi;
} Prvek; //definice prvku seznamu

typedef Prvek *UkPrvek;
typedef struct Fronta {
	UkPrvek Zac, Kon;
} Fronta;

void Pridej(Fronta &F, TypRet R){
	if (F.Zac==NULL) {
		//fronta prázdná
		F.Zac = new Prvek;
		F.Kon = F.Zac;
	} else {
		//fronta neprázdná
		F.Kon->dalsi = new Prvek;
		F.Kon = F.Kon->dalsi;
	}

		strcpy(F.Kon->data, R);
		//vložení dat
		F.Kon->dalsi=NULL;
		//prvek je nyní poslední
	}

	void VypisN(Fronta F, int N){
		int Pozice=1;
		UkPrvek Pom=F.Zac;
		//pomocný ukazatel pro průchod
		while (Pom!=NULL and Pozice<N) {
			Pozice++;
			Pom=Pom->dalsi;
			//přechod na další prvek
	}

		if (Pom!=NULL) cout << Pom->data << endl;
			//výpis, nejsme-li za koncem
	}

int main(){
	Fronta F;
	int Kolik=0;
	TypRet Cteny;
	while (cin.getline(Cteny, MaxDelkaRet)) { //čtení
		Kolik++;
		//počítání řetězců
		Pridej(F, Cteny); //přidávání do fronty
	}

		for (int i=Kolik-100; i>0; i-=100) //indexy výpisů
	VypisN(F, i);
	return 0;
	}