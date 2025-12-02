#include "Retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo(int l, int a) {
    largura = l;
    altura = a;
}

Retangulo::~Retangulo() {
    cout << "O retangulo foi deletado!" << endl;
}

void Retangulo::setLargura(int l) {
    largura = l;
}

void Retangulo::setAltura(int a) {
    altura = a;
}

int Retangulo::getLargura() const {
    return largura;
}

int Retangulo::getAltura() const {
    return altura;
}

int Retangulo::calcularArea() const {
    return largura * altura;
}

int Retangulo::calcularPerimetro() const {
    return 2 * (largura + altura);
}

void Retangulo::renderizar() const {
    for (int i = 0; i < altura; i++) {
        for (int j = 0; j < largura; j++) {
            if (i == 0 || i == altura - 1 || j == 0 || j == largura - 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
