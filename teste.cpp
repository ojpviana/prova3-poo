#include <iostream>
#include "Retangulo.h"

using namespace std;

int main() {

    cout << ">> Prova P3" << endl << endl;

    Retangulo meuRetangulo(5, 1);

    cout << "1. Dados do retangulo original:" << endl;
    cout << " - Largura: " << meuRetangulo.getLargura() << endl;
    cout << " - Altura: " << meuRetangulo.getAltura() << endl;
    cout << " - Area: " << meuRetangulo.calcularArea() << endl;
    cout << " - Perimetro: " << meuRetangulo.calcularPerimetro() << endl << endl;

    cout << "# Retangulo renderizado:" << endl << endl;
    meuRetangulo.renderizar();
    cout << endl;

    int novaLargura, novaAltura;
    cout << "2. Informe as novas dimensoes:" << endl;

    cout << " - Largura: ";
    cin >> novaLargura;
    meuRetangulo.setLargura(novaLargura);

    cout << " - Altura: ";
    cin >> novaAltura;
    meuRetangulo.setAltura(novaAltura);

    cout << endl;

    cout << "3. Dados do retangulo modificado:" << endl;
    cout << " - Largura: " << meuRetangulo.getLargura() << endl;
    cout << " - Altura: " << meuRetangulo.getAltura() << endl;
    cout << " - Area: " << meuRetangulo.calcularArea() << endl;
    cout << " - Perimetro: " << meuRetangulo.calcularPerimetro() << endl << endl;

    meuRetangulo.renderizar();
    cout << endl;

    
    return 0;
}
