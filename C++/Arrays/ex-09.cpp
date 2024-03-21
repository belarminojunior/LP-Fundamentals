#include <iostream>

using namespace std;

int main() {
    const int tamanho = 20;
    int vetor[tamanho];

    cout << "Digite os " << tamanho << " elementos do vetor:\n";
    for (int i = 0; i < tamanho; ++i) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    int pares = 0;
    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }

    cout << "Quantidade de valores pares no vetor: " << pares << endl;
    return 0;
}
