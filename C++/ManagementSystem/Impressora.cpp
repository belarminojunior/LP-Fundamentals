#include <string>

#pragma once

// #include "Equipamento.cpp"

class Impressora : public Equipamento
{
private:
    bool scan;

public:
    Impressora(int numeroDeSerie, string marca, float preco, bool scan) : Equipamento(numeroDeSerie, marca, preco), scan(scan) {}

    bool isScan() const
    {
        return scan;
    }

    string toString() const override
    {
        return Equipamento::toString() + " >> Scan: " + (scan ? "Sim" : "Não");
    }
};