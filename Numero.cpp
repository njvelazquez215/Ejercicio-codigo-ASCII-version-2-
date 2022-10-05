#include "Numero.h"

Numero::Numero(int valor) : Tecla(valor) {}

Numero::Numero(char caracter) : Tecla(caracter) {}

Numero::~Numero() {}


void Numero::mostrarValor() {
    int valor = Tecla::getValor();

    if (valor < 48 || valor > 57) {
        cout<< "El valor no es un numero " << valor << endl;
    } else {

        switch (valor) {
            case 48:
                cout << "El valor es 0" << endl;
                break;
            case 49:
                cout << "El valor es 1" << endl;
                break;
            case 50:
                cout << "El valor es 2" << endl;
                break;
            case 51:
                cout << "El valor es 3" << endl;
                break;
            case 52:
                cout << "El valor es 4" << endl;
                break;
            case 53:
                cout << "El valor es 5" << endl;
                break;
            case 54:
                cout << "El valor es 6" << endl;
                break;
            case 55:
                cout << "El valor es 7" << endl;
                break;
            case 56:
                cout << "El valor es 8" << endl;
                break;
            case 57:
                cout << "El valor es 9" << endl;
                break;
        }
    }
}

void Numero::mostrarCaracter() {
    char caracter = Tecla::getCaracter();

    if (caracter < '0' || caracter > '9') {
        cout<< "El caracter no es un numero " << caracter << endl;
    } else {

        switch (caracter) {
            case '0':
                cout << "El cadigo ASCII es el 48" << endl;
                break;
            case '1':
                cout << "El cadigo ASCII es el 49" << endl;
                break;
            case '2':
                cout << "El cadigo ASCII es el 50" << endl;
                break;
            case '3':
                cout << "El cadigo ASCII es el 51" << endl;
                break;
            case '4':
                cout << "El cadigo ASCII es el 52" << endl;
                break;
            case '5':
                cout << "El cadigo ASCII es el 53" << endl;
                break;
            case '6':
                cout << "El cadigo ASCII es el 54" << endl;
                break;
            case '7':
                cout << "El cadigo ASCII es el 55" << endl;
                break;
            case '8':
                cout << "El cadigo ASCII es el 56" << endl;
                break;
            case '9':
                cout << "El cadigo ASCII es el 57" << endl;
                break;
        }
    }
}
