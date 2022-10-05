#include <iostream>
#include <list>
#include "Numero.h"
#include "Tecla.h"

int main() {

    list<Numero>listaNumeros;

    for (int i = 48; i <= 57; i++) {
        listaNumeros.push_back(Numero(i));
    }

    list<Numero>::iterator iterar;

    for (iterar = listaNumeros.begin(); iterar != listaNumeros.end(); iterar++) {
        iterar->mostrarValor();
    }

    return 0;

}
