#include <iostream>
#include <list>
#include "Numero.h"
#include "Tecla.h"

int main() {

    list<Numero>listaNumeros;

    for (int i = 48; i <= 57; i++) {
        listaNumeros.push_back(Numero(i));
    }

    list<Numero>::iterator it;

    for (it = listaNumeros.begin(); it != listaNumeros.end(); it++) {
        it->mostrarValor();
    }

    return 0;

}
