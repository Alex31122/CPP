/*2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la díagonal
principal de la matriz. */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[100][100], filas, columnas;

    cout << "\nIngrese el numero de filas: "; cin >> filas;
    cout << "Ingrese el numero de columnas: "; cin >> columnas; cout << "\n";

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout << "Ingrese un numero [" <<i<< "][" <<j<< "]: ";
            cin >> numeros[i][j];
        }
    }

    cout << "\nLa diagonal principal es: \n"; 
    for(int i=0; i<filas; i++){
       for(int j=0; j<columnas; j++){
            if(i==j){
                cout << numeros [i][j]<<endl;
            }
       }

    }


    getch();
    return 0;
}