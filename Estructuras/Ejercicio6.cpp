/*6. Utilizar las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos, y calcular cuál de todos tiene el mejor promedio,
e imprimir sus datos.   */

#include <iostream>
#include <cstring>
using namespace std;
struct promedio{
    float nota1, nota2, nota3;
};
struct alumno{
    string nombre, sexo;
    int edad;
    struct promedio prom; //Nombre de variable
}Alumnos[100];

int main(){
    float promedio_alumno[100], mayor = 0;
    int NA, posM;

    cout << "Ingrese el numero de alumnos: "; cin >> NA;
    
    for(int i=0; i<NA; i++){
        fflush(stdin);
        cout << "\n==========Datos del Alumno "<<i+1<<"==========\n\n";
        cout <<i+1<< ". Nombre: ";
        getline(cin,Alumnos[i].nombre);
        cout <<i+1<< ". Sexo: ";
        getline(cin,Alumnos[i].sexo);
        cout <<i+1<< ". Edad: ";
        cin >> Alumnos[i].edad;

        cout << "\n==========Notas del Alumno " << i+1 << "==========\n\n";
        cout << "Nota 1: "; cin >> Alumnos[i].prom.nota1;
        cout << "Nota 2: "; cin >> Alumnos[i].prom.nota2;
        cout << "Nota 3: "; cin >> Alumnos[i].prom.nota3;
        promedio_alumno[i] = (Alumnos[i].prom.nota1 + Alumnos[i].prom.nota2 + Alumnos[i].prom.nota3) / 3;
        if(promedio_alumno[i] > mayor){
            mayor = promedio_alumno[i];
            posM = i;
        }
    }

    cout << "\n==========Datos del Alumno con mejor promedio==========\n\n";
    cout << "Nombre: " << Alumnos[posM].nombre <<endl; 
    cout << "Sexo: "<< Alumnos[posM].sexo << endl; 
    cout << "Edad: " << Alumnos[posM].edad << endl;
    cout << "Promedio: " << promedio_alumno[posM] << endl;

    return 0;
}