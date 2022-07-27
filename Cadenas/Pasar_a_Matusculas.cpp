//Pasar una palabra a MAYUSCULA  -  Función strupr()

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char palabra[] = "Alejandro";
    strupr(palabra);
    cout << palabra << endl;


    getch();
    return 0;
}