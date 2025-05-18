#include <iostream>

using namespace std;

void secondMenu(int result)
{
    int opc;
    do
    {
        cout << "Menu" << endl;
        cout << "(1) jasdksa" << endl;
        cout << "(2) Rejhewkfjewbstar" << endl;
        cout << "(3) Restar" << endl;
        cout << "Opcion=> ";
        cin >> opc;

        switch (opc)
        {

        case 1:
            cout << result + 5;
            break;
        case 2:
            cout << "resta";
            break;

        default:
            cout << "Opcion no valida";
        }
    } while (opc != 3);
}

void menu1()
{
    int result;
    int opc;
    do
    {
        cout << "Menu" << endl;
        cout << "(1) Sumar" << endl;
        cout << "(2) Restar" << endl;
        cout << "(3) Restar" << endl;
        cout << "Opcion=> ";
        cin >> opc;

        switch (opc)
        {

        case 1:
            cout << "hoa";
            result = 1 + 1;
            secondMenu(result);
            break;
        case 2:
            cout << "resta";
            break;

        default:
            cout << "Opcion no valida";
        }
    } while (opc != 3);
}



int main()
{

    menu1();

    return 0;
}