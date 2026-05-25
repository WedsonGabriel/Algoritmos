#include "Vector.h"

struct vector {
private:
    int data[1000];
    unsigned int size_, capacity_;

public:
    vector() {
        size_ = 0; // Tamanho do vetor
        capacity_ = 1000; // Capacidade máxima do vetor
    }

    unsigned int size() { // Retorna o tamanho do vetor atual
        return size_;
    }

    unsigned int capacity() { // Retorna a capacidade máxima do vetor
        return capacity_;
    }

    double percent_occupied() { // Retorna quantos % do vetor já foi preenchido
        return (size_ * 100.0) / capacity_;
    }

    bool insert_at(unsigned int index, int value) {
        if (index > size_ || size_ == capacity_) {
            return false;
        }
        data[index] = value;
        size_ += 1;
        return true;
    }

    bool remove_at(unsigned int index) {
        if (index >= size_) {
            return false;
        }
        size_ -=1;
        return true;
    }

    int get_at(unsigned int index) { // Retorna o elemento de um indíce específico
        if (index >= size_) {
            return -1;
        }
        return data[index];
    }

    void clear() { // Limpa o array
        size_ = 0;
    }

    int front() { // Retorna o primeiro elemento
        return data[0];
    }

    int back() { // Retorna o último elemento
        return data[size_ - 1];
    }

    int find (int value) { // Retorna o indíce de um elemento específico
        for (int i = 0; i < size_; i++) {
            if (data[i] == value) {
                return i;
            }
        }
        return -1;
    }

    int count (int value) { // Conta quantas vezes um elemento apareceu em um array
        int contador = 0;
        for (int i = 0; i < size_; i++) {
            if (data[i] == value) {
                contador += 1;
            }
        }
        return contador;
    }

    int sum() { // Soma todos os elementos de um array
        if (size_ == 0) {
            return 0;
        }

        int somador = 0;
        for (int i = 0; i < size_; i++) {
            somador += data[i];
        }
        return somador;
    }

    void push_back(int value) { // Adiciona um elemento na última posição
        data[size_] = value;
        size_++;
    }

    void push_front(int value) { // Adiciona um elemento na primeira posição
        for (int i = size_; i > 0; i--) {
            data[i] = data[i - 1];
        }
        data[0] = value;
        size_++;
    }

    bool pop_back() { // Apaga o último elemento
        if (size_ == 0) {
            return false;
        }
        size_--;
        return true;
    }

    bool pop_front() { // Apaga o primeiro elemento
        if (size_ == 0) {
            return false;
        }
        for (int i = 0; i < size_ - 1; i++) {
            data[i] = data[i + 1];
        }
        size_--;
        return true;
    }
};