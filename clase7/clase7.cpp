
#include <iostream>
#include <string>

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
	int edad = 0;
	cin >> edad;
	Persona obj("Carmen", edad,1.90);

	 obj.saludar();

	return 0;
}