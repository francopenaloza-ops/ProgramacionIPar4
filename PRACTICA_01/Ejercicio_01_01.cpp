// Materia: Programación I, Paralelo 4
// Autor: Tu Nombre
// Carrera del estudiante: Ingeniería en Innovación Empresarial
// Fecha creación: 10/08/2026
#include <iostream>
using namespace std;
int main() {
    int anio;
    cout << "Ingrese un anio (4 digitos): ";
    cin >> anio;
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        cout << "El anio es bisiesto." << endl;
    } else {
        cout << "El anio no es bisiesto." << endl;
    }
    return 0;
}