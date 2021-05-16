#include "Cliente.h"
#include<iostream>
Cliente::Cliente(string nome, string cpf)
{
	this->nome = nome;
	this->cpf  = cpf;
}
void Cliente::imprime()
{
	cout << cpf << " - " << nome << endl;
}
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