/*5. Hacer 2 estructuras una llamada promedio que tendrá los siguientes campos: nota1, nota2, nota3; y otro llamado alumno que tendrá los 
siguientes miembros: nombre, sexo, edad; hacer que la estructura promedio este anidada en la estructura alumno, luego pedir todos los datos
para un alumno, luego calcular su promedio, y por último imprimir todos sus datos incluidos el promedio.   */
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
}A1;

int main(){
    float promedio_alumno;

    cout << "Nombre: ";
    getline(cin,A1.nombre);
    cout << "Sexo: ";
    getline(cin,A1.sexo);
    cout << "Edad: ";
    cin >> A1.edad;

    cout << "\n==========Notas del Alumno==========\n\n";
    cout << "Promedio 1: "; cin >> A1.prom.nota1;
    cout << "Promedio 2: "; cin >> A1.prom.nota2;
    cout << "Promedio 3: "; cin >> A1.prom.nota3;

    promedio_alumno = (A1.prom.nota1 + A1.prom.nota2 + A1.prom.nota3) / 3;

    cout << "\n==========Datos del Alumno==========\n\n";
    cout << "Nombre: " << A1.nombre <<endl; 
    cout << "Sexo: "<< A1.sexo << endl; 
    cout << "Edad: " << A1.edad << endl;
    cout << "Promedio: " << promedio_alumno << endl;

    return 0;
}