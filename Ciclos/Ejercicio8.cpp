//8. Escriba un programa que calcule el valor de: 1+3+5+...+2n-1

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int n, sumaT = 0;
    
    cout << "Ingrese el numero de elementos a sumar: "; cin >> n;
    for(int i=1; i<=2*n-1; i+=2){
        sumaT += i; 
    }

    cout << "\nEl resultado de la suma es: " << sumaT << endl; 

    system("pause");
    return 0;
}