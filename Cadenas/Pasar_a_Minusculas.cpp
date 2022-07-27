//Pasar una palabra a minusculas  -  Función strlwr()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char palabra[] = "ALEJANDRO";
    strlwr(palabra);
    
    cout << "La palabra es: " << palabra;

    getch();
    return 0;
}