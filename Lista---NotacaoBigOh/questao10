#include "questao10.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
    int tamanhoA;
    cin >> tamanhoA;
    vector<int> listaA (tamanhoA);
    vector<int> listaB;

    for (int a = 0; a < tamanhoA; a++) {
        cin >> listaA[a];
    }

    set<int> setB;
    for (int num : listaA) {
        if (setB.count(num) == 0) {
            listaB.push_back(num);
            setB.insert(num);
        }
    }

    cout << listaB.size() << endl;
    return 0;
}
