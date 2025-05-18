#pragma once

#include <string> 
using namespace std;

class Oficina {

private:
	int salario;
	string nombreDeOfi;

public:
	Oficina();

	~Oficina();

	Oficina(int, string);

	int getSalario();

	void setSalario(int);

	string getNombreDeOfi();

	void setNombreDeOfi(string);

};


