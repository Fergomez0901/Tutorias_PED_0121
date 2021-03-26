#include <iostream>
using namespace std;

int main()
{
    double variable = 4.25;

    cout << "\nVariable: " << variable << endl;
    cout << "Direccion variable: " << &variable << endl << endl;
    
    double *puntero = &variable;

    cout << "Contenido puntero simple: " << *puntero << endl;
    cout << "Puntero simple apunta a: " << puntero << endl;

    cout << "Escribiendo..." << endl;
    *puntero = 7.68;
    cout << "Contenido puntero simple: " << *puntero << endl << endl;
    
    double **doble = &puntero;

    cout << "Contenido puntero doble: " << **doble << endl;
    cout << "Puntero doble apunta a: " << doble << endl;
    cout << "Escribiendo..." << endl;
    **doble = 159.67;
    cout << "Contenido puntero doble: " << **doble << endl << endl;
    
    cout << "Variable: " << variable << endl << endl;

    return 0;
}
