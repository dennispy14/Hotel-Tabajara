#include "Quarto.h"
#include <string>
#include<iostream>
using namespace std;
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
void Quarto::imprime()
{
	string lux = (luxo == true) ? "Sim": "Nao";
	cout << "Numero do Quarto: " << numero << " --  Luxo: " << lux << " -- Numero de camas: " << numCamas << " -- Camas de casal: " << camaCasal << " -- Cliente: " << cpfCli << " "<<  endl;
}

Quarto::Quarto(int numero, bool luxo, int numCamas, int camaCasal)
{
	this->numero = numero;
	this->luxo = luxo;
	this->numCamas = numCamas;
	this->camaCasal = camaCasal;
	this->cpfCli = "";

}
string Quarto::getCpfCli()
{
	return cpfCli;
}
void Quarto::setCpfCli(string cpfCli)
{
	this->cpfCli = cpfCli;
}
