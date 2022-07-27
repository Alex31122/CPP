/*5. Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta.
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original. 

/1 2 3/             /1 4 7/
/4 5 6/     --->    /2 5 8/
/7 8 9/             /3 6 9/

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int numeros[100][100], filas, columnas;

    cout << "\nIngrese el numero de filas: "; cin >> filas;
    cout << "Ingrese el numero de columnas: "; cin >> columnas; cout << endl;

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout << "Ingrese un numero: [" <<i<< "][" <<j<< "]: ";
            cin >> numeros[i][j];
            
        }
    }

    cout << "\nMatriz Original:\n";
     for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){ 
            cout << numeros[i][j] << " , ";
        }
        cout << "\n";
    }
    cout << "\nMatriz Transpuesta:\n";
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout << numeros[j][i] << " , ";
        }
        cout << "\n";
    }

    getch();
    return 0;
}