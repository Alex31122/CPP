//6. Convertir dos cadenas de minusculas a MAYUSCULAS. Compararlas, y decir si son iguales o no.

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char palabra[20], palabra2[20];

    cout << "Ingrese una palabra: ";
    cin.getline(palabra,20,'\n');
    cout << "Ingrese otra palabra: ";
    cin.getline(palabra2,20,'\n');

    strupr(palabra); strupr(palabra2);

    if(strcmp(palabra,palabra2) == 0){
        cout << "\nLas dos palabras son iguales";
    }else{
        cout << "\nLas palabras son diferentes";
    }

    getch();
    return 0;
}