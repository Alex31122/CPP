//Transformar una cadena a números  -  Función atoi() y atof()
//"123.45"   --->  123.45

#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){

    char cad[] = "123", cad2[] = "123.456";
    int numero; float numero2;

    numero = atoi(cad);
    numero2 = atof(cad2);

    cout << numero << endl;
    cout << numero2 << endl;

    getch();
    return 0;
}