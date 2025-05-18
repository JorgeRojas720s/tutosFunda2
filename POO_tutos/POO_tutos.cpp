
#include <iostream>
#include <string>
#include "Perro.h"

using namespace std;

class Persona {
private:
	string nombre;
	int edad;
	float altura;
public:
	Persona(string _nombre, int _edad, float _altura)
	{
		nombre = _nombre;
		edad = _edad;
		altura = _altura;
	}
	Persona()
	{

	}
	void saludar() {
		cout << "Hola mi gente" << endl;
	}
	string getNombre() {
		return this->nombre;
	}
	int getEdad() {
		return edad;
	}
	void setNombre(string _nombre) {
		nombre = _nombre;
	}
	void setEdad(int _edad) {
		edad = _edad;
	}
};

int main()
{
	//
	//Persona obj("Carmen", 34, 1.90);
	//cout << obj.getNombre();
	//cout << endl << " ahora se llama:" << endl;
	//obj.setNombre("Jose el pollo");
	//cout << obj.getNombre();


	//Persona obj2;
	//obj2.setNombre("popo");
	//cout << obj2.getNombre();


	Perro obj;

	obj.ladra();


	return 0;
}