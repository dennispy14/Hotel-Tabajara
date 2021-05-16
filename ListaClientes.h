#pragma once
#include <vector>
#include "Cliente.h"
class ListaClientes
{
public:
    void adicionaCliente(string nome, string cpf);
    void removeCliente(string nome);
    void imprimeLista();
    string getCpf(string cpf);
private:    
    vector<Cliente> clientes;
    string nomeFunc;
};

