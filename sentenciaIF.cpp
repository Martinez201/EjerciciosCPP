#include <iostream>

using  namespace std;

int main(){

    int numero,dato = 5;

    cout << "Dime un numero: ";
    cin >> numero;

    if( numero == dato){

        cout << "El numero es 5" << endl;
    }
    else{

        cout << "El numero es  distinto a 5" << endl;
    }

    if( numero > dato){

        cout << "El numero es mayor que 5" << endl;
    }
    else{

        cout << "El numero es menor que 5" << endl;
    }

    if( numero < dato){

        cout << "El numero es menor que 5" << endl;
    }
    else{

        cout << "El numero es mayor que 5" << endl;
    }




    return 0;
}