/*1. Hacer un programa que pida al usuario que digite una cadena de caracteres, verificar la longitud de la
cadena, y si ésta supera a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla.    */

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char cadena[50];
    cout << "Ingrese una cadena de caracteres: ";
    cin.getline(cadena,50,'\n');

    if(strlen(cadena) > 10){
        cout << "\nLa cadena es: " <<cadena;
    }else{
        cout << "La cadena es menor a 10 caracteres";
    }




    getch();
    return 0;
}