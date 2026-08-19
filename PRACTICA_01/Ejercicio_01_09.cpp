// Materia: Programación I, Paralelo 4
// Autor: Tu Nombre
// Carrera del estudiante: Ingeniería en Innovación Empresarial
// Fecha creación: 10/08/2026
#include <iostream>
#include <string>
using namespace std;
int main() {
    string numero;
    cout << "Ingrese un numero entero positivo: ";
    cin >> numero;
    for (char c : numero) {
        int d = c - '0'; // Convierte el carácter a número entero
        cout << "\nCuadricula de " << d << "x" << d << " (digito " << d << "):" << endl;
    
        for (int i = 0; i < d; i++) {
            for (int j = 0; j < d; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    }
    return 0;
}