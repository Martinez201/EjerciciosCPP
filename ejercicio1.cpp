#include <iostream>

using  namespace std;

int main(){

    int edad;
    char sexo[10];
    float altura;

    cout << "Dime tu edad: ";
    cin >> edad;

    cout << "Dime tu sexo: ";
    cin >> sexo;

    cout << "Dime tu altura: ";
    cin >> altura;


    cout << "\nEdad: "<< edad << endl;
    cout << "\nSexo: "<< sexo << endl;
    cout << "\nAltura: "<< altura << endl;

    return 0;
}