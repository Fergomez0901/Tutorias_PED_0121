#include <iostream>

using namespace std;

struct Canciones
{
    string titulo;
    string cantante;
    string genero;
    int duracion;
};

struct Nodo
{
    Canciones element;
    Nodo* next;
};

struct Cola
{
    Nodo* front;
    Nodo* back;
};

void initialize(Cola *q)
{
    q->back = NULL;
    q->front = NULL;
}

bool empty(Cola *q)
{
    return (q->front == NULL) ? true : false;
}

void push(Cola *q, Canciones c)
{

    Nodo *aNode = new Nodo;
    aNode->element = c;
    aNode->next = NULL;

    if(q->back == NULL){
        q->front = aNode;
    }
    else{
        (q->back)->next = aNode;
    }
    q->back = aNode;
}

void pop(Cola *q)
{
    if(empty(q)){
        cout<<"Cola vacia!\n";
        return;
    }

    Nodo *aNode = q->front;
    q->front = aNode->next;

    if(q->front == NULL)
        q->back = NULL;
    
    delete (aNode);
}

void agregarCancion(Cola *q){
    Canciones cancion;
    cout << "Ingrese el titulo de la cancion: ";
    getline(cin, cancion.titulo);
    cout << "Ingrese el cantante de la cancion: ";
    getline(cin, cancion.cantante);
    cout << "Ingrese el genero de la cancion: ";
    getline(cin, cancion.genero);

    do
    {
        cout << "Ingrese la duracion de la cancion (debe de ser en segundos): ";
        cin >> cancion.duracion;
    } while (cancion.duracion <= 0);

    push(q, cancion);
}

void vaciarPlaylist(Cola *q){
    while (!empty(q)) 
    { 
        pop(q); 
    }
    cout << "Se ha vaciado exitosamente" << endl; 
}

void mostrarPlaylist(Cola *q) 
{
    if(empty(q)){
        cout << "La cola esta vacia" << endl;
        return;
    } 

    Nodo *aux = q->front; 
    int contador = 1;
    Canciones actual;

    cout << "/*****************/" << endl;
    while (aux) 
    { 
        actual = aux->element;
        cout << contador << ".  " << actual.titulo << " - " << actual.cantante << " - " << actual.genero << " - " << actual.duracion << endl; 
        aux = aux->next;
        contador++;
    } 
    cout << "/********************/" << endl;
} 

void menu(Cola *q, int opcion)
{
    switch (opcion)
    {
    case 1:
        agregarCancion(q);
        break;
    case 2:
        pop(q);
        cout << "Cancion eliminada correctamente de la playlist" << endl;
        break;
    case 3:
        vaciarPlaylist(q);
        break;
    case 4:
        mostrarPlaylist(q);
        break;
    case 5: 
        break;
    default:
        cout << "Ingrese una opcion valida" << endl;
        break;
    }
}

void mostrarMenuCanciones(Cola *q)
{
    int opcion = 0;
    do
    {
        cout << "----- MENU -----" << endl;
        cout << "1. Agregar nueva cancion" << endl;
        cout << "2. Eliminar cancion" << endl;
        cout << "3. Vacia playlist" << endl;
        cout << "4. Mostrar playlist" << endl;
        cout << "5. Regresar" << endl;
        cin >> opcion;
        cin.ignore();
        menu(q, opcion);

    } while (opcion != 5);
}

void mostrarMenu(Cola *f, Cola *t, Cola *e)
{
    int opcion = 0;
    do
    {
        cout << "----- PLAYLIST -----" << endl;
        cout << "1. Feliz" << endl;
        cout << "2. Triste" << endl;
        cout << "3. Estudiar" << endl;
        cout << "4. Salir" << endl;
        cin >> opcion;
        cin.ignore();
        switch (opcion)
        {
        case 1:
            mostrarMenuCanciones(f);
            cout << endl;
            break;
        case 2:
            mostrarMenuCanciones(t);
            cout << endl;
            break;
        case 3:
            mostrarMenuCanciones(e);
            cout << endl;
            break;
        case 4:
            break;
        default:
            cout << "Opcion invalida. Intentalo de nuevo" << endl;
            break;
        }

    } while (opcion != 4);
}

int main() 
{
    Cola feliz, triste, estudio; 

    initialize(&feliz);
    initialize(&triste);
    initialize(&estudio);

    mostrarMenu(&feliz, &triste, &estudio);

    return 0;
}