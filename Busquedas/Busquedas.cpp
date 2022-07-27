//Busqueda Secuencial
//a[5] = {3,4,2,1,5};   dato = 4;

#include <iostream>
#include <conio.h>
using namespace std;

void intercambio(int &x, int &y){
    int aux;

    aux = x;
    x = y;
    y = aux;
}

void quickSort(int a[], int primero, int ultimo){
    int i,j,central,aux;
    int pivote;

    central = (primero + ultimo) /2;
    pivote = a[central];
    i = primero; j = ultimo;

    do{
        while(a[i] > pivote) i++;
        while(a[j] < pivote) j--;

        if(i<=j){
            intercambio(a[i], a[j]);
            i++;
            j--;
        }
    }while(i<=j);

    if(primero < j){
        quickSort(a,primero,j); //Ordenamos la sublista izquierda
    }if(i < ultimo){
        quickSort(a,i,ultimo); //Ordenamos la sublista derecha 
    }
}

void busqueda_binaria(int numeros[],int n, int dato){
    quickSort(numeros,0,n);
    int inf,sup,mitad;
    char band = 'F';
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

}

void busqueda_secuencial(int a[], int dato, int n){
    int i=0;
    char band ='F';
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
}

int main(){
    int a[100];
    int i,dato = 0, n;
    int inf,sup,mitad, busqueda;
    char band = 'F';
    
    cout << "Ingrese el numero de elementos del arreglo: "; cin >> n;
    cout << "\n==============ARRAY==============\n\n";
    for(i=0; i<n; i++){
        cout << "Ingrese un numero ["<<i<<"]: "; cin >> a[i]; 
    }
    cout << "\nIngrese el numero a buscar: "; cin >> dato;

    cout << "\n==============METODOS==============\n";
    
    cout << "\n(1)Busqueda Secuencial"; 
    cout << "\n(2)Busqueda Binaria";
    cout << "\nIngrese el metodo de busqueda a utilizar: ";
    cin >> busqueda; cout << endl;
    
    switch (busqueda){
        case 1: busqueda_secuencial(a,dato,n); break;
        case 2: {
            busqueda_binaria(a,n,dato);
            break;
        }
        default: cout << "La opción no esta programada"; break;
    }

    getch();
    return 0;
}