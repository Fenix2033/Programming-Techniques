/******************************************************************************

Standardní vstup obsahuje řadu desetinných čísel. Vypište tato čísla na výstup seřa-
zená sestupně metodou přímého vkládání. Pro samotné seřazení vytvořte podprogram.

*******************************************************************************/

#include <iostream>
using namespace std;


void Sort(int* arr,int n){
	int counter=0;
	for(int i=1;i<n;i++){
		for(int j=i; j>0 && arr[j-1]>arr[j];j--){
			counter++;
			int tmp=arr[j-1];
			arr[j-1]=arr[j];
			arr[j]=tmp;
		}
	}
}

int main(){

    int n = 5;
    int arr[n] = {15, 5, 20, 30, 2};

    Sort(arr, n);
    
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

	return 0;
}
    