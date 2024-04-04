#include <string>

using namespace std;

class Equipamento
{
protected:
    int numeroDeSerie;
    string marca;
    float preco;

public:
    Equipamento(int numeroDeSerie, string marca, float preco) : numeroDeSerie(numeroDeSerie), marca(marca), preco(preco) {}

    int getNumeroDeSerie() const
    {
        return numeroDeSerie;
    }

    string getMarca() const
    {
        return marca;
    }

    float getPreco() const
    {
        return preco;
    }

    virtual string toString() const {
        return "Número De Serie: " + to_string(numeroDeSerie) + " >> Marca: " + marca + " >> Preco: " + to_string(preco);
    }
};