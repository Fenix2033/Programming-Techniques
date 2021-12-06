/******************************************************************************
 * 
Výměnou řadicího podprogramu z předchozí úlohy realizujte řazení přímým výběrem.

*******************************************************************************/

#include <iostream>
using namespace std;


void Sort(int* arr,int n){
	int i, j, nummax, nummas, max;
    
    for (i = 0; i < n; i++){
            for (j = i, max = arr[i], nummas = i; j < n; j++)
 
                if (arr[j]>max){
                    max = arr[j];
                    nummas = j;
                }
 
                arr[nummas] = arr[i];
                arr[i] = max;
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
    