/*3. Realice un programa que calcule y muestre en la salida estándar la suma de
los cuadrados de los 10 primeros enteros mayores que cero.*/


#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int suma, cuadrado;

    for(int i=1; i<=10; i++){
        cuadrado = i*i;
        suma += cuadrado;   //suma = suma + cuadrado
    }
    cout << "La suma de los cuadrados de los primeros 10 numeros es: " << suma << "\n\n";
    system("pause");
    return 0;
}