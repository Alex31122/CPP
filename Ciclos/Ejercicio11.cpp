//11. Escriba un programa que calcule el valor de: 2^1 + 2^2 + 2^3 + ... + 2^n

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(){

    int n, elevacion = 1, suma = 0;
    
    cout << "Ingrese el numero de elementos a sumar: "; cin >> n;
    
    for(int i=1; i<=n; i++){
        elevacion = pow(2,i);
        suma += elevacion;  //suma iterativa. Porque "elevacion" va cambiando su valor.
    }
    
    cout << "\nLa suma total es: " << suma << endl;

    system("pause");
    return 0;
}