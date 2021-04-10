// Crear un programa que le pida un caracter al usuario y busque cuantas veces se repite en la palabra PROGRAMACION y lo muestre por pantalla.

#include <iostream>
using namespace std;

void repeticion(string palabra, char letra)
{
    int cont = 0;

    for(int i = 0; i < palabra.length(); i++)
    {
        if(letra == palabra.at(i))
        {
            cont++;
        }
    }

    if(cont == 0)
    {
        cout << "El caracter no se encuentra en la palabra" << endl;
    }
    else
    {
        cout << "El caracter se encuentra " << cont << " veces en la palabra" << endl;
    }
}

int main()
{
    string palabra = "programacion";
    char letra;

    cout << "Ingrese un caracter a buscar en el String Programacion: " << endl;
    cin >> letra;

    repeticion(palabra, letra);

    return 0;
}
