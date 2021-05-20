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
	string funcRes;
	string dtaIni;
	string dtaFim;
public:
	bool getLuxo();
	int getNumero();
	int getNumCamas();
	string getFuncRes();
	string getCpfCli();
	string getDtaIni();
	string getDtaFim();	
	void setFuncRes(string funcRes);
	void setDtaIni(string dtaIni);
	void setDtaFim(string dtaFim);
	void setCpfCli(string cpfCli);
	void setNumero(int numero);
	void setNumCamas(int numCamas);
	void setCamaCasal(int camaCalas);
	void setLuxo(bool luxo);
	int getCamaCasal();
	void imprime();
	Quarto(int numero, bool luxo, int numCamas, int camaCasal);
	Quarto();
	


};

