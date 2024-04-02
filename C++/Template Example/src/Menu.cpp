#include <iostream>
#include "Banco.cpp"
#include "Validacoes.cpp"

using namespace std;

class Menu
{
private:
    Banco banco;

public:
    Menu()
    {
        cout << "Welcome!!!" << endl;
    }

    void mostrarMenu()
    {
        cout << "\n1. Criar Nova Conta;\n"
             << "2. Depositar\n"
             << "3. Levantar\n"
             << "4. Atualizar Dados\n"
             << "5. Mostrar Contas\n"
             << "0. Sair" << endl;

        int opcao = Validacoes::validarInt("Escolha uma opcao: ", 0, 5);
        selecionarOpcao(opcao);
    }

    void selecionarOpcao(int opcao)
    {
        switch (opcao)
        {
        case 1:
            criarConta();
            break;
        case 2:
            depositar();
            break;
        case 3:
            levantar();
            break;
        case 4:
            atualizarDados();
            break;
        case 5:
            mostrarContas();
            break;
        case 0:
            return;
        default:
            cout << "Opcao invalida!" << endl;
        }

        mostrarMenu();
    }

    void criarConta()
    {
        string nomeUsuario = Validacoes::validarString("Digite o nome do usuário: ", 1, 100);
        string numeroConta = Validacoes::validarString("Digite o número da conta: ", 1, 20);
        string numeroTelefone = Validacoes::validarString("Digite o número de telefone: ", 1, 20);
        float saldoInicial = Validacoes::validarFloat("Digite o saldo inicial: ", 0, 1000000); // Exemplo de limites de saldo inicial

        Conta novaConta(nomeUsuario, numeroConta, numeroTelefone, saldoInicial);
        banco.criarConta(novaConta);
    }

    void depositar()
    {
        string numeroConta = Validacoes::validarString("Digite o número da conta: ", 1, 20);
        float valor = Validacoes::validarFloat("Digite o valor para depósito: ", 0, 1000000); // Exemplo de limite de depósito
        banco.depositar(numeroConta, valor);
    }

    void levantar()
    {
        string numeroConta = Validacoes::validarString("Digite o número da conta: ", 1, 20);
        float valor = Validacoes::validarFloat("Digite o valor para levantamento: ", 0, 1000000); // Exemplo de limite de levantamento
        banco.levantar(numeroConta, valor);
    }

    void atualizarDados()
    {
        string numeroConta = Validacoes::validarString("Digite o número da conta: ", 1, 20);
        string novoNumeroTelefone = Validacoes::validarString("Digite o novo número de telefone: ", 1, 20);
        banco.atualizarDados(numeroConta, novoNumeroTelefone);
    }

    void mostrarContas()
    {
        banco.mostrarContas();
    }
};
