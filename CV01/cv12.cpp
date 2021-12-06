/******************************************************************************

Napište program v jazyce C++ řešící tuto úlohu: Na standardním vstupu se nachází
řada desetinných čísel představující měsíční zisky nejmenované ﬁrmy v tisících eur. Vypište pořado-
vé číslo měsíce, v němž byl zaznamenán největší nárůst zisku oproti předchozímu měsíci.

*******************************************************************************/

#include <iostream>
using namespace std;

int main(){
	int zisk, predchoziZizk, maxZizk, mesic = 1, maxMesic;
	while(cin >> zisk){
		if(maxZizk < predchoziZizk - zisk){
			maxZizk = zisk - predchoziZizk;
			maxMesic = mesic; 
		}
		mesic ++;
	}

	cout << "maxZizk: " << maxZizk << "v mesice: " << maxMesic;
	return 0;
}
