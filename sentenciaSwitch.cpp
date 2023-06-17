#include <iostream>

using  namespace std;

int main() {

    int numero = 0;

    cout << "Dime un numero entre 1 - 5: ";
    cin >> numero;


    switch (numero) {
        case 1:
            cout << "Es el numero es 1" << endl;
            break;
        case 2:
            cout << "Es el numero es 2" << endl;
            break;
        case 3:
            cout << "Es el numero es 3" << endl;
            break;
        case 4:
            cout << "Es el numero es 4" << endl;
            break;
        case 5:
            cout << "Es el numero es 5" << endl;
            break;
        default:
            cout << "Es el numero por defecto" << endl;
            break;
    }

    return 0;
}