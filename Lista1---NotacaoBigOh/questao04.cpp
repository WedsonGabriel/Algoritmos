/*
Escreva um algoritmo que retorne a quantidade da maior sublista contígua não decrescente de um array A de n
elementos. Uma sublista contígua não decrescente é uma sequencia contígua em A onde todo elemento da
lista é menor-igual ao seu sucessor.
*/

#include "questao4.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tamanho;
    cin >> tamanho;

    if (tamanho == 0) {
        cout << 0 << endl;
        return 0;
    }

    vector<int> array(tamanho);

    for (int i = 0; i < tamanho; i++) {
        cin >> array[i];
    }

    int atual = 1;
    int maximo = 1;
    for (int j = 0; j < tamanho - 1; j++) {
        if (array[j] <= array[j+1]) {
            atual += 1;

            if (atual > maximo) {
                maximo = atual;
            }
        }
        else {
            atual = 1;
        }
    }
    cout << maximo << endl;
    return 0;
}

