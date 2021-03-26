#include <iostream>
using namespace std;

int main()
{
    int x = 0, y = 0;

    cout << "Valor de x: " << x << endl;
    cout << "Direccion de x: " << &x << endl;

    cout << "Valor de y: " << y << endl;
    cout << "Direccion de x: " << &y << endl;

    cout << endl;

    int arreglo[2];

    cout << "Direccion casilla 0: " << &arreglo[0] << endl;
    cout << "Direccion casilla 1: " << &arreglo[1] << endl;

    cout << endl;

    return 0;
}
