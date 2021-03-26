#include <iostream>
using namespace std;

struct Libro
{
    int isbn;
    string autor;
    string titulo;
};

int main()
{
    //Creando variable del tipo Libro
    struct Libro unLibro;

    // Llenando los campos del libro
    unLibro.isbn = 1568;
    unLibro.titulo = "Lazarillo de Tormes";
    unLibro.autor = "Anonimo";


    struct Libro *puntero = &unLibro;

    cout << "Modificando ISBN..." << endl;
    unLibro.isbn = 1990;
    cout << "Modificando Titulo..." << endl;
    (*puntero).titulo = "Odisea";
    cout << "Modificando Autor..." << endl;
    puntero -> autor = "Homero";

    // Imprimiendo datos del libro
    cout << unLibro.titulo << " - " << (*puntero).autor << " - "<< puntero -> isbn;
}