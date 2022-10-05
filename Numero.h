#ifndef UNTITLED_NUMERO_H
#define UNTITLED_NUMERO_H

#include <iostream>
#include "Tecla.h"

using namespace std;

class Numero : public Tecla{

private:

public:
    Numero(int valor);
    Numero(char caracter);
    ~Numero();

    void mostrarValor();
    void mostrarCaracter();


protected:
};

#endif //UNTITLED_NUMERO_H
