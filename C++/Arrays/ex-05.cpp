#include <iostream>

using namespace std;

int main()
{
    int tamanho;
    cout << "Digite o tamanho dos arrays: ";
    cin >> tamanho;

    int *array1 = new int[tamanho];
    int *array2 = new int[tamanho];

    cout << "Digite os valores para o primeiro array:\n";
    for (int i = 0; i < tamanho; ++i)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> array1[i];
    }

    cout << "Digite os valores para o segundo array:\n";
    for (int i = 0; i < tamanho; ++i)
    {
        cout << "Valor " << i + 1 << ": ";
        cin >> array2[i];
    }

    cout << "Valores do primeiro array:\n";
    for (int i = 0; i < tamanho; ++i)
    {
        cout << array1[i] << " ";
    }
    cout << endl;

    cout << "Valores do segundo array:\n";
    for (int i = 0; i < tamanho; ++i)
    {
        cout << array2[i] << " ";
    }
    cout << endl;
    return 0;
}
