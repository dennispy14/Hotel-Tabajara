#pragma once
#define	Quarto_h
#include <string>
using namespace std;
class Quarto
{
private:
	bool luxo;
	int numero;
	int numCamas;
	int camaCasal;
	string cpfCli;
public:
	bool getLuxo();
	int getNumero();
	int getNumCamas();
	string getCpfCli();	
	void setCpfCli(string cpfCli);
	int getCamaCasal();
	void imprime();
	Quarto(int numero, bool luxo, int numCamas, int camaCasal);
	Quarto();
	


};

