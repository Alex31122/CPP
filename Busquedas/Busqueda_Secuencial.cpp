//Busqueda Secuencial
//a[5] = {3,4,2,1,5};   dato = 4;

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    //Tambien sirve para caracteres
    // char a[] = {'e','o','a','u','i'};
    int a[100];
    int i,dato = 0, n;
    char band = 'F';

    cout << "Ingrese el numero de elementos del arreglo: "; cin >> n;
    cout << "\n==============ARRAY==============\n\n";
    for(i=0; i<n; i++){
        cout << "Ingrese un numero ["<<i<<"]: "; cin >> a[i]; 
    }
    cout << "\nIngrese el numero a buscar: "; cin >> dato;

    //Busqueda secuencial
    i=0;
    while((band == 'F') && (i<n)){
        if(a[i] == dato){
            band = 'V';
        }
        i++;
    }

    if(band == 'F'){
        cout << "El numero a buscar no existe en el arreglo";
    }else if(band == 'V'){
        cout << "El numero a sido encontrado en la pos: " << i-1 <<endl;
    }

    getch();
    return 0;
}