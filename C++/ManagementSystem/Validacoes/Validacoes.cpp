#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Validacoes
{
public:
    static int validarInt(string message, int min, int max)
    {
        int content;

        do
        {
            try
            {
                cout << message;
                cin >> content;
                cin.ignore();

                if (content < min || content > max)
                {
                    cout << "Valor fora dos parametros..." << endl;
                    cout << "Digite um numero entre " << min << " - " << max << endl;
                }
            }
            catch (exception e)
            {
                cin.clear();
                cout << "Valor Invalido !" << endl;
            }

        } while (content < min || content > max);

        return content;
    }

    static float validarFloat(string message, float min, float max)
    {
        float content;
        do
        {
            try
            {
                cout << message;
                cin >> content;
                cin.ignore();

                if (content < min || content > max)
                {
                    cout << "Valor fora dos parametros..." << endl;
                    cout << "Digite um numero entre " << min << " - " << max << endl;
                }
            }
            catch (exception e)
            {
                cin.clear();
                cout << "Valor Invalido !" << endl;
            }
        } while (content < min || content > max);
        return content;
    }

    static string validarString(string message, int min, int max)
    {
        string content;
        do
        {
            try
            {
                cout << message;
                getline(cin, content);
                cin.ignore();

                if (content.length() < min || content.length() > max)
                {
                    cout << "Valor fora dos parâmetros..." << endl;
                    cout << "Digite um número entre " << min << " - " << max << endl;
                }
            }
            catch (exception e)
            {
                cin.clear();
                cout << "Valor Inválido!" << endl;
            }
        } while (content.length() < min || content.length() > max);
        return content;
    }

    static string validarStringAlternativo(const string &message, const vector<string> &arr)
    {
        string content;
        size_t existingIndex = 0;
        do
        {
            cout << "Opções disponíveis: ";
            for (const auto &option : arr)
            {
                cout << option << " ";
            }
            cout << endl;
            cout << message;
            getline(cin, content);

            auto it = find_if(arr.begin(), arr.end(), [&content](const string &option)
                              { return option == content; });

            if (it != arr.end())
            {
                existingIndex = distance(arr.begin(), it);
            }
            else
            {
                cout << "Digite uma das opções válidas..." << endl;
            }

        } while (content != arr[existingIndex]);
        return content;
    }

    static bool validarOpcao(const string &message)
    {
        int ans = 0;
        do
        {
            try
            {
                cout << "[1]. YES\n"
                     << "[2]. NO\n"
                     << message;

                cin >> ans;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                if (ans != 1 && ans != 2)
                    cout << "Digite Uma Opção Válida >>> " << endl;
            }
            catch (const exception &e)
            {
                cerr << "Erro: " << e.what() << endl;
            }

        } while (ans != 1 && ans != 2);
        return ans == 1;
    }
};