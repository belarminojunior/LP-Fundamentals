#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Digite o número de estudantes: ";
    cin >> n;

    while (n <= 0)
    {
        cout << "Por favor, insira um número positivo: ";
        cin >> n;
    }

    double notas[n];
    double soma = 0;
    double maiorNota = 0;
    double menorNota = 100;

    cout << "Digite as notas dos " << n << " estudantes:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "Nota do estudante " << i + 1 << ": ";
        cin >> notas[i];

        soma += notas[i];

        if (notas[i] > maiorNota)
        {
            maiorNota = notas[i];
        }

        if (notas[i] < menorNota)
        {
            menorNota = notas[i];
        }
    }

    double media = soma / n;

    cout << "\nNotas dos estudantes:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "Estudante " << i + 1 << ": " << notas[i] << endl;
    }

    cout << "\nMédia das notas: " << media << endl;
    cout << "Maior nota: " << maiorNota << endl;
    cout << "Menor nota: " << menorNota << endl;

    return 0;
}
