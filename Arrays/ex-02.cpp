#include <iostream>

using namespace std;

int main()
{
    int nota1[5] = {1, 2, 3, 4, 5};
    int nota2[5] = {6, 7, 8, 9, 10};

    int soma[5];
    int subtraccao[5];

    for (int i = 0; i < 5; i++)
    {
        soma[i] = nota1[i] + nota2[i];
        subtraccao[i] = nota1[i] - nota2[i];
    }

    cout << "\nA soma dos elementos de cada vector:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << soma[i] << " ";
    }

    cout << "\nA soma dos elementos de cada vector:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << subtraccao[i] << " ";
    }

    return 0;
}