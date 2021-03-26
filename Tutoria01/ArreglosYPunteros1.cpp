#include <iostream>
using namespace std;

int main()
{
    int array[3] = {1, 2, 3};

    // Accediendo como arreglo
    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;

    cout << endl;
    
    int *p = array;

    // Accediendo como puntero
    cout << *p << endl;
    cout << *(p+1) << endl;
    cout << *(p+2) << endl;

    return 0;
}