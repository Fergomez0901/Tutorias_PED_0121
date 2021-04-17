#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}

int main()
{
    int n = 0;
    cout << "\nIngrese un numero para calcular su factorial: ";
    cin >> n;

    cout << "El factorial de " << n << " es: " << factorial(n) << endl;

    return 0;
}