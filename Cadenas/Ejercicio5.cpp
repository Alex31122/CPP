//5. Hacer un programa que determina si una palabra es palíndroma

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){

    char palabra[30];
    char palabra2[30];

    cout << "Ingrese una palabra: ";
    cin.getline(palabra,30,'\n');
    
    strcpy(palabra2,palabra);
    strrev(palabra2);

    if(strcmp(palabra,palabra2) == 0){
        cout << "La palabra es palindroma";
    }else{
        cout << "La palabra NO es palindroma";
    }
}