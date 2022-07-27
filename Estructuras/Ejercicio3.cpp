/*3. Realizar un programa que lea un arreglo de estructuras los datos de N, empleados de la empresa y que 
imprima los datos del empleado con mayor y menor salario. */

#include <iostream>
#include <conio.h>
#include <cstring>
using namespace std;

struct Empleado{
    string nombre;
    float salario;
}emp[100];

int main(){
    int NE, posM, posm;
    float mayor = 0, menor = 99999999;

    cout << "Ingrese el numero de empleados: ";
    cin >> NE;

    for(int i=0; i<NE; i++){
        fflush(stdin);
        cout << i+1 << ". Nombre: ";
        getline(cin,emp[i].nombre);
        cout << i+1 << ". Salario: "; cin >> emp[i].salario;

        //Empleado de mayor salario
        if(emp[i].salario > mayor){
            mayor = emp[i].salario;
            posM = i;
        }
        //Empleado de menor salario
        if(emp[i].salario < menor){
            menor = emp[i].salario;
            posm = i;
        }
        cout << "\n";
    }

    cout << "\n==========EMPLEADO CON MAYOR SALARIO==========\n\n";
    cout << "Nombre: " << emp[posM].nombre << endl;
    cout << "Salario: " << emp[posM].salario << endl;

    cout << "\n==========EMPLEADO CON MENOR SALARIO==========\n\n";
    cout << "Nombre: " << emp[posm].nombre << endl;
    cout << "Salario: " << emp[posm].salario << endl;

    getch();
    return 0;
}