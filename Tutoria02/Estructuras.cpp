// Crear una estructura con nombre Estudiante. Crear un arreglo 3 estudiantes. Mostrar la informacion de todos los estudiantes (funcion) y determine si el estudiante puede graduarse o no (CUM >= 7.00)

#include <iostream>
using namespace std;

struct Estudiante
{
    int carnet;
    string nombre;
    double CUM;
};
typedef struct Estudiante Estudiante;

void poblarArreglo(Estudiante estudiantes[3])
{
    for(int i = 0; i < 3; i++)
    {
        cout << endl << "Ingrese el carnet del estudiante: "<< endl;
        cin >> estudiantes[i].carnet;

        cout << "Ingrese el nombre del estudiante: " << endl;
        getline(cin, estudiantes[i].nombre);
        // cin --> sin espacios
        // getline(cin, estudiantes[i].nombre)

        cin.ignore();

        cout << "Ingrese el CUM del estudiante: " << endl;
        cin >> estudiantes[i].CUM;
    }
}

void puedeGraduar(Estudiante estudiantes[3])
{
    for(int i = 0; i < 3; i++)
    {
        if(estudiantes[i].CUM >= 7.00)
        {
            cout << estudiantes[i].nombre << " Se puede graduar";
        }
        else
        {
            cout << estudiantes[i].nombre << " NO se puede graduar";
        }
    }
}

int main()
{
    Estudiante estudiantes[3];

    poblarArreglo(estudiantes);
    puedeGraduar(estudiantes);

    return 0;
}