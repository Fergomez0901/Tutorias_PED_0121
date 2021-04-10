// Dada una matriz de 3x3 crear una funcion que calcula la cantidad de numeros pares e impares en la matriz.
#include <iostream>
using namespace std;

void parImpar(int m[3][3])
{
    int pares = 0, impares = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(m[i][j] % 2 == 0)
            {
                pares++;
            }
            else
            {
                impares++;
            }
        }
    }

    cout << "Hay " << pares << " numeros pares" << endl;
    cout << "Hay " << impares << " numeros impares" << endl;

}

int main()
{
    int matriz[3][3];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            matriz[i][j] = i;
        }
    }

    parImpar(matriz);

    return 0;
}