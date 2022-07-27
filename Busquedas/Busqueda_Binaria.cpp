//Busqueda Binaria

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int numeros[100];
    int inf,sup,mitad,dato,n;
    char band = 'F';

    cout << "Ingrese el numero de elementos del arreglo: "; cin >> n;
    cout << "\n==============ARRAY==============\n\n";
    for(int i=0; i<n; i++){
        cout << "Ingrese un numero ["<<i<<"]: "; cin >> numeros[i]; 
    }
    cout << "\nIngrese el numero a buscar: "; cin >> dato;

    //Algoritmo de la Busqueda Binaria
    inf = 0;
    sup = n;

    while(inf <= sup){
        mitad = (inf + sup)/2;
        if(numeros[mitad] == dato){
            band = 'V';
            break;
        }
        if(numeros[mitad] > dato){
            sup = mitad;
            mitad = (inf + sup)/2;
        }
        if(numeros[mitad] < dato){
            inf = mitad;
            mitad = (inf + sup)/2;
        }
    }

    if(band == 'V'){
        cout << "El numero a sido encontrado en la pos: " << mitad <<endl;
    }else{
        cout << "El numero a buscar no existe en el arreglo";
    }

    getch();
    return 0;
}