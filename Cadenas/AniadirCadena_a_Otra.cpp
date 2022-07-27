//Añadir o concatenar una cadena con otra  -  Función strcat()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char cad1[] = "Esto es una cadena";
    char cad2[] = " de ejemplo";
    char cad3[50];

    strcat(cad1,cad2); //cad1 = "Esto es una cadena de ejemplo";
    cout << cad1 << endl;

    getch();
    return 0; 
}