#include <iostream>
#include <string>

using namespace std;

int sumar(int a, int b)
{

    return a + b;
}

int invertir(int numero)
{
    int invertido = 0;

    while (numero > 0)
    {
        int digito = numero % 10;
        invertido = invertido * 10 + digito;

        numero = numero / 10;
    }

    return invertido;
}

int main()
{
    int num = 65;
    num = invertir(num);
    cout << num;

    system("cls");
    return 0;
}


