//9. Escriba un programa que calcule el valor de: 1*2*3...*n (factorial)

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int n, factorial = 1;
    
    cout << "Ingrese el numero a sacar su factorial: "; cin >> n;

    for(int i=1; i<=n; i++){
        factorial *= i; 
    }

    cout << "\nEl factorial del numero es: " << factorial << endl; 

    system("pause");
    return 0;
}