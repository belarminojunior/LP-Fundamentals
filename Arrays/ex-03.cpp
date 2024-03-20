#include <iostream>

using namespace std;

int main()
{
    const int TAMANHO = 10; // Tamanho dos vetores
    int vetorN[TAMANHO] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetorM[TAMANHO] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int soma = 0;

    for (int i = 0; i < TAMANHO; ++i)
    {
        soma += vetorN[i] + vetorM[i];
    }

    cout << "A soma dos elementos dos vetores N e M é: " << soma << endl;
    return 0;
}
