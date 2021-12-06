/******************************************************************************

Napište program, který ze zadaných dat (soubor data.txt ) vytvoří soubor vhodný
pro zpracování v příkladu 3.2. Realizací příkladu 3.2 zjistěte, jaká je maximální délka řetězce.

*******************************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream fileRead("data.txt");
	ofstream fileWrite("retezce.dat", ios::binary);
	string line;
	int Max = 0;
    if (fileRead.is_open()) {
        if (fileWrite.is_open()){
            while (not fileRead.eof()){
                while(fileRead >> line) {
                 fileWrite.write((char *) &line, sizeof line);    
                }
            
            }
            
            fileWrite.close();
            fileRead.close();
        }
    }

	return 0;
}