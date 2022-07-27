/*4. Hacer una matriz preguntando al usuario el numero de filas y columnas, llenar numeros aleatorios, 
copiar el contenido a otra matriz y por último mostrarla en pantalla. */

#include <iostream>
#include <conio.h>
//Funciones para numeroa aleatorios
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

    int numeros[100][100], filas, columnas, dato;
    int Matriz[100][100];

    cout << "\nIngrese el numero de filas: "; cin >> filas;
    cout << "Ingrese el numero de columnas: "; cin >> columnas; cout << "\n";

    srand(time(NULL)); //generar numeros aleatorios

    //Rellendando matriz de numeros aleatorios
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            dato = 1+rand()%(100); // generando numeros aleatorios (1-100)
            numeros[i][j] = dato;
            Matriz[i][j] = numeros[i][j]; 
        }
    }

    cout << "\nMostrando la matriz copiada: \n\n";
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout << Matriz[i][j] << ", ";
        }
        cout << "\n";
    }

    getch();
    return 0;
}