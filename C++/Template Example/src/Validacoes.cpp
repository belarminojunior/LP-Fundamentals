#include <iostream>
#include <string>

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
};