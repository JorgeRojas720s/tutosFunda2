// #include <iostream>
// #include <string>

// using namespace std;

// int main()
// {
//     int decimal = 5;
//     string kk;

//     cin >> decimal;

//     while (decimal / 2 != 0)
//     {
//         if (decimal % 2 == 1)
//         {
//             kk += "1";
//         }
//         else
//         {
//             kk += "0";
//         }
//         decimal = decimal / 2;
//     }
//     kk += "1";

//     cout << kk;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int opcion1 = 0, opcion2, opcion3, opcion4, opcion5;
//     int sub_opcion1, sub_opcion2, sub_opcion3, sub_opcion4;
//     int Resultado_conversion, destino_utilizado, resultado_SyN;
//     int num_decimal, num_binario[32], num_octal, num_hexadecimal, i = 0;

//     do
//     {

//         // menu principal
//         cout << "\nCalculadora de conversion de sistemas numericos" << endl;
//         cout << "1. decimal";
//         cout << "2. binario";
//         cout << "3. octal";
//         cout << "4. hexadecimal";
//         cout << "5. Salir";
//         cout << "Seleccione una opcion: ";
//         cin >> opcion1;

//         switch (opcion1)
//         {
//         case 1: // decimal convercion
//             cout << "Ingrese el numero en sistema decimal";
//             cin >> num_decimal;

//             // sub menu de conversion
//             cout << "\nSeleccione el sistema que desea convertir:" << endl;
//             cout << "1.Binario";
//             cout << "2.Octal";
//             cout << "3.Hexadecimal";
//             cout << "4.volver";
//             cin >> sub_opcion1;
//             break;

//             switch (sub_opcion1)
//             {
//             case 1:
//                 if (num_decimal == 0)
//                 {
//                     cout << "El resultado el binario es: 0";
//                     return 0;
//                 }
//                 i = 0;
//                 while (num_decimal > 0)
//                 {
//                     num_binario[i] = num_decimal % 2;
//                     num_decimal = num_decimal / 2;
//                     i++;
//                 }
//                 for (int j = i - 1; j >= 0; j--)
//                 {
//                     cout << num_binario[j];
//                 }

//             default:
//                 break;
//             }

//         default:
//             break;
//         }
//     } while (opcion1 != 5);
//     return 0;
// }

//!Funcion para invertir
// #include <iostream>
// using namespace std;

// int invertir(int num){
//     int invertido = 0;

//     while (num > 0) {
//         int digito = num % 10;
//         invertido = invertido * 10 + digito;
//         num /= 10;
//     }

//     return invertido;
// }

// int main() {
//     int decimal, octalInvertido = 0;

//     cout << "Ingrese un número decimal: ";
//     cin >> decimal;

//     while (decimal > 0) {
//         int residuo = decimal % 8;
//         octalInvertido = octalInvertido * 10 + residuo;
//         decimal /= 8;
//     }

//     cout << "Octal invertido: " << octalInvertido << endl;

//     cout << "Liso:" << invertir(octalInvertido);

//     return 0;
// }



//!Menu de un estudiante
// #include <iostream>
// #include <string>
// using namespace std;

// void conversionDecimalABinario(int num_decimal)
// {
//     // decimal convercion

//     int Resultado_conversion = 0, destino_utilizado = 0;
//     int i = 0, num_binario = 0;
//     int num_octal = 0, place = 0;
//     char resultado_SyN;
//     char si = 's';
//     char no = 'n';
//     int binario[255];

//     for (int i = 0; i < 8; i++) // i=1 es donde inicia y i<=0 es la condicion.
//     {
//         binario[i] = num_decimal % 2;
//         num_decimal /= 2;
//     }
//     cout << "El numero en binario es: ";
//     bool start = false;
//     for (int i = 7; i >= 0; i--)
//     {

//         if (start == false && binario[i] == 1)
//         {
//             start = true;
//         }
//         if (start)
//         {
//             cout << binario[i];
//         }
//     }
//     cout << endl;
//     cout << "Deseas guardar el resultado S/N" << endl;
//     cin >> resultado_SyN;
//     if (resultado_SyN == si)
//     {
//         cout << "Se guardo correctamente ";
//         Resultado_conversion = binario[i];
//         binario[i] = 0;
//     }
//     else if (resultado_SyN == no)
//     {
//         cout << "El resultado se elimino";
//         binario[i] = 0;
//     }
//     else if (resultado_SyN != si)
//     {
//         cout << "La respuesta no coincide";
//         return;
//     }
//     else if (resultado_SyN != no)
//     {
//         cout << "La respuesta no coincide";
//         return;
//     }
//     binario[i] = 0;
//     cout << endl;
// }

// void subMenuDecimal()
// {

//     int sub_opcion1;
//     int num_decimal;

//     int Resultado_conversion = 0, destino_utilizado = 0;
//     int i = 0, num_binario = 0;
//     int num_octal = 0, place = 0;
//     char resultado_SyN;
//     char si = 's';
//     char no = 'n';
//     int binario[255];

//     cout << "Ingrese el numero: ";
//     cin >> num_decimal;

//     // sub menu de conversion
//     cout << "\nSeleccione el sistema que desea convertir:" << endl;
//     cout << "1.Binario" << endl;
//     cout << "2.Octal" << endl;
//     cout << "3.Hexadecimal" << endl;
//     cout << "4.volver" << endl;
//     cin >> sub_opcion1;

//     switch (sub_opcion1)
//     {

//     case 1:
//         conversionDecimalABinario(num_decimal);
//         //! Cuando ya terminas la conversion llmas aqui la funcion del submenu que pasa de binario a cualquier base 
//         break;

//     case 2:
//         while (num_decimal > 0)
//         {
//             int residuo = num_decimal * place;
//             num_octal += residuo * place;
//             num_decimal /= 8;
//             place *= 10;
//         }
//         cout << "numero en octal: " << num_octal << endl;

//         cout << "Deseas guardar el resultado S/N" << endl;
//         cin >> resultado_SyN;
//         if (resultado_SyN == si)
//         {
//             cout << "Se guardo correctamente ";
//             Resultado_conversion = num_octal;
//             num_octal = 0;
//         }
//         else if (resultado_SyN == no)
//         {
//             cout << "El resultado se elimino";
//             Resultado_conversion = 0;
//         }
//         else if (resultado_SyN != si)
//         {
//             cout << "La respuesta no coincide";
//         }
//         else if (resultado_SyN != no)
//         {
//             cout << "La respuesta no coincide";
//         }
//         num_octal = 0;

//         cout << Resultado_conversion;
//         cout << endl;
//         break;

//     default:
//         break;
//     }
// }

// int main()
// {
//     int opcion1 = 0;

//     do
//     {
//         // menu principal
//         cout << "\nCalculadora de conversion de sistemas numericos" << endl;
//         cout << "1. decimal" << endl;
//         cout << "2. binario" << endl;
//         cout << "3. octal" << endl;
//         cout << "4. hexadecimal" << endl;
//         cout << "5. Resultado anterior: " << endl
//              << endl;
//         cout << " 6. Salir" << endl;
//         cout << "Seleccione una opcion: ";
//         cin >> opcion1;

//         switch (opcion1)
//         {
//         case 1:
//             subMenuDecimal();
//             break;

//         case 2:
//             //!haz unn sub menu para binario
//             break;
//         default:
//             break;
//         }

//     } while (opcion1 != 6);

//     return 0;
// }