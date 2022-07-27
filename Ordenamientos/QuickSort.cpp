//Ordenamiento Quick Sort

#include <iostream>
#include <conio.h>
using namespace std;

void intercambio(float &x, float &y){
    float aux;

    aux = x;
    x = y;
    y = aux;
}

float mostrar_array(float numeros[], int n){
    int i;
    cout << "\nOrden Ascendente: ";
    for(i=0; i<n; i++){
        cout << numeros[i] << ", ";
    }

    cout << "\nOrden Desendente: ";
    for(i=n-1; i>=0; i--){
        cout << numeros[i] << ", ";
    }

    return 0;
}

void quickSort(float a[], int primero, int ultimo){
    int i,j,central,aux;
    float pivote;

    central = (primero + ultimo) /2;
    pivote = a[central];
    i = primero; j = ultimo;

    do{
        while(a[i] < pivote) i++;
        while(a[j] > pivote) j--;

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

int main(){
    float arreglo[100];
    int n;

    cout << "Ingrese el numero de elementos de el arreglo: "; cin >> n;
    for(int i=0; i<n; i++){
        cout << "Ingrese un numero [" << i << "]: ";
        cin >> arreglo[i];
    }
    
    quickSort(arreglo, 0, n-1);
    mostrar_array(arreglo,n);

    getch();
    return 0;
}