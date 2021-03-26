#include <iostream>
using namespace std;

int main()
{
    int n = 5;

    cout << "Contenido de n: " << n << endl;
    cout << "Direccion de N:" << &n << endl;
    cout << endl;

    int *p = &n;

    cout << "Puntero contiene: " << p << endl;
    cout << "Puntero apunta a: " << *p << endl;
    cout << endl;

    *p = 50;        //Desreferencia

    cout << "Puntero contiene: " << p << endl;
    cout << "Puntero apunta a: " << *p << endl;
    cout << "Contenido de n: " << n << endl;
    cout << endl;

    return 0;
}