#pragma once
#include "Animal.h"
#include <string>

class Perro : public Animal {

private:
	string raza;

public:
	Perro(string nombre, string raza) : Animal(nombre) {
		this->raza = raza;
	};

	Perro() {

	}

	void ladra() {
		cout << "guau";
	}

};