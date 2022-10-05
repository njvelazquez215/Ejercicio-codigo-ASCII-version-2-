#ifndef UNTITLED_TECLA_H
#define UNTITLED_TECLA_H

#include <iostream>

using namespace std;

class Tecla {

private:
    int valor;
    char caracter;

public:
    Tecla(int valor);
    Tecla(char caracter);
    ~Tecla();

    void validadTecla();

    int getValor();
    int getCaracter();
    void setValor(int valor);
    void setCaracter(char caracter);

protected:
};

inline void Tecla::setValor(int valor) {
    this->valor = valor;
}

inline void Tecla::setCaracter(char caracter) {
    this->caracter = caracter;
}

inline int Tecla::getValor() {
    return valor;
}

inline int Tecla::getCaracter() {
    return caracter;
}

#endif //UNTITLED_TECLA_H

