#include "Computador.cpp"

class Desktop : public Computador
{
private:
    string marcaMonitor;

public:
    Desktop(int numeroDeSerie, string marca, float preco, string capacidadeArmazenamento, string processador, string memoria, string marcaMonitor) : Computador(numeroDeSerie, marca, preco, capacidadeArmazenamento, processador, memoria), marcaMonitor(marcaMonitor) {}

    string getMarcaMonitor() const
    {
        return marcaMonitor;
    }

    string toString() const override {
        return Computador::toString() + " >> Marca Do Monitor: " + marcaMonitor;
    }
};