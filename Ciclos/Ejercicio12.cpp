/*12. Hacer un programa que calcule el resultado de la siguiente expresion:
1 - 2 + 3 -4 + 5 - 6 ... n +7 -8 +9 -10*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int expresion = 0, n;
    cout << "Ingrese el numero de elementos a sumar:  "; cin >> n;

    for(int i=1; i<=n; i++){
        
        if(i %2 == 0){
            expresion -= i;
        }else{
            expresion += i;
        }

    }

    cout << "El resultado es: " << expresion;

    getch();
    return 0;
}