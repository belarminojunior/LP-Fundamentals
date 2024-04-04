#include <vector>

#include "Equipamento.cpp"
#include "Laptop.cpp"
#include "Desktop.cpp"
#include "Impressora.cpp"

using namespace std;

class GerirEquipamentos
{
private:
    vector<Equipamento *> equipamentos;
    int numeroDeSerie;

public:
    GerirEquipamentos() : numeroDeSerie(0) {}

    int gerarNumeroDeSerie()
    {
        return ++numeroDeSerie;
    }

    void mostrarLaptops()
    {
        cout << "Laptops:" << endl;
        for (Equipamento *equipamento : equipamentos)
        {
            Laptop *laptop = dynamic_cast<Laptop *>(equipamento);
            if (laptop != nullptr)
            {
                cout << laptop->toString() << endl;
            }
        }
    }

    void mostrarDesktops()
    {
        cout << "Desktops:" << endl;
        for (Equipamento *equipamento : equipamentos)
        {
            Desktop *desktop = dynamic_cast<Desktop *>(equipamento);
            if (desktop != nullptr)
            {
                cout << desktop->toString() << endl;
            }
        }
    }

    void mostrarImpressoras()
    {
        cout << "Impressoras:" << endl;
        for (Equipamento *equipamento : equipamentos)
        {
            Impressora *impressora = dynamic_cast<Impressora *>(equipamento);
            if (impressora != nullptr)
            {
                cout << impressora->toString() << endl;
            }
        }
    }

    void adicionarLaptop()
    {
        int numeroDeSerie = gerarNumeroDeSerie();
        equipamentos.push_back(new Laptop(
            numeroDeSerie,
            Validacoes::validarStringAlternativo("Escolha Uma Marca: ", {"Lenovo", "Dell", "Samsung", "Asus", "Acer", "Mecer", "HP", "LG", "Toshiba", "Apple"}),
            Validacoes::validarFloat("Preco: ", 10000.0f, 1E9f) + 1200,
            Validacoes::validarStringAlternativo("Armazenamento HD (GB): ", {"2", "4", "8", "16", "32", "64", "128", "256", "512", "1024"}),
            Validacoes::validarString("Processador: ", 4, 20),
            Validacoes::validarStringAlternativo("Memoria RAM (GB): ", {"2", "4", "8", "16", "32", "64", "128", "256", "512"}),
            Validacoes::validarOpcao("Eh TouchPad?")));
        cout << "LAPTOP ADICIONADO COM SUCESSO !" << endl;
    }

    void adicionarDesktop()
    {
        int numeroDeSerie = gerarNumeroDeSerie();
        equipamentos.push_back(new Desktop(
            numeroDeSerie,
            Validacoes::validarStringAlternativo("Marca: ", {"IBM", "NEC", "Toshiba", "Dell", "HP", "Lenovo", "Acer", "Apple"}),
            Validacoes::validarFloat("Preco: ", 10000.0f, 1E9f) + 1500,
            Validacoes::validarStringAlternativo("Armazenamento HD (GB): ", {"2", "4", "8", "16", "32", "64", "128", "256", "512", "1024"}),
            Validacoes::validarString("Processador: ", 4, 20),
            Validacoes::validarStringAlternativo("Memória RAM (GB): ", {"2", "4", "8", "16", "32", "64", "128", "256", "512"}),
            Validacoes::validarStringAlternativo("Marca Do Monitor: ", {"Dell", "Acer", "Samsung", "LG", "Asus", "AOC", "BenQ", "Philips"})));
        cout << "DESKTOP ADICIONADO COM SUCESSO !" << endl;
    }

    void adicionarImpressora()
    {
        int numeroDeSerie = gerarNumeroDeSerie();
        equipamentos.push_back(new Impressora(
            numeroDeSerie,
            Validacoes::validarStringAlternativo("Marca: ", {"HP", "Canon", "Epson", "Brother", "Elgin Pantum"}),
            Validacoes::validarFloat("Preco: ", 10000.0f, 1E9f) + 1000,
            Validacoes::validarOpcao("Faz Scan?")));
        cout << "IMPRESSORA ADICIONADA COM SUCESSO !" << endl;
    }

    void getMediaDosPrecos(string marca)
    {
        float totalPreco = 0;
        int count = 0;

        for (Equipamento *equipamento : equipamentos)
        {
            Laptop *laptop = dynamic_cast<Laptop *>(equipamento);
            if (laptop != nullptr && laptop->getMarca() == marca)
            {
                totalPreco += laptop->getPreco();
                count++;
            }
        }

        if (count == 0)
        {
            cout << "Sem laptops da marca " << marca << " nos equipamentos." << endl;
        }
        else
        {
            cout << "A média dos preços dos laptops " << marca << " é de " << (totalPreco / count) << endl;
        }
    }

    void quantidadeEquipamentos()
    {
        int countLaptops = 0;
        int countDesktops = 0;
        int countImpressoras = 0;

        for (Equipamento *equipamento : equipamentos)
        {
            Laptop *laptop = dynamic_cast<Laptop *>(equipamento);
            if (laptop != nullptr)
            {
                countLaptops++;
                continue;
            }

            Desktop *desktop = dynamic_cast<Desktop *>(equipamento);
            if (desktop != nullptr)
            {
                countDesktops++;
                continue;
            }

            Impressora *impressora = dynamic_cast<Impressora *>(equipamento);
            if (impressora != nullptr)
            {
                countImpressoras++;
            }
        }

        cout << "Quantidade de Laptops: " << countLaptops << endl;
        cout << "Quantidade de Desktops: " << countDesktops << endl;
        cout << "Quantidade de Impressoras: " << countImpressoras << endl;
    }
};