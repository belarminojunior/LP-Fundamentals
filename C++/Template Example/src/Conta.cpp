#include <iostream>
#include <string>

using namespace std;

class Conta
{
private:
    string nomeUsuario;
    string numeroConta;
    string numeroTelefone;
    float saldo;

public:
    // Construtor
    Conta() : nomeUsuario(""), numeroConta(""), numeroTelefone(""), saldo(0.0) {}

    Conta(string nomeUsuario, string numeroConta, string numeroTelefone, float saldo)
        : nomeUsuario(nomeUsuario), numeroConta(numeroConta), numeroTelefone(numeroTelefone), saldo(saldo) {}

    // Getters e Setters
    string getNomeUsuario() const
    {
        return nomeUsuario;
    }

    void setNomeUsuario(const string &nome)
    {
        nomeUsuario = nome;
    }

    string getNumeroConta() const
    {
        return numeroConta;
    }

    void setNumeroConta(const string &numero)
    {
        numeroConta = numero;
    }

    string getNumeroTelefone() const
    {
        return numeroTelefone;
    }

    void setNumeroTelefone(const string &telefone)
    {
        numeroTelefone = telefone;
    }

    float getSaldo() const
    {
        return saldo;
    }

    // Métodos adicionais
    void levantarSaldo(float valor)
    {
        if (valor > 0 && valor <= saldo)
        {
            saldo -= valor;
            cout << "Saldo retirado com sucesso." << endl;
        }
        else
        {
            cout << "Saldo insuficiente para a retirada." << endl;
        }
    }

    void depositarSaldo(float valor)
    {
        if (valor > 0)
        {
            saldo += valor;
            cout << "Saldo depositado com sucesso." << endl;
        }
        else
        {
            cout << "Valor de depósito inválido." << endl;
        }
    }
};