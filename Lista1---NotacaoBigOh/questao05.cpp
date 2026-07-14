/*
Escreva um algoritmo que leia um array a de n (2 ≤ n ≤ 109) números inteiros e determine se existe no array um
par de números cuja soma seja s (1 ≤ s ≤ 2 × 109), também informado na entrada.
*/

#include "questao5.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tamanho, somaDesejada;
    cin >> tamanho;
    vector<int> array(tamanho);

    for (int a = 0; a < tamanho; a++) {
        cin >> array[a];
    }

    cin >> somaDesejada;
    bool result = false;
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (array[i] + array[j] == somaDesejada) {
                result = true;
                break;
            }
        }
        if (result) {
            break;
        }
    }
    if (result) {
        cout << "S" << endl;
    }
    else {
        cout << "N" << endl;
    }
    return 0;
}
