/*8. Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real, convertirlos a sus respectivos
valores y por último sumarlos.  */

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){

    char cad1[10], cad2[10];
    int numeros; float numeros2, suma;

    cout << "Ingrese una cadena de numeros enteros: ";
    cin.getline(cad1,10,'\n');

    cout << "Ingrese una cadena de numeros reales: ";
    cin.getline(cad2,10,'\n');

    numeros = atoi(cad1);
    numeros2 = atof(cad2);
    suma = numeros + numeros2;

    cout << "El resultado de la suma es: " << suma << endl;

    getch();
    return 0;
}