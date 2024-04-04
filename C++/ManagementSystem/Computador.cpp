#pragma once

// #include "Equipamento.cpp"

class Computador : public Equipamento
{
private:
    string capacidadeArmazenamento;
    string processador;
    string memoria;

public:
    Computador(int numeroDeSerie, string marca, float preco, string capacidadeArmazenamento, string processador, string memoria) : Equipamento(numeroDeSerie, marca, preco), capacidadeArmazenamento(capacidadeArmazenamento), processador(processador), memoria(memoria) {}

    string getCapacidadeArmazenamento() const
    {
        return capacidadeArmazenamento;
    }

    string getProcessador() const
    {
        return processador;
    }

    string getMemoria() const
    {
        return memoria;
    }

    string toString() const override {
        return Equipamento::toString() + " >> Armazenamento: " + capacidadeArmazenamento +
                " GB >> Processador: " + processador + " >> Memoria: " + memoria + " GB";
    }
};