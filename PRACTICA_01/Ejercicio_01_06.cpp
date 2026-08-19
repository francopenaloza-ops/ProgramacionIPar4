// Materia: Programación I, Paralelo 4
// Autor: Tu Nombre
// Carrera del estudiante: Ingeniería en Innovación Empresarial
// Fecha creación: 10/08/2026
#include <iostream>
using namespace std;
int main() {
    int numero;
    cout << "Ingrese un numero entero: ";
    cin >> numero;
    if (numero % 2 == 0) {
        cout << "El numero es PAR." << endl;
    } else {
        cout << "El numero es IMPAR." << endl;
    }
    return 0;
}