#include<iostream>
#include<stdlib.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int numero,factorial =1;

        cout << "Escriba un numero: ";
        cin >> numero;
    
    for ( int i = 1; i <= numero; i++)
    {
        factorial = factorial * i;
    }  

    cout << factorial << endl;

    system("pause");

    return 0;
}

