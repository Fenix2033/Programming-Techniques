#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


typedef string Element;

typedef struct Clen {
	Element data;
	Clen *dalsi;
} Clen;

typedef Clen *UkClen;
typedef UkClen Zasobnik;

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
	}
}

int main(){
	Zasobnik Z;
	string R;
	Init(Z);

  cout << "Napis hledanu hodnotu: " << endl;
  Element hodnota = "";
  cin >> hodnota;

  cout << "Napis hodnoty: " << endl;

	while (getline(cin, R)){
    		Push(Z, R);
  }

  clock_t t;
  t = clock();





	while (not Empty(Z)) {

    if (hodnota == R){
       cout << R << endl;
    }

    		Pop(Z, R);
	}

  t = clock() - t;
  cout << "time" << t << " Tic "<<(((float)t)/CLOCKS_PER_SEC) << " Sec " << endl;

	return 0;
}
