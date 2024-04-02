#include <iostream>
#include "Conta.cpp" // Importando a implementação da classe base Conta

using namespace std;

class ContaCorrente : public Conta
{
private:
    float taxaManutencao;

public:
    // Construtores
    ContaCorrente() : Conta(), taxaManutencao(0.0) {}

    ContaCorrente(string nomeUsuario, string numeroConta, string numeroTelefone, float saldo, float taxaManutencao)
        : Conta(nomeUsuario, numeroConta, numeroTelefone, saldo), taxaManutencao(taxaManutencao) {}

    // Getter e Setter para a taxa de manutenção
    float getTaxaManutencao() const {
        return taxaManutencao;
    }

    void setTaxaManutencao(float taxa) {
        taxaManutencao = taxa;
    }

    // Outros métodos específicos para Conta Corrente, se necessário
};
