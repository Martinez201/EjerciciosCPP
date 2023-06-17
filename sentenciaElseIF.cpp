#include <iostream>

using  namespace std;

int main() {

    int n1, n2 = 0;

    cout << "Dime un numero: ";
    cin >> n1;

    cout << "Dime otro numero: ";
    cin >> n2;

    if (n1 == n2) {

        cout << "Son iguales" << endl;

    } else if(n1 > n2){

        cout << "El mayor es: "<< n1 << endl;

    }else{

        cout << "El mayor es: "<< n2 << endl;
    }

    return 0;
}