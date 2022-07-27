/*16. Realice un programa que calcule la descomposición en factores primos de un número entero.

Por ejemplo: 20 = 2*2*5     */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numero;

    cout << "Ingrese un numero: "; cin >> numero;

    //20 = 10 = 5
    //2 2 5 
    for(int i=2; numero>1; i++){
        while(numero %i == 0){ //Como es el residuo, significa que si se puede dividir por dicho numero
            cout << i << "  "; // Por lo tanto va aumentando hasta poder dividirlo otra vez y lo divide
            numero /= i;       // Por el mismo numero si se sigue pudiendo
        }
    }

    getch();
    return 0;
}