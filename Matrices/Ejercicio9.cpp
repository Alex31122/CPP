//8. Realice un programa que calcule el producto de dos matrices cuadradas de 3x3. 

#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[100][100], filas, columnas;
    int numeros2[100][100]; 

    cout  << "\nIngrese el numero de filas: "; cin >> filas;
    cout  << "Ingrese el numero de columnas: "; cin >> columnas; cout << "\n";

    cout << "Primer Matriz: \n\n"; 
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout << "Ingrese un numero [" <<i<< "][" <<j<< "]: ";
            cin >> numeros[i][j];
        }
    }

    cout << "\nSegunda Matriz: \n\n";
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout << "Ingrese un numero [" <<i<< "][" <<j<< "]: ";
            cin >> numeros2[i][j];
        }
    }

    //Producto de matrices

    cout << "\n"; //Mostrando la matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            // numeros3[i][j] = numeros[i][j] + numeros2[i][j];
            cout << numeros[i][j] * numeros2[i][j] << ", ";
        }
        cout << "\n";
    }



    getch();
    return 0;
}