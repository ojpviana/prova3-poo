#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo {
private:
    int largura;
    int altura;

public:
    Retangulo(int l, int a);

    ~Retangulo();

    void setLargura(int l);
    void setAltura(int a);

    int getLargura() const;
    int getAltura() const;

    int calcularArea() const;
    int calcularPerimetro() const;

    void renderizar() const;
};

#endif
