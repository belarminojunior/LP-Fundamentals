#include <iostream>
#include "Conta.cpp" // Importando a implementação da classe base Conta

using namespace std;

class ContaEstudante : public Conta
{
private:
    string instituicao;
    float limiteCredito;

public:
    // Construtores
    ContaEstudante() : Conta(), instituicao(""), limiteCredito(0.0) {}

    ContaEstudante(string nomeUsuario, string numeroConta, string numeroTelefone, float saldo, string instituicao, float limiteCredito)
        : Conta(nomeUsuario, numeroConta, numeroTelefone, saldo), instituicao(instituicao), limiteCredito(limiteCredito) {}

    // Getters e Setters para instituição e limite de crédito
    string getInstituicao() const {
        return instituicao;
    }

    void setInstituicao(const string& inst) {
        instituicao = inst;
    }

    float getLimiteCredito() const {
        return limiteCredito;
    }

    void setLimiteCredito(float limite) {
        limiteCredito = limite;
    }

    // Outros métodos específicos para Conta Estudante, se necessário
};
