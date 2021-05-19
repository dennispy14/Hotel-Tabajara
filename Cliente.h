#pragma once
#include <string>
using namespace std;
class Cliente
{
public:
    string getNome();
    void   setNome(string nome);
    string    getCpf();
    int getReservas();
    void setReservas();
    void   setCpf(string cpf);
    Cliente(string nome, string cpf);
    Cliente();    
    void imprime();
private:
    string nome;
    string cpf;
    int reservas;
};

