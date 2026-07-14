#include <vector>
#include <utility>
using namespace std;
#include "ordenacao.hpp"

bool ordenado(int numbers[], unsigned int n) {
    if (n <= 1) return true;
    for (unsigned int i = 1; i < n; i++) {
        if (numbers[i] < numbers[i-1]) return false;
    }
    return true;
}

// A função "selecao" é quadrática - O(n²)
void selecao(int numbers[], unsigned int n) {
    for (unsigned int i = 0; i < n - 1; i++) { // O(n)
        int menor = i;
        for (unsigned int j = i + 1; j < n; j++) { // O(n²)
            if (numbers[j] < numbers[menor]) menor = j;
        }
        swap(numbers[i], numbers[menor]);
    }
}

// A função "insercao" é quadrática - O(n²)
void insercao(int numbers[], unsigned int n) {
    for (unsigned int i = 1; i < n; i++) { // O(n)
        for (int j = (i - 1); j > -1; j--) { // O(n²)
            if (numbers[j + 1] < numbers[j]) {
                swap(numbers[j + 1], numbers[j]);
            } else {
                break;
            }
        }
    }
}

// A função "merge" é linear - O(n)
void merge(int numbers[], int inicio, int meio, int fim) {
    int tamanhoEsquerda = meio - inicio + 1;
    int tamanhoDireita = fim - meio;

    vector<int> esquerda(tamanhoEsquerda);
    vector<int> direita(tamanhoDireita);

    for (int i = 0; i < tamanhoEsquerda; i++)
        esquerda[i] = numbers[inicio + i];
    for (int j = 0; j < tamanhoDireita; j++)
        direita[j] = numbers[meio + 1 + j];

    int i = 0, j = 0, k = inicio;
    while (i < tamanhoEsquerda && j < tamanhoDireita) {
        if (esquerda[i] <= direita[j]) numbers[k++] = esquerda[i++];
        else numbers[k++] = direita[j++];
    }
    while (i < tamanhoEsquerda) numbers[k++] = esquerda[i++];
    while (j < tamanhoDireita) numbers[k++] = direita[j++];
}

// A função "merge_sort_recursivo" é linearítmica - O(n log n)
void merge_sort_recursivo(int numbers[], int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;
        merge_sort_recursivo(numbers, inicio, meio);
        merge_sort_recursivo(numbers, meio + 1, fim);
        merge(numbers, inicio, meio, fim);
    }
}

// A função "merge_sort" é linearítmica - O(n log n)
void merge_sort(int numbers[], unsigned int n) {
    if (n > 0) {
        merge_sort_recursivo(numbers, 0, n - 1);
    }
}