#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;

int mostrar_array(int numeros[]){
    int i;
    cout << "\nOrden Ascendente: ";
    for(i=0; i<5; i++){
        cout << numeros[i] << ", ";
    }

    cout << "\nOrden Desendente: ";
    for(i=4; i>=0; i--){
        cout << numeros[i] << ", ";
    }

    return 0;
}

int main(){
    int numeros[] = {4,2,3,1,5};
    int i,j,pos,aux,min;

    //Algoritmo del metodo burbuja
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(numeros[j] > numeros[j+1]){
                aux = numeros[j];
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }
    cout << "\n\nAlgoritmo del metodo Burbuja:";
    mostrar_array(numeros);

    //Algoritmo del metodo por Inserción
    for(i=0; i<5; i++){
        pos = i;
        aux = numeros[i];

        while((pos>0) && (numeros[pos-1] > aux)){
            numeros[pos] = numeros[pos-1];
            pos--;
        }
        numeros[pos] = aux;
    }
    cout << "\n\nAlgoritmo del metodo por Insercion:";
    mostrar_array(numeros);

    //Algoritmo del Ordenamiento por Selección
    for(i=0; i<5; i++){
        min = i;
        for(j=i+1; j<5; j++){
            if(numeros[j] < numeros[min]){
                min = j;
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }
    cout << "\n\nAlgoritmo del metodo por Seleccion:";
    mostrar_array(numeros);

    getch();
    return 0;
}