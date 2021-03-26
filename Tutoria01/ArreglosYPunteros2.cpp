#include <iostream>
using namespace std;

void mostrarArreglo(int *puntero)
{
    cout << "Puntero recibido: " << puntero << endl;

    cout << "numero[0] = " << *puntero << endl;
    cout << "numero[1] = " << *(puntero + 1)<< endl;
    cout << "numero[2] = " << *(puntero + 2) << endl;
}

int main()
{
    int numeros[3];
    numeros[0] = 7;
    numeros[1] = 9;
    numeros[2] = 5;

    cout << "\nPrimer valor: " << *numeros << endl;
    cout << "Direccion: " << numeros << endl << endl;

    mostrarArreglo(numeros);
}