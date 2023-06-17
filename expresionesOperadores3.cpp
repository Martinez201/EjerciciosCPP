#include <iostream>

using  namespace std;

int main() {

    float practica, teorica, participacion, notaFinal;

    cout << "Dime la nota de practica: ";
    cin >> practica;

    cout << "Dime la nota de teoria: ";
    cin >> teorica;

    cout << "Dime la nota de participacion: ";
    cin >> participacion;

    practica *= 0.30; // esto quiere decir que cuando se añade un valor se multiplica por 0.30 ...
    teorica *= 0.60;
    participacion *= 0.10;

    notaFinal = practica + teorica + participacion;

    cout << "\nNota final: "<< notaFinal << endl;
    return 0;
}