#pragma once
#include <string>
#include <vector>
#include "Cliente.h"
#include "Quarto.h"
using namespace std;
class Funcionario
{
private:
	string nome;
	vector<Cliente> clientes;
	vector<Quarto> quarto;
public:
	Funcionario(string nome);
	string getNome();
	void setNome(string nome);
	void verificaVagas(int num);
	void adicionaCliente(string nome, string cpf);
	void alteraCliente(string cpf);
	void reservaQuarto(int num);
	void imprimeListaClientes();
	void criaQuarto(int numero, bool luxo, int numCamas, int camaCasal);
	void imprimeListaQuartos();
	bool verificaCliente(string cpf);
	void ImprimeReservasCliente();
	int  verificaReservas(string cpf);
	void relatorioGeral();
	void alteraQuarto(int numero);
};

