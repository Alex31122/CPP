/*1. Hacer una estructura llamada corredor, en la cual se tendrán los siguientes campos: Nombre, edad,sexo,
club, pedir datos al usuario para un corredor, y asignarle una categoría de competición:
- Juvenil <= 18 años
- Señor <= 40 años
- Veterano > 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoria de competición. */
#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

struct corredor{
    string nombre;
    int edad;
    string sexo;
    string club;
}corredor[100];

int main(){
    string categoria;
    int NC;
    cout << "Ingrese el numero de corredores: ";
    cin >> NC;
    for(int i=0; i<NC; i++){
        fflush(stdin);
        cout << "Ingrese su nombre: ";
        getline(cin,corredor[i].nombre);
        cout << "Edad: "; cin >> corredor[i].edad;
        fflush(stdin);
        cout << "Sexo: ";
        getline(cin, corredor[i].sexo);
        cout << "Club: ";
        getline(cin, corredor[i].club);

        if(corredor[i].edad <= 18){
            categoria = "Juvenil";
        }else if(corredor[i].edad <= 40){
            categoria = "Senior";
        }else{
            categoria = "Veterano";
        }
        cout << "\n\n";
    }

    for(int i=0; i<NC; i++){
        cout << "\n==========DATOS DEL CORREDOR: " << i+1 << "==========\n\n";
        cout << "Nombre: " << corredor[i].nombre << endl;
        cout << "Edad: " << corredor[i].edad << endl;
        cout << "Sexo: " << corredor[i].sexo << endl;
        cout << "Club: " << corredor[i].club << endl;
        cout << "Categoria: " << categoria << endl;
    }
    getch();
    return 0;
}
