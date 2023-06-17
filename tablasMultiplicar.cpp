#include<iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    int numero;

    do
    {
        cout << "Escriba un numero: ";
        cin >> numero;

    } while (numero < 1 || numero > 10);
    

    for ( int i = 0; i <= 10; i++)
    {
        cout << numero << " * " << i << " = "<< numero * i  << endl;
    }  

    return 0;
}

