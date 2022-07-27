//Cadenas de Caracteres

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char palabra[] = "Alejandro";
    char palabra2[] = {'A','l','e','j','a','n','d','r','o'};
    char nombre[30];

    cout << palabra << endl;
    cout << palabra2 << endl;
    nombre[20];

    cout << "Ingrese su nombre: ";
    // cin >> nombre; con el cin solo se guarda hasta que haya un espacio ejemplo A I solo guardaria el A.
    // gets(nombre);
    cin.getline(nombre,20,'\n');

    cout << nombre << endl;




    getch();
    return 0;
}