/*1. Hacer un programa para rellenar una matriz pidiendo al usuario el número de filas y columnas,
Posteriormente mostrar la matriz en pantalla. */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n,x;
    int numeros[100][100], filas, columnas;
    
    cout << "\nIngrese el numero de filas que tenga el arreglo: "; cin >> filas;
    cout << "Ingrese el numero de columnas que tenga el arreglo: "; cin >> columnas; cout << "\n";

    //Almacenando elementos en la matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout << "Ingrese un numero [" <<i<< "][" <<j<< "]: ";
            cin >> numeros[i][j];
        }
    }

    cout << "\n"; //Mostrando la matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout << numeros[i][j];
        }
        cout << "\n";
    }
    getch();
    return 0;
}