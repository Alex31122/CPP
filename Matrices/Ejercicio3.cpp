/*3. Hacer una matriz de tipo entera de 2 * 2. Llenarla de números y luego copiar todo su contenido
hacia otra matriz. */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[100][100], filas, columnas;
    int Matriz[100][100];

    cout << "\nIngrese el numero de filas: "; cin >> filas;
    cout << "Ingrese el numero de columnas: "; cin >> columnas; cout << "\n";

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout << "Ingrese un numero: [" <<i<< "][" <<j<< "]: ";
            cin >> numeros[i][j];
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