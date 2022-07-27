/*7. Pedir su nombre al usuario en MAYUSCULA, si su nombre comienza por la letra A, convertir su nombre a minusculas
caso contrario no convertirlo.  */

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main(){

    char nombre[30];

    cout << "Ingrese su nombre en mayusculas: ";
    cin.getline(nombre,20,'\n');

    if(strncmp(nombre,"A",1) == 0){
        strlwr(nombre);
        cout << nombre << endl;
    }else{
        cout << "El nombre no comienza con la letra A";
    }

    getch();
    return 0;
}