#include <iostream>

using  namespace std;


int main(){

    float a,b,c,d,e,f = 0;
    float resultado = 0;


    cout << "Dime el valor de A: ";
    cin >> a;

    cout << "Dime el valor de B: ";
    cin >> b;

    cout << "Dime el valor de C: ";
    cin >> c;

    cout << "Dime el valor de D: ";
    cin >> d;

    cout << "Dime el valor de E: ";
    cin >> e;

    cout << "Dime el valor de F: ";
    cin >> f;


    resultado = (a + (b/c) )/(d + (e/f) );

    cout.precision(3);

    cout << "\nResultado: "<< resultado << endl;

    return 0;
}