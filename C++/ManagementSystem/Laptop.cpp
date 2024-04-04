#include "Computador.cpp"

using namespace std;

class Laptop : public Computador
{
private:
    bool touchPad;

public:
    Laptop(int numeroDeSerie, const string &marca, float preco, const string &capacidadeArmazenamento,
           const string &processador, const string &memoria, bool touchPad)
        : Computador(numeroDeSerie, marca, preco, capacidadeArmazenamento, processador, memoria), touchPad(touchPad) {}

    bool isTouchPad() const
    {
        return touchPad;
    }

    string getMarca() const
    {
        return Computador::getMarca();
    }

    float getPreco() const
    {
        return Computador::getPreco();
    }

    string getMemoria() const
    {
        return Computador::getMemoria();
    }

    string getProcessador() const
    {
        return Computador::getProcessador();
    }

    string getCapacidadeArmazenamento() const
    {
        return Computador::getCapacidadeArmazenamento();
    }

    int getNumeroDeSerie() const
    {
        return Computador::getNumeroDeSerie();
    }

    string toString() const {
        return Computador::toString() + " >> TouchPad: " + (touchPad ? "Yes" : "No");
    }
};