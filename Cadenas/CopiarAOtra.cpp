//Copiar el contenido de una cadena a otra  -  funcion strcpy()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char nombre[] = "Alejandro";
    char nombre2[20];

    strcpy(nombre2, nombre);
    // cadena vacia, cadena que tiene el contenido

    cout << nombre2 << endl;


    getch();
    return 0;
}