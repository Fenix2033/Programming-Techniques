/******************************************************************************

Přečtěte ze standardního vstupu posloupnost znaků a uložte ji do znakového pole o de-
klarované velikosti 1000 prvků. Při čtení vynechávejte bílé znaky. Na standardní výstup vypište kaž-
dý desátý znak počínaje od konce. K přístupu do znakového pole využívejte ukazatelovou aritmetiku.

*******************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;



int main(){

	const int size = 1000;
	char array[size], *a = array;
	unsigned int index = 0;

	cin.getline(a, size);

	for (int i = 0; i < size; i++){
		if(a[i] != '\0'){
			index++;
		}
	}


	for (int i = index; i >= 0; i -= 10){
		cout << a[i];
	}
	

	return 0;
	}