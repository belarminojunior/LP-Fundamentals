#include <iostream>

#include "Validacoes/Validacoes.cpp"
#include "GerirEquipamentos.cpp"

using namespace std;

class Menu
{
private:
    GerirEquipamentos gerenciador;

public:
    Menu()
    {
        cout << "++ BEM VINDO AO SUA LOJA DE EQUIPAMENTOS ! ++" << endl;
    }

    void mostrarMenu()
    {
        cout << "[1]. MOSTRAR IMPRESSORAS\n"
             << "[2]. MOSTRAR DESKTOPS\n"
             << "[3]. MOSTRAR LAPTOPS\n"
             << "[4]. ADICIONAR IMPRESSORA\n"
             << "[5]. ADICIONAR DESKTOP\n"
             << "[6]. ADICIONAR LAPTOP\n"
             << "[7]. MÉDIA DOS PREÇOS DOS LAPTOPS DELL\n"
             << "[8]. QUANTIDADE DE EQUIPAMENTOS\n"
             << "[0]. SAIR" << endl;

        int opcao = Validacoes::validarInt(">>>", 0, 9);
        selecionarOpcao(opcao);
    }

    void selecionarOpcao(int opcao)
    {
        switch (opcao)
        {
        case 0:
            return;
        case 1:
            gerenciador.mostrarImpressoras();
            break;
        case 2:
            gerenciador.mostrarDesktops();
        case 3:
            gerenciador.mostrarLaptops();
            break;
        case 4:
            gerenciador.adicionarImpressora();
            break;
        case 5:
            gerenciador.adicionarDesktop();
            break;
        case 6:
            gerenciador.adicionarLaptop();
            break;
        case 7:
            gerenciador.getMediaDosPrecos("Lenovo");
            break;
        case 8:
            gerenciador.quantidadeEquipamentos();
            break;
        }

        string paraContinuar = Validacoes::validarString("\nENTER >>>\n", 0, 0);
        system("cls");
        mostrarMenu();
    }
};