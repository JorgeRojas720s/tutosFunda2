#include <iostream>
#include <string>

using namespace std;
class Animal {

    private: 
        string raza;
        string color;
        string tamaño;
        string peso;

    public:
        Animal(string raza, string color, string tamaño, string peso) {
            this->color = color;
            this->peso = peso;
            this->raza = raza;
            this->tamaño = tamaño;
        }

        string getColor() {
            return this->color;
        }
        string getRaza() {
            return this->raza;
        }
        string getTamaño() {
            return this->tamaño;
        }

        void setColor(string color) {
            this->color = color;
        }
        void setPeso(string peso) {
            this->peso = peso;
        }
        void setRaza(string raza) {
            this->raza = raza;
        }
        void setTamaño(string tamaño) {
            this->tamaño = tamaño;
        }
};

int main()
{
    Animal perro("leopardo", "blanco", "grande", "280");
    cout << perro.getColor();
}