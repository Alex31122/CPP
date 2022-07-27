/*4. Crear una cadena que tenga la siguiente frase "Hola que tal", luego crear otra cadena para preguntarle al usuario su nombre,
por último añadir el nombre al final de la primera cadena y mostrar el mensaje completo "Hola que tal (NombreDelusuario)". */

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char saludo[] = "Hola que tal ";
    char nombre[50];

    cout << "Ingrese su nombre: ";
    cin.getline(nombre,50,'\n');
    
    strcat(saludo,nombre);  //Concatenando las 2 cadenas
    cout << "Frase: " << saludo;

    getch();
    return 0;
}