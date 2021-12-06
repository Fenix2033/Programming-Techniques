#include <iostream>
using namespace std;


typedef string Element; //příklad datové složky

typedef struct Clen {
	Element data;
	Clen *dalsi;
} Clen;

typedef Clen *UkClen;
typedef UkClen Zasobnik; //reprezentace hlavního typu

void Init(Zasobnik &S){
	S = NULL;
}

bool Empty(Zasobnik S){
	return S==NULL;
}

void Push(Zasobnik &S, Element D){
	UkClen Pom = new Clen;
	Pom->data = D;
	Pom->dalsi = S;
	S = Pom;
}

void Pop(Zasobnik &S, Element &D){
	UkClen Pom;
	if (not Empty(S)) {
		Pom = S;
		D = S->data;
		S = S->dalsi;
		delete Pom;
	} else {
		cout << "Prazdny" << endl;
	};
}	

void Error(int Cislo){
	switch (Cislo){
	//řešení podle implementace
	}
}

int main(){
	Zasobnik Z; //použití
	string R;
	Init(Z);
	while (getline(cin, R)) //naplnění řetězci
		Push(Z, R);
	while (not Empty(Z)) {
		//výpis celého zásobníku
		Pop(Z, R);
		cout << R<< endl;
	}

	return 0;
}