#include "Funcionario.h"
using namespace std;
#include<iostream>
#include <string>
string Funcionario::getNome()
{
	return nome;
}
void Funcionario::setNome(string nome)
{
	this->nome = nome;
}
void Funcionario::adicionaCliente(string nome, string cpf)
{
	clientes.push_back(Cliente(nome, cpf));

}
void Funcionario::alteraCliente(string cpf)
{
    string novNome, novCpf;
    for (int i = 0; i < clientes.size(); i++)
    {
        if (clientes[i].getCpf() == cpf)
        {
            cout << "Digite o novo nome" << endl;
            cin >> novNome;
            cout << "Digite novo cpf: " << endl;
            cin >> novCpf;
            clientes[i].setNome(novNome);
            clientes[i].setCpf(novCpf);
        }
            
    }
   
}
void Funcionario::imprimeListaClientes()
{
    for (int i = 0; i < clientes.size(); i++)
    {
        clientes[i].imprime();
    }
}
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


void Funcionario::verificaVagas( int num)
{
    bool flag = false;
    for (int i = 0; i < quarto.size(); i++)
    {

        if (quarto[i].getNumero() == num && quarto[i].getCpfCli() != "")
        {
            cout << "Quarto Ocupado!" << endl;
            
        }
        else if (quarto[i].getNumero() == num)
            cout << "Quarto Vazio!" << endl;


    }
}

void Funcionario::imprimeListaQuartos()
{
    for (int i = 0; i < quarto.size(); i++)
    {
        quarto[i].imprime();
    }
}

void Funcionario::reservaQuarto(int num)
{
    
    string cpfCli = "";
    for (int i = 0; i < quarto.size(); i++)
    {
        
        if (quarto[i].getNumero() == num && quarto[i].getCpfCli() == "")
        {
            cout << "Digite o CPF do cliente" << endl;
            cin >> cpfCli;  
            if (verificaCliente(cpfCli) == false)
                cout << "Cliente nao encontrado!" << endl;
            else
                quarto[i].setCpfCli(cpfCli);
        }        

    }

    if (cpfCli == "")
        cout << "Quarto ja esta reservado" << endl;

}

void Funcionario::criaQuarto(int numero, bool luxo, int numCamas, int camaCasal)
{
    quarto.push_back(Quarto(numero, luxo, numCamas, camaCasal));

}
