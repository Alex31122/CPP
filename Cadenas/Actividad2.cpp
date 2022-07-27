/*2. Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copia su contenido hacia otro 
arreglo de caracteres.  */

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char frase[20], frase2[20];

    cout << "Inserte una frase: "; 
    cin.getline(frase, 20, '\n');

    strcpy(frase2, frase);  //Guardando dentro de la frase2

    cout << frase << endl;


    getch();
    return 0;
}