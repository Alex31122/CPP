/*10. Escriba un programa que calcule el valor de: 1!+2!+3!+...+n!
(suma de factoriales). */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int n, factorial = 1, suma = 0;
    
    cout << "Ingrese el numero de elementos a sumar: "; cin >> n;

    for(int i=1; i<=n; i++){
        factorial *= i;
        suma += factorial;
    }

    cout << "La suma de factoriales es: " << suma << endl; 
    system("pause");
    return 0;
}