/*4. Escriba un programa que tome cada 4 horas la temperatura exterior,
leyéndola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas.
Calcule la temperatura media del día, la temperatura más alta y la más baja. */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    float temperatura, mayor =0, menor = 999999; 
    float sumaT, media, TMA;

    for(int i=0; i<24; i+=4){
        cout << "Temperatura de la hora "<< i << " : "; cin>>temperatura;
        
        sumaT += temperatura;
        TMA = temperatura;
        if(temperatura > mayor){
            mayor = temperatura;
        }
        if(temperatura < menor){
            menor = temperatura;
        }
    }

    media = sumaT / 6;

    cout << "\nTemperatura Promedio: " << media << endl;
    cout << "Temperatura mas alta: " << mayor << endl;
    cout << "Temperatura mas baja: " << menor << endl;

    system("pause");
    return 0;
}