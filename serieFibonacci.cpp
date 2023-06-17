#include<iostream>
#include<stdlib.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int numero;
    int x = 0;
    int y = 1;
    int z = 1;

    cout << "Escriba el numero de elentos: ";
    cin >> numero;
    
    cout << "1 ";

    for ( int i = 1; i < numero; i++)
    {
        z = x + y;
        cout << z << " ";

        x = y;
        y = z;
    }  
    cout << endl;

    system("pause");

    return 0;
}

