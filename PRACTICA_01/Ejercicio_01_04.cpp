// Materia: Programación I, Paralelo 4
// Autor: Tu Nombre
// Carrera del estudiante: Ingeniería en Innovación Empresarial
// Fecha creación: 10/08/2026
#include <iostream>
using namespace std;
int main() {
    float practica, teorica, participacion, notaFinal;
    cout << "Digite la nota de practica: ";
    cin >> practica;
    cout << "Digite la nota teorica: ";
    cin >> teorica;
    cout << "Digite la nota de participacion: ";
    cin >> participacion;
    notaFinal = (practica * 0.30) + (teorica * 0.60) + (participacion * 0.10);
    cout << "La nota final es: " << notaFinal << endl;
    return 0;
}