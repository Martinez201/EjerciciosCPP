#include <iostream>

using  namespace std;

int main(){

    float a,b,c,d;
    float resultado,resultado2;

    cout << "Dime el valor de A: ";
    cin >> a;

    cout << "Dime el valor de B: ";
    cin >> b;

    cout << "Dime el valor de C: ";
    cin >> c;

    cout << "Dime el valor de D: ";
    cin >> d;



    resultado = (a/b) + 1;
    resultado2 = (a+b) / (c+d);

    cout.precision(2); // si es un numero flotante con esto indico que redondee que salga por pantalla dos primeros decimales despues de la coma


    cout << "\nResultado: "<< resultado << endl;
    cout << "\nResultado2: "<< resultado2 << endl;

    return 0;
}