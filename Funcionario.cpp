#include "Funcionario.h"
using namespace std;
#include<iostream>
#include <string>

//Metodos de acesso dos atributos encapsulados
string Funcionario::getNome()
{
	return nome;
}
void Funcionario::setNome(string nome)
{
	this->nome = nome;
}
// Metodo para criar o objeto Cliente. Utliza o vetor de cliente que está declarado em Funcionario
void Funcionario::adicionaCliente(string nome, string cpf)
{
	clientes.push_back(Cliente(nome, cpf));

}
//Busca através do parametro o cliente para alteração
void Funcionario::alteraCliente(string cpf)
{
    
    string  novNome,novCpf;
    for (int i = 0; i < clientes.size(); i++)
    {
        //Se o cpf do cliente for igual ao passado pelo parametro ele altera
        if (clientes[i].getCpf() == cpf)
        {
            cout << "Digite o novo nome" << endl;
            cin.ignore();
            getline(cin, novNome);            
            clientes[i].setNome(novNome);
            cout << "Digite novo cpf: " << endl;
            cin >> novCpf;            
            clientes[i].setCpf(novCpf);
        }
            
    }
   
}
//Imprime a lista dos Clientes dentro do vetor através do metodo da classe cliente 
void Funcionario::imprimeListaClientes()
{
    for (int i = 0; i < clientes.size(); i++)
    {
        clientes[i].imprime();
    }
}
//Compara o vlr passado através do parametro e os cpfs dentro do odjeto, valida se existe 
bool Funcionario::verificaCliente(string cpf)
{
    bool flag = false;
    for (int i = 0; i < clientes.size(); i++)
    {
        if (clientes[i].getCpf() == cpf)
        {
            flag = true;
        }
    }
    return flag;    
}

//Verifica se exite valor no campo cpfCli para validar se esta reservado 
void Funcionario::verificaVagas( int num)
{    
    for (int i = 0; i < quarto.size(); i++)
    {

        if (quarto[i].getNumero() == num && quarto[i].getCpfCli() != "")
        {
            cout << "Quarto Ocupado!" << endl;
            
        }
        else if (quarto[i].getNumero() == num)
            cout << "Quarto Vazio!" << endl;
        else
            cout << "Quarto nao encontrado!" << endl;
    }
}
//Imprime a lista de Quartos criados do vetor utilizando o metodo imprime() da classe Quarto
void Funcionario::imprimeListaQuartos()
{
    for (int i = 0; i < quarto.size(); i++)
    {
        quarto[i].imprime();
    }
}

void Funcionario::reservaQuarto(int num)
{
    // Inicio cpfCLi com "" pois se essa variavel não for alterada o Quarto ja esta reservado, de acordo com a lógica condicional do proximo IF
    string cpfCli = "", dtaIni, dtaFim;
    for (int i = 0; i < quarto.size(); i++)
    {
        //Compar o numero do Quarto com parametro num, se o CpfCli estiver sem valor atribuido 
        if (quarto[i].getNumero() == num && quarto[i].getCpfCli() == "")
        {
            cout << "Digite o CPF do cliente" << endl;
            cin >> cpfCli;  
            //Utilizo mo metodo verificaCliente() para validar o Cliente
            if (verificaCliente(cpfCli) == false)
                cout << "Cliente nao encontrado!" << endl;
            else
            {
                quarto[i].setCpfCli(cpfCli);
                cout << "Digite a data Inicial da reserva: " << endl;
                cin >> dtaIni;
                cout << "Digite a data Final da reserva: " << endl;
                cin >> dtaFim;
                quarto[i].setDtaIni(dtaIni);
                quarto[i].setDtaFim(dtaFim);
                quarto[i].setFuncRes(nome);
                for (int i = 0; i < clientes.size(); i++)
                {
                    if (clientes[i].getCpf() == cpfCli)
                    {
                        clientes[i].setReservas();
                    }
                }

            }
        }  
    }

    if (cpfCli == "")
        cout << "Quarto ja esta reservado" << endl;

}
// Metodo para criar o objeto Quato. Utliza o vetor de quarto que está declarado em Funcionario
void Funcionario::criaQuarto(int numero, bool luxo, int numCamas, int camaCasal)
{
    //inclui ao vetor um odjeto de quarto a partir dos parametro. push_back inclui o objeto no final do vetor
    quarto.push_back(Quarto(numero, luxo, numCamas, camaCasal));

}

void Funcionario::ImprimeReservasCliente()
{
    for (int i = 0; i < clientes.size(); i++)
    {
        cout << "Cliente: " << clientes[i].getNome() << " -- Possui " << clientes[i].getReservas() << " reservas."<< endl;

    }

}
int Funcionario::verificaReservas(string cpf)
{
    int cont = 0;
    for (int i = 0; i < quarto.size(); i++)
    {
        if (quarto[i].getCpfCli() == cpf)
            cont++;
    }
    return cont;
}
Funcionario::Funcionario(string nome)
{
    this->nome = nome;
}
void Funcionario::relatorioGeral()
{
    string lux;
    for (int i = 0; i < clientes.size(); i++)
    {
        cout << "------------------------------------------------------------------------" << endl;
        cout << "Cliente: " << clientes[i].getNome() << " -- Possui " << clientes[i].getReservas() << " reservas." << endl;
        
        for (int a = 0; a < quarto.size(); a++)
        {
            if (quarto[a].getCpfCli() == clientes[i].getCpf())
            {
                cout << "****************************************************************" << endl;
                lux = (quarto[a].getLuxo() == true) ? "Sim" : "Nao";
                cout << "Numero do Quarto: " << quarto[a].getNumero() << " --  Luxo: " << lux << " -- Numero de camas: " << quarto[a].getNumCamas() << " -- Camas de casal: " << quarto[a].getCamaCasal() << endl;
                cout << "Funcionario que realizou a reserva: " << quarto[a].getFuncRes() << endl;
            }                
        }
    }
}