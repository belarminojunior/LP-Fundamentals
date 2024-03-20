#include <iostream>

using namespace std;

int main() {
    const int linhas = 2;
    const int colunas = 3;

    // Matriz 2x3
    int matriz[linhas][colunas] = {{1, 2, 3}, {4, 5, 6}};

    // Visualizando a matriz
    cout << "Matriz " << linhas << "x" << colunas << ":\n";
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
