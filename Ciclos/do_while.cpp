/*La sentencia do while

    do{
        conjunto de instrucciones;
    }while(expresión lógica);
*/

#include <iostream>
#include <stdlib.h> //Se usa para el system("pause")
using namespace std;
int main(){
    int i;
    i=1;

    do{
        cout<<i<<endl;
        i++; //aumenta el iterador de uno en uno
    }while(i<=10);

    system("pause");
    return 0;
}