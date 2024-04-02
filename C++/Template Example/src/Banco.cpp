#include <iostream>
#include <vector>
#include "Conta.cpp" // Incluindo a implementação da classe Conta

using namespace std;

class Banco
{
private:
    vector<Conta> contas; // Armazenamento das contas em um vetor

public:
    // Método para criar uma nova conta
    void criarConta(const Conta& novaConta)
    {
        contas.push_back(novaConta);
        cout << "Conta criada com sucesso!" << endl;
    }

    // Método para encontrar uma conta pelo número da conta
    Conta* encontrarConta(const string& numeroConta)
    {
        for (auto& conta : contas)
        {
            if (conta.getNumeroConta() == numeroConta)
            {
                return &conta;
            }
        }
        return nullptr; // Retornar nullptr se a conta não for encontrada
    }

    // Método para depositar em uma conta existente
    void depositar(const string& numeroConta, float valor)
    {
        Conta* conta = encontrarConta(numeroConta);
        if (conta != nullptr)
        {
            conta->depositarSaldo(valor);
        }
        else
        {
            cout << "Conta não encontrada." << endl;
        }
    }

    // Método para levantar de uma conta existente
    void levantar(const string& numeroConta, float valor)
    {
        Conta* conta = encontrarConta(numeroConta);
        if (conta != nullptr)
        {
            conta->levantarSaldo(valor);
        }
        else
        {
            cout << "Conta não encontrada." << endl;
        }
    }

    // Método para atualizar os dados de uma conta
    void atualizarDados(const string& numeroConta, const string& novoNumeroTelefone)
    {
        Conta* conta = encontrarConta(numeroConta);
        if (conta != nullptr)
        {
            conta->setNumeroTelefone(novoNumeroTelefone);
            cout << "Dados atualizados com sucesso." << endl;
        }
        else
        {
            cout << "Conta não encontrada." << endl;
        }
    }

    void mostrarContas()
    {
        if (contas.empty()) {
            cout << "Não há contas registradas no banco." << endl;
        } else {
            cout << "Lista de Contas:" << endl;
            for (const auto& conta : contas) {
                cout << "Nome do Usuário: " << conta.getNomeUsuario() << endl;
                cout << "Número da Conta: " << conta.getNumeroConta() << endl;
                cout << "Número de Telefone: " << conta.getNumeroTelefone() << endl;
                cout << "Saldo: " << conta.getSaldo() << endl;
                cout << endl;
            }
        }
    }
};
