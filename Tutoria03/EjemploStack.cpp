#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> numeros;

    numeros.push(1);
    numeros.push(2);
    numeros.push(3);
    numeros.push(4);
    numeros.push(5);

    cout << "Cantidad de elementos en la pila: " << numeros.size() << endl;

    cout << "Elemento superior: " << numeros.top() << endl;

    numeros.pop();  // Quitando numero 5
    numeros.pop();  // Quitando numero 4

    cout << "Cantidad de elementos en la pila: " << numeros.size() << endl;

    if(numeros.empty())
        cout << "La pila esta vacia" << endl;
    else
        cout << "La pila no esta vacia" << endl;

    return 0;
}