/*8. Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos: el nombre de la persona y un valor
de tipo lógico que indica si la persona tiene algún tipo de discapasidad. Realice un programa que dado un vector de personas rellene dos nuevos
vectores: uno que contenga las personas que no tienen ninguna discapasidad y otro que contenga las personas con discapacidad.   */

#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

struct Persona{
    string nombre;
    bool discapacidad; //1 = Verdadero | 0 = Falso
}personas[100],personasSinD[100], personasConD[100];
//Personas sin Discapacidad


int main(){
    int NP, j=0, k=0;

    cout << "Ingrese el numero de personas: "; cin >> NP;

    for(int i=0; i<NP; i++){
        fflush(stdin);
        cout << "Ingrese su nombre: ";
        getline(cin,personas[i].nombre);
        cout << "La persona tiene discapacidad(1/0): ";
        cin >> personas[i].discapacidad;

        //Almacenando personas con discapacidad
        if(personas[i].discapacidad == 1){
            personasConD[j].nombre = personas[i].nombre;
            j++;
        }else{
            personasSinD[k].nombre = personas[i].nombre;
            k++;
        }
        cout << "\n";
    }

    cout << "\n==========Personas sin Discapacidad==========\n\n";
    for(int i=0; i<k; i++){
        cout << personasSinD[i].nombre << endl;
    }

    cout << "\n==========Personas con Discapacidad==========\n\n";
    for(int i=0; i<j; i++){
        cout << personasConD[i].nombre << endl;
    }


    return 0;
}