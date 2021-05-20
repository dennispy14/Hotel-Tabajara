#include "Quarto.h"
#include <string>
#include<iostream>
using namespace std;

//Imprime os dados do Obejto
void Quarto::imprime()
{
	string lux = (luxo == true) ? "Sim": "Nao";
	cout << "Numero do Quarto: " << numero << " --  Luxo: " << lux << " -- Numero de camas: " << numCamas << " -- Camas de casal: " << camaCasal << " -- Cliente: " << cpfCli << " "<<  endl;
}
//Construtor da classe Quarto
Quarto::Quarto(int numero, bool luxo, int numCamas, int camaCasal)
{
	this->numero = numero;
	this->luxo = luxo;
	this->numCamas = numCamas;
	this->camaCasal = camaCasal;
	this->cpfCli = "";
	this->dtaIni = "";
	this->dtaFim = "";
	this->funcRes = "";

}
//Metodos de acesso dos atributos encapsulados
string Quarto::getCpfCli()
{
	return cpfCli;
}
void Quarto::setCpfCli(string cpfCli)
{
	this->cpfCli = cpfCli;
}
bool Quarto::getLuxo()
{
	return luxo;
}

int Quarto::getNumero()
{
	return numero;
}
int Quarto::getNumCamas()
{
	return numCamas;
}

int Quarto::getCamaCasal()
{
	return camaCasal;
}
string Quarto::getDtaIni()
{
	return dtaIni;
}
string Quarto::getDtaFim()
{
	return dtaFim;
}
void Quarto::setDtaIni(string dtaIni)
{
	this->dtaIni = dtaIni;
}
void Quarto::setDtaFim(string dtaFim)
{
	this->dtaFim = dtaFim;
}
void Quarto::setFuncRes(string funcRes)
{
	this->funcRes = funcRes;
}
string Quarto::getFuncRes()
{
	return funcRes;
}
void Quarto::setNumero(int numero)
{
	this->numero = numero;
}
void Quarto::setNumCamas(int numCamas)
{
	this->numCamas = numCamas;
}
void Quarto::setCamaCasal(int camaCasal)
{
	this->camaCasal = camaCasal;
}
void Quarto::setLuxo(bool luxo)
{
	this->luxo = luxo;
}