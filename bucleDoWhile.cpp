#include<iostream>
#include<stdlib.h>

using namespace std;


int main(int argc, char const *argv[])
{
    
    int i;

    i = 1;

    
    do{
        cout<<i<<endl;

        i++;

    }while (i <= 10);

    system("pause"); //pausa la ejecución del programa hasta que se pulse una tecla similar al getch de la libreria conio.h
    

    return 0;
}

