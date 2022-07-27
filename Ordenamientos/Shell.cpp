//Ordenamiento Shell

#include <iostream>
#include <conio.h>
using namespace std;

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

void intercambio(float &x, float &y){
    float aux;

    aux = x;
    x = y;
    y = aux;
}

void ordenacionShell(float a[],int n){
    int salto, i,j,k;
    salto = n/2;

    while(salto>0){
        for(i=salto; i<n; i++){
            j = i - salto;
            while(j>=0){
                k = j + salto;
                if(a[j] <= a[k]){ //Par de elementos estan ordenados
                    j= -1;
                }else{ //Par de elementos estan desordenados
                    intercambio(a[j], a[k]);
                    j -= salto;
                }
            }
        }
        salto = salto/2;
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

    ordenacionShell(arreglo, n);
    mostrar_array(arreglo,n);

    getch();
    return 0;
}