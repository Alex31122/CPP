/*2. Hacer una estructura llamada alumno, en la cual se tendrán los siguientes Campos: Nombre, edad, promedio,
pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir
los datos del alumno. */

#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

struct alumno{
    string nombre;
    int edad;
    float promedio;
}alumno[10];

int main(){
    float mayor = 0;
    int pos;

    for(int i=0; i<3; i++){
        //Guardando datos para 3 alumnos
        fflush(stdin);
        cout << i+1 << ". Nombre: ";
        getline(cin,alumno[i].nombre);
        cout << i+1 << ". Edad: "; cin >> alumno[i].edad;
        cout << i+1 << ". Promedio: "; cin >> alumno[i].promedio;
        cout << "\n";

        //Comprobando cual de los 3 alumnos tiene el mejor promedio
        if(alumno[i].promedio > mayor){
            mayor = alumno[i].promedio;
            pos = i;
        }
    }

    //Imprimiendo datos del mejor promedio
    cout << "\n==========DATOS DEL ALUMNO CON MEJOR PROMEDIO==========\n";
    cout << "\nNombre: " << alumno[pos].nombre << endl;
    cout << "Edad: " << alumno[pos].edad << endl;
    cout << "Promedio: " << alumno[pos].promedio << endl;

    getch();
    return 0;
}
