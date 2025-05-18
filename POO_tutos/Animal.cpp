#include "Animal.h"

Animal::Animal()
{
    this->nombre = "";
}

Animal::Animal(string nombre)
{
    this->nombre = nombre;
}

void Animal::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Animal::getNombre()
{
    return this->nombre;
}

void Animal::caminar()
{
    cout << "Andando";
}
