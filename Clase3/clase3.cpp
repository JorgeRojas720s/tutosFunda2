
//*************************************************************************** */

//! Ejercicio 1: Positivo, negativo o cero
//? Pide un número y muestra si es positivo, negativo o cero.

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Ingresa un numero: ";
//     cin >> num;
//     if (num > 0) {
//         cout << "Es positivo" << endl;
//     } else if (num < 0) {
//         cout << "Es negativo" << endl;
//     } else {
//         cout << "Es cero" << endl;
//     }
//     return 0;
// }

//*************************************************************************** */

//! Ejercicio 2: Par o impar
//? Pide un número e indica si es par o impar.

// #include <iostream>
// using namespace std;
// int main() {
//     int num;
//     cout << "Ingresa un numero: ";
//     cin >> num;
//     if (num % 2 == 0) {
//         cout << "El numero es par" << endl;
//     } else {
//         cout << "El numero es impar" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     for (int i = 0; i < 5; i++) {
//         std::cout << "Iteración: " << i << std::endl;
//     }
//     return 0;
// }

//*************************************************************************** */

//! Ejercicio 3: Contador hasta N
//? Pide un número N e imprime los números del 1 al N.

// #include <iostream>
// using namespace std;
// int main() {
//     int N, i = 1;
//     cout << "Ingresa un numero: ";
//     cin >> N;
//     while (i <= N) {
//         cout << i << " ";
//         i++;
//     }
//     cout << endl;
//     return 0;
// }

//*************************************************************************** */

//! Ejercicio 4: Tabla de multiplicar
//? Pide un número y muestra su tabla de multiplicar hasta 10.

// #include <iostream>
// using namespace std;
// int main() {
//     int num, i = 1;
//     cout << "Ingresa un numero: ";
//     cin >> num;
//     while (i <= 10) {
//         cout << num << " x " << i << " = " << num * i << endl;
//         i++;
//     }
//     return 0;
// }

//*************************************************************************** */

//! Ejercicio 5: Contador de números pares e impares
//? Pide números hasta que el usuario ingrese 0. Cuenta cuántos son pares y cuántos impares.

// #include <iostream>
// using namespace std;
// int main() {
//     int num, pares = 0, impares = 0;
//     cout << "Ingresa numeros (0 para salir): ";
//     cin >> num;
//     while (num != 0) {
//         if (num % 2 == 0) {
//             pares++;
//         } else {
//             impares++;
//         }
//         cin >> num;
//     }
//     cout << "Pares: " << pares << endl;
//     cout << "Impares: " << impares << endl;
//     return 0;
// }

//*************************************************************************** */

//! Ejercicio 6: Adivina el número secreto
//? El programa debe generar un número aleatorio entre 1 y 100, y el usuario debe adivinarlo. Después de cada intento, el programa debe indicar si el número ingresado es mayor o menor que el número secreto.

// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// using namespace std;
// int main() {
//     srand(time(0));
//     int numeroSecreto = rand() % 100 + 1;
//     int numeroIngresado;
//     cout << "Adivina el numero secreto (entre 1 y 100): ";
//     while (true) {
//         cin >> numeroIngresado;
//         if (numeroIngresado > numeroSecreto) {
//             cout << "Ingresa uno mas bajo: ";
//         } else if (numeroIngresado < numeroSecreto) {
//             cout << "Igresa uno mas alto: ";
//         } else {
//             cout << "Has adivinado el numero!" << endl;
//             break;
//         }
//     }
//     return 0;
// }

//*************************************************************************** */
