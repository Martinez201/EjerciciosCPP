#include <iostream>

using  namespace std;

int main(){

    int edad;

    cout << "Dime tu edad: ";
    cin >> edad;

    if( edad >= 18 && edad <=25){

        cout << "\nSu edad esta en el rango [18-25] "<< endl;

    }
    else{

        cout << "\nSu edad no esta en el rango [18-25] "<< endl;
    }

    

    return 0;
}