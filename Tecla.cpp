#include "Tecla.h"

Tecla::Tecla(int valor) {
    this->valor = valor;
}

Tecla::Tecla(char caracter){
    this->caracter = caracter;
}

Tecla::~Tecla() {}

void Tecla::validadTecla() {
    if (this->valor < 0 || this->valor > 256) {
        cout<< "El valor debe estar entre 0 y 256" << endl;
    }
}