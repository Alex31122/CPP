/*7. Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La estructura debe tener tres campos: horas, minutos y
segundos. Escriba un programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas.    */

#include <iostream>
#include <cstring>
using namespace std;

struct etapa{
    int horas, minutos, segundos;
}Etapa[100];

int main(){
    int NE,TH = 0,TM = 0,TS = 0;

    cout << "Ingrese el numero de etapas: "; cin >> NE;
    for(int i=0; i<NE; i++){
        fflush(stdin);
        cout << "Horas: "; cin >> Etapa[i].horas;
        cout << "Minutos: "; cin >> Etapa[i].minutos;
        cout << "Segundos: "; cin >> Etapa[i].segundos;

        TH += Etapa[i].horas;
        TM += Etapa[i].minutos;
        if(TM >= 60){
            TM -= 60;
            TH ++;
        }
        TS += Etapa[i].segundos;
        if(TS >= 60){
            TS -= 60;
            TM ++;
        }
        cout << "\n";
    }

    cout << "\n==========Tiempo total empleado==========\n\n";
    cout <<TH<< " Horas" << endl;
    cout <<TM<< " Minutos" << endl;
    cout <<TS<< " Segundos" << endl;


    return 0;
}