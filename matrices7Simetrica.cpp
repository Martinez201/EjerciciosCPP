/*7. Desarrollar un programa que determine si una matriz es simetrica o no. Una matriz
es simetrica si es cuadrada y si es igual a su matriz transpuesta.


|8 1 3|        |8 1 3|
|1 7 4|  -->   |1 7 4| 
|3 4 9|        |3 4 9|

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100],filas,columnas;
	bool flag = false;
	
	cout<<"Digite el numero de filas: "; cin>>filas;
	cout<<"Digite el numero de columnas: "; cin>>columnas;
	
	//Rellenando matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	//Comprobemos si es simetrica
	if(filas==columnas){
		for(int i=0;i<filas;i++){
			for(int j=0;j<columnas;j++){
				if(numeros[i][j] == numeros[j][i]){

					flag = true;

				}
			}
		}
	}

	if(flag){
		cout<<"\nEs una matriz simetrica";
	}
	else{
		cout<<"\nNo es una matriz simetrica";
	}
	
	
	getch();
	return 0;
}

