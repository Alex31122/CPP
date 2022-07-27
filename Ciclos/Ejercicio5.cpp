/*5. Escriba un programa que lea valores enteros hasta que se introduzca un
valor en el rango [20-30] o se introduzca el valor 0. El debe entregar la suma
de los valores mayores a 0 introducidos. */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int numero, suma;

    do{
        cout << "Ingrese un numero: "; cin>>numero;

        if(numero>0){
        suma += numero;  
        }

    }while((numero < 20) || (numero >30) && numero != 0);

    cout << "\nLa suma de los numeros es: " << suma << endl;

    system("pause");
    return 0;
}