//Estructuras Anidadas en C++

#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

struct info_direccion{
    string direccion;
    string ciudad;
    string provincia;
};

struct empleado{
    string nombre;
    struct info_direccion dir_empleado;
    double salario;
}empleados[2]; //Arreglo de estructuras
//EL buffer se llena

int main(){
    for(int i=0; i<2; i++){
        fflush(stdin); //Vaciar el buffer y permitir ingresar los valores
        cout << "Inserte su nombre: ";
        getline(cin, empleados[i].nombre);
        cout << "Ingrese su direccion: ";
        getline(cin, empleados[i].dir_empleado.direccion);
        cout << "Ciudad: ";
        getline(cin, empleados[i].dir_empleado.ciudad);
        cout << "Provincia: ";
        getline(cin, empleados[i].dir_empleado.provincia);
        cout << "Salario: ";
        cin >> empleados[i].salario;
        cout << "\n";
    }

    //Imprimiendo los datos
    for(int i=0; i<2; i++){
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Direccion: " << empleados[i].dir_empleado.direccion << endl;
        cout << "Ciudad: " << empleados[i].dir_empleado.ciudad << endl;
        cout << "Provincia: " << empleados[i].dir_empleado.provincia << endl;
        cout << "Salario: " << empleados[i].salario;
        cout << "\n\n";
    }

    getch();
    return 0;
}