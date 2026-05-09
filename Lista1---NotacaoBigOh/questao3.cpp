/*
Escreva um algoritmo que leia um array A de n números inteiros e retorne a maior diferença de 2 (dois) elementos
consecutivos de A.
*/

#include "questao3.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tamanho;
    cin >> tamanho;
    vector<int> array(tamanho);

    for (int i = 0; i < tamanho; i++) {
        cin >> array[i];
    }

    int maiorDif = 0;
    for (int j = 0; j < tamanho - 1; j++) {
        if (array[j+1] - array[j] > maiorDif) {
            maiorDif = array[j+1] - array[j];
        }
    }
    cout << maiorDif << endl;
    return 0;
}





