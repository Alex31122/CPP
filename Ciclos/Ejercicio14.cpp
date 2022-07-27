/*14. En una clase de 5 alumnos se han realizado tres exámenes y se requiere
determinar el número de: 
    a) Alumnos que aprobaron todos los exámenes.
    b) Alumnos que aprobaron al menos un examen.
    c) Alumnos que aprobaron únicamente el último examen.

Realice un programa que permita la lectura de los datos y el cálculo de las
estadísticas.  */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    float E1, E2, E3; 
    int Almenos1 = 0, Solo_Ultimo = 0, Todos = 0;

    for(int i=1; i<=5; i++){
        cout << "\n" << i <<". Ingrese la calificacion del examen 1: "; cin >> E1;
        cout << i << ". Ingrese la calificacion del examen 2: "; cin >> E2;
        cout << i << ". Ingrese la calificacion del examen 3: "; cin >> E3;

        if(E1 >= 6 || E2 >=6 || E3 >=6){
                Almenos1 ++;
            if(E1 < 6 && E2 < 6){
                Solo_Ultimo ++;
            }else if(E1 >= 6 && E2 >=6 && E3 >=6){
                Todos ++; 
            }else{}
        }
        else{}
    }

    cout << "\nTotal de alumnos que aprobaron todos los examenes:  " << Todos;
    cout << "\nTotal de alumnos que aprobaron almenos 1:  " << Almenos1;
    cout << "\nTotal de alumnos que aprobaron solo el ultimo:  " << Solo_Ultimo << endl;

    system("pause");
    return 0;
}