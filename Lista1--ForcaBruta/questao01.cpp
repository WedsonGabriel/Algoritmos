#include "questao01.h"
#include <bits/stdc++.h>
using namespace std;

bool cabe(int x, int y, int l1, int h1, int l2, int h2) {                      // --> 1
    if (l1 + l2 <= x && max(h1, h2) <= y) {                                   // --> 1
        return true;                                                         // --> 1
    }
    if (max(l1, l2) <= x && h1 + h2 <= y) {                                  // --> 1
        return true;                                                        // --> 1
    }
    return false;                                                          // --> 1
}

int main() {
    int x, y; // Largura e Altura da página                                 // --> 2
    int l1, h1 ; // Largura e Altura da foto 1                              // --> 2
    int l2, h2 ; // Largura e Altura da foto 2                              // --> 2

    cin >> x >> y; // Ler a largura e altura da página                      // --> 2
    cin >> l1 >> h1; // Ler a largura e altura da foto1                     // --> 2
    cin >> l2 >> h2; // Ler a largura e altura da foto2                     // --> 2

    if (cabe(x, y, l1, h1, l2, h2) ||                                       // --> 4
        cabe(x, y, h1, l1, h2, l2) ||
        cabe(x, y, l1, h1, h2, l2) ||
        cabe(x, y, h1, l1, l2, h2)) {
        cout << "S" << endl;                                                // --> 1
    }

    else {                                                                  // --> 1
        cout << "N" << endl;                                                // --> 1
    }

    return 0;
}

// O(1) - Constante