#include <iostream>
using namespace std;

// 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 ......

long fibonacci(int n)
{
    if(n == 1 || n == 2)
        return 1;
    else
        return (fibonacci(n-1) + fibonacci(n-2));
}

int main()
{
    int n = 0;
    cout << "\nIngrese la posicion del numero en la serie de fibonacci: ";
    cin >> n;

    cout << "Fibocci en la posicion " << n << " es: " << fibonacci(n) << endl;
}