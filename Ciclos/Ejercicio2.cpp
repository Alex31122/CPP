/*2. Realice un programa que lea de la entrada estándar números hasta que se
introduzca un cero. en ese momento el programa debe terminar y mostrar en la 
salida estándar el número de valores mayores que cero leídos. */

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int numero, conteo = 0;
    do{
        cout << "Ingrese un numero: "; cin>>numero;

        if(numero>0){
        conteo ++; 
        }
    }while(numero != 0);
    
    cout << "El numero de valores mayores a cero introducidos es: " << conteo<<endl;

    system("pause");
    return 0;
}