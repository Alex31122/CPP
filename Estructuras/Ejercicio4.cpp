/*4. Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos: nombre, país, numero_medallas. Y devuelva
los datos (Nombre, país) del atleta que ha ganado el mayor número de medallas. */

#include <iostream>
#include <conio.h>
#include <cstring>

using namespace std;

struct atleta{
    string nombre;
    string pais;
    int numero_medallas;
}atleta[100];

int main(){
    int NA, pos, mayor = 0;

    cout << "Ingresa el numero de atletas: "; cin >> NA;

    for(int i=0; i<NA; i++){
        fflush(stdin);
        cout << i+1 << ". Nombre: ";
        getline(cin, atleta[i].nombre);

        cout  << i+1 << ". Pais: ";
        getline(cin, atleta[i].pais);

        cout << i+1 << ". Numero de medallas: ";
        cin >> atleta[i].numero_medallas;

        if(atleta[i].numero_medallas > mayor){
            mayor = atleta[i].numero_medallas;
            pos = i;
        }
        cout << "\n";
    }

    cout << "\n==========ATLETA CON MAS MEDALLAS==========\n";
    cout << "Nombre: " << atleta[pos].nombre << endl;
    cout << "Pais: " << atleta[pos].pais << endl;
    getch();
    return 0;
}
