/*
Considere um array A de n números inteiros.
(a) Escreva um programa, em linguagem C++, que mostre a maior diferença entre dois valores positivos em um array.
Caso haja menos de dois número positivo no array, o programa deve mostrar -1.

(b) Escreva a equação do tempo de execução do programa.

(c) Determine o desempenho do programa através da notação big-Oh
*/

#include "questaoProva.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, contador = 0, diferencaAtual = 0, maiorDiferenca = 0; // 7
    cin >> n; // 1
    int a[n]; // 1

    for (int i = 0; i < n; i++) { // n
        cin >> a[i]; // n
    }

    for (int j = 0; j < n; j++) { // n
        if (a[j] > 0) { // n
            contador += 1; // n
        }
    }

    if (contador < 2) { // 1
        cout << -1 << endl;
    }
    else { // 1
        for (int k = 0; k < n - 1; k++) { // n
            for (int l = k + 1; l < n; l++) { // n * n (n²)
                if (a[k] > 0 && a[l] > 0) { // n²
                    diferencaAtual = abs(a[k] - a[l]); // n²
                    if (diferencaAtual > maiorDiferenca) { // n²
                        maiorDiferenca = diferencaAtual; // n²
                    }
                }
            }
        }
        cout << maiorDiferenca << endl; // 1
    }
    return 0; // 1
}

/*
 7 + 1 + 1 + 2n + 3n + 1 + 1 + n + 5n² + 1 + 1
 5n² + 6n + 13
 n² + n
 n² --> O(n²) --> Quadrático
*/