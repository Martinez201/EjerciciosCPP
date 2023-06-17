#include <iostream>

using namespace std;

int main(){

    int n1 ,n2= 0;
    int suma,resta,multiplicacion;
    double division;
    int resto;


    cout << "Dime un numero: ";
    cin >> n1;

    cout << "Dime otro  numero: ";
    cin >> n2;

    suma = n1 + n2;
    resta = n1 - n2;
    division  = n1 / n2;
    multiplicacion = n1 * n2;
    resto = n1 % 2;

    cout << "\nEl resultado de la suma es : " << suma << endl;
    cout << "\nEl resultado de la resta es : " << resta << endl;
    cout << "\nEl resultado de la multiplicacion es : " << multiplicacion << endl;
    cout << "\nEl resultado de la division es : " << division << endl;
    cout << "\nEl resto de la division  es : " << resto << endl;

    return 0;

}