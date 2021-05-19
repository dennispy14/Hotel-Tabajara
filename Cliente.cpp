#include "Cliente.h"
#include<iostream>
//Construtor da Classe Cliente
Cliente::Cliente(string nome, string cpf)
{
	this->nome = nome;
	this->cpf  = cpf;
	this->reservas = 0;
}
//Metodo para imprir atributos da classe Cliente
void Cliente::imprime()
{
	cout << cpf << " - " << nome << endl;
}
//Metodos de acesso dos atributos encapsulados
string Cliente::getNome()
{
	return nome;
}
string Cliente::getCpf() 
{
	return cpf;

}
void Cliente::setNome(string nome)
{
	this->nome = nome;
}
void Cliente::setCpf(string cpf)
{
	this->cpf = cpf;
}
int Cliente::getReservas()
{
	return reservas;
}
void Cliente::setReservas()
{
	reservas++;
}

