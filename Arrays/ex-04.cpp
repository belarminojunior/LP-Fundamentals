#include <iostream>

using namespace std;

int main() {
    const int TAMANHO = 5;
    int numeros[TAMANHO];

    cout << "Digite os 50 números inteiros positivos:\n";
    for (int i = 0; i < TAMANHO; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    int pares = 0;
    int multiplosDe5 = 0;

    for (int i = 0; i < TAMANHO; ++i) {
        if (numeros[i] % 2 == 0) {
            pares++;
        }
        if (numeros[i] % 5 == 0) {
            multiplosDe5++;
        }
    }

    cout << "Quantidade de números pares: " << pares << endl;
    cout << "Quantidade de múltiplos de 5: " << multiplosDe5 << endl;

    return 0;
}
