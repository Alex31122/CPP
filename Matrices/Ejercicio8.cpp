/*7. Desarrolar un programa que determine si una matriz es simétrica o no. Una matriz es simétrica si es 
cuadrada y si es igual a su matriz transpuesta.

/8 1 3/             /8 1 3/
/1 7 4/     --->    /1 7 4/
/3 4 9/             /3 4 9/

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    
    int numeros[100][100], filas, columnas, valor = 0;
    char band ='F';
    
    cout << "\nIngrese el numero de filas: "; cin >> filas;
    cout << "Ingrese el numero de columnas: "; cin >> columnas; cout << "\n";

    //Almacenando elementos en la matriz
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout << "Ingrese un numero [" <<i<< "][" <<j<< "]: ";
            cin >> numeros[i][j];
        }
    }

    if(filas==columnas){
        for(int i=0; i<filas; i++){
            for(int j=0; i<columnas; j++){
                if(numeros[i][j] == numeros[j][i]){
                    band = 'V';
                }
            }
        }
    }

    if(band == 'V'){
        cout << "La matriz es simetrica";
    }
    else{
        cout << "La matriz NO es simetrica";
    }



    getch();
    return 0;
}