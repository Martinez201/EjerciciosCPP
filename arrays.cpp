#include<iostream>
#include<stdlib.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int numeros[] = {1,2,3,4,5};
    int suma = 0;

    for(int i = 0; i < 5; i++){

        suma += numeros[i]; 

    }

    cout << "La suma de los elementos es:" << suma <<endl;

    system("pause"); //pausa la ejecución del programa hasta que se pulse una tecla similar al getch de la libreria conio.h   

    return 0;
}

