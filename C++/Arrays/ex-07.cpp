#include <iostream>

using namespace std;

int main() {
    const int ESTUDANTES = 5;
    const int TESTES = 2;

    double notas[ESTUDANTES][TESTES];

    for (int i = 0; i < ESTUDANTES; ++i) {
        cout << "Notas do estudante " << i + 1 << ":\n";
        for (int j = 0; j < TESTES; ++j) {
            cout << "Digite a nota do teste " << j + 1 << ": ";
            cin >> notas[i][j];
        }
    }

    cout << "\nMédia de cada estudante:\n";
    for (int i = 0; i < ESTUDANTES; ++i) {
        double soma = 0.0;
        for (int j = 0; j < TESTES; ++j) {
            soma += notas[i][j];
        }
        double media = soma / TESTES;
        cout << "Estudante " << i + 1 << ": " << media << endl;
    }

    return 0;
}
