
#include <iostream>
#include "Funcionario.h"
#include "Cliente.h"
#include "Quarto.h"
using namespace std;
int main()
{
    string nomeFunc;
    cout << "Digite seu nome: " << endl;    
    getline(cin, nomeFunc);
    Funcionario fun(nomeFunc);
    fun.adicionaCliente("Tamara Rosa", "1234");
    fun.adicionaCliente("Tadeu Verde", "4321");
    fun.criaQuarto(1, true,  3, 2);
    fun.criaQuarto(2, true,  5, 4);
    fun.criaQuarto(3, false, 2, 1);
    fun.criaQuarto(4, true,  4, 2);
    fun.criaQuarto(5, false, 6, 4);
    fun.criaQuarto(6, false, 2, 1);
    
    
    bool flag = false;
    int num, num2, numQuarto, op = 1;
    string nomeCli, cpfCli;
    while (op != 0)
    {
        cout << "--Usuario Logado: " << fun.getNome() << "--" << endl;
        cout << "Selecione a Opcao Desejada:\n" <<
            "1 - Verificar quarto\n" <<
            "2 - Inserir ou Alterar Cliente\n" <<
            "3 - Realizar reserva\n" <<
            "4 - Listar quartos\n" << 
            "5 - Listar Clientes\n" <<
            "6 - Reservas por Clientes\n" <<
            "7 - Imprimir relatorio Geral\n" <<
            "0 - Sair" <<endl;
        cin >> op;

        switch (op)
        {
        case 1:
            cout << "Digite o numero do quarto: " << endl;
            cin >> num;
            fun.verificaVagas(num);
            break;
        case 2:
            cout << "1 - Alterar \n2 - Incluir" << endl;
            cin >> num2;
            if (num2 == 1)
            {
                cout << "Digite o Cpf do Cliente: " << endl;
                cin >> cpfCli;
                fun.alteraCliente(cpfCli);

            }
            else
            {
                cout << "Digite o nome do cliente: " << endl;
                cin.ignore();
                getline(cin, nomeCli);                
                cout << "Digite o Cpf: " << endl;
                cin >> cpfCli;
                fun.adicionaCliente(nomeCli, cpfCli);

            }
            break;
        case 3:
            cout << "Digite o numero do quarto: " << endl;
            cin >> numQuarto;
            fun.reservaQuarto(numQuarto);
            break;
        case 4:
            fun.imprimeListaQuartos();
            break;
        case 5:
            fun.imprimeListaClientes();
            break;
        case 6:
            fun.ImprimeReservasCliente();
            break;
        case 7:
            fun.relatorioGeral();
            break;
        default:
            break;
        }

    }

    
}

