#include <iostream>
#include <cmath>
using  namespace std;

int main() {

    double x,y,resultado = 0;

    cout << "Dime valor de x: ";
    cin >> x;

    cout << "Dime valor de y: ";
    cin >> y;


    resultado = ( sqrt(x) ) / (pow(y,2) - 1);

    cout << "\nResultado: "<< resultado << endl;

    return 0;
}
