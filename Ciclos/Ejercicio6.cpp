/*6. Escriba un programa que calcule x^y, donde tanto x como y son enteros
positivos, sin utilizar la función pow. */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int x, y, elevacion = 1;
    
    cout << "Ingrese un numero: "; cin >> x;
    cout << "Ingrese el numero al que lo quiere elevar: "; cin >> y;    
        
    for(int i=1; i<=y; i++){
        elevacion = elevacion * x;
    }
    
    cout << "\nEl resultado de la elevacion es: " << elevacion << endl;

    system("pause");
    return 0;
}