/*
Um determinado material perde metade de sua massa a cada período fixo de tempo, dependendo das condições
ambientais. Conhecendo o período de tempo t (inteiro, em segundos) e a massa inicial mi (número real), escreva
um algoritmo que determine em quanto tempo a massa do material se reduz a 1g ou menos.

• Exemplo: Se a massa inicial for 4g e o tempo for 10 segundos, a massa do material se reduz a 1g em 20
segundos, da seguinte forma: em 10 segundos ela cai de 4 para 2 e em mais 10 segundos de 2 para 1.
• Faça uma análise do tempo de execução do seu algoritmo usando a notação O (big-Oh).
*/

#include "Questao09.h"
#include <iostream>
using namespace std;

int main() {
    int tempo, temporizador = 0;
    double massa;
    cin >> tempo;
    cin >> massa;

    for (double i = massa; i > 1; i = i/2 ) {
        temporizador += 1 * tempo;
    }

    cout << temporizador << " segundos(s)" << endl;
    return 0;
}
