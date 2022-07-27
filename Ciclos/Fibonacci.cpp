#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int n, x = 0, y = 1, z = 1;
    cout << "Ingrese el numero de elementos a calcular:  "; cin >> n;
    cout << "\n==========Serie de Fibonacci==========\n\n";

    cout << "1  ";
    for(int i=1; i<n; i++){
        z = x + y; //1 2 3 5
        cout << z << "  "; //1 2 3 5
        x = y; // 1 1 2 3
        y = z; // 1 2 3 5
    }

    system("pause");
    return 0;
}
