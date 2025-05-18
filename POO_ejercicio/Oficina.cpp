#include "Oficina.h"

Oficina::Oficina()
{
	salario = 0;
}

Oficina::~Oficina()
{
	salario = 0;
	nombreDeOfi = "";
}

Oficina::Oficina(int salario, string nombreDeOfi)
{
	this->salario = salario;
	this->nombreDeOfi = nombreDeOfi;
}

int Oficina::getSalario()
{
	return this->salario;
}

void Oficina::setSalario(int salario)
{
	this->salario = salario;
}

string Oficina::getNombreDeOfi()
{
	return this->nombreDeOfi;
}

void Oficina::setNombreDeOfi(string nombreDeOfi)
{
	this->nombreDeOfi = nombreDeOfi;
}
