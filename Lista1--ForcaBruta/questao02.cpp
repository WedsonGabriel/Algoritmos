/*
Problema Par de soma s
Este problema consiste em, dado um array de n (1 ≤ n ≤ 106) números inteiros ai (−108 ≤ ai ≤ 108) e um número inteiro S, determinar se existe um par de números no array cuja soma seja S.
Exemplo: Para S = 15, no array { 1 4 9 13 18 20 32 45 } não existe um par de números no array cuja soma seja 15. Já no array { 10 20 9 1 63 6 5 12 } existem dois pares: 9 + 6 = 15 e 10 + 5 = 15.
*/

#include "questao02.h"
#include  <bits/stdc++.h>
using namespace std;

int main() {
    int S, tamanho, contador = 0; // --> 1
    cin >> S; // --> 1
    cin >> tamanho; // --> 1
    vector<int> sequencia(tamanho); // --> 1

    for (int i = 0; i < tamanho; i++) { // --> n
        cin >> sequencia[i]; // --> n
    }

    for (int a = 0; a < tamanho - 1; a++) { // --> n
        for (int b = a + 1; b < tamanho; b++) { // --> n * n (n²)
            if (sequencia[a] + sequencia[b] == S) { // --> n * n (n²)
                contador += 1;
            }
        }
    }

    cout << "Quantidade de pares onde a soma seja igual a S: " << contador << endl; // --> 1

    return 0;
}

/*
 1 + 1 + 1 + 1 + n + n + n + n² + n² + 1
 5 + 3n + 2n²
 O(n²) --> Quadrática
*/
