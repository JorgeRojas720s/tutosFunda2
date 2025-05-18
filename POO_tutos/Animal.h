#pragma once

#include <iostream>
#include <string>

using namespace std;
class Animal {

protected:
	string nombre;

public:
	Animal();
	Animal(string nombre);

	void setNombre(string nombre);
	string getNombre();
	void caminar();

};
