// Materia: Programación I, Paralelo 4
// Autor: Tu Nombre
// Carrera del estudiante: Ingeniería en Innovación Empresarial
// Fecha creación: 10/08/2026
#include <iostream>
using namespace std;
int main() {
    float precio, precioFinal;
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    precioFinal = precio * 1.13; // Aplica el 13% de IVA
    cout << "El precio con IVA (13%) es: " << precioFinal << endl;
    return 0;
}