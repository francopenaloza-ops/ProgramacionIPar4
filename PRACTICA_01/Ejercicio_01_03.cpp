// Materia: Programación I, Paralelo 4
// Autor: Tu Nombre
// Carrera del estudiante: Ingeniería en Innovación Empresarial
// Fecha creación: 10/08/2026
#include <iostream>
using namespace std;
int main() {
    int edad;
    char sexo;
    float altura;
    cout << "Digite su edad: ";
    cin >> edad;
    cout << "Digite su sexo (M/F): ";
    cin >> sexo;
    cout << "Digite su altura en metros: ";
    cin >> altura;
    cout << "\n--- Datos Ingresados ---" << endl;
    cout << "Edad: " << edad << endl;
    cout << "Sexo: " << sexo << endl;
    cout << "Altura: " << altura << " m" << endl;
    return 0;
}