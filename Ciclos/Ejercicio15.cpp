/*15. Realice un programa que solicite al ususario que piense un número entero entre el 1 y el 100.
El programa debe generar un númeo aleatorio en ese mismo rango [1-100], e indicarle al usuario si 
el número que digito es menor o mayor al número aleatorio, así hasta que lo adivine. Por ultimo mostrarle
el numero de intentos que le llevo.

variable = limite_inferior + rand() % (limite_superior +1 - limite_inferior);   */

//Tu adivinas un número aleatorio.

#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
    int numero, dato, contador = 0;

    srand(time(NULL));  //generar un número aleatorio;
    dato = 1 + rand()%(100); //Utiliza la ecuacion de arriba, aqui se almacena el numero random;
    //    Limite inferior + rand()% (100 + 1 - (1));

    do{
        cout << "Ingrese un numero: "; cin >> numero;

        if(numero > dato){
            cout<<"\nIngrese un numero menor\n";
        }
        if(numero < dato){
            cout<<"\nIngrese un numero mayor\n";
        }
        contador ++;
    }while(numero != dato);

    cout << "\nFELICIDADES ADIVINASTE EL NUMERO\n";
    cout << "Numero de intentos: " << contador << "\n\n";

    system("pause");
    return 0;
}