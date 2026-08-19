// Materia: Programación I, Paralelo 4
// Autor: Tu Nombre
// Carrera del estudiante: Ingeniería en Innovación Empresarial
// Fecha creación: 10/08/2026
#include <iostream>
using namespace std;
int main() {
    float nota;
    cout << "Ingrese una nota [0 a 100]: ";
    cin >> nota;
    while (nota < 0 || nota > 100) {
        cout << "Nota invalida. Ingrese nuevamente [0 a 100]: ";
        cin >> nota;
    }
    cout << "Nota registrada correctamente." << endl;
    return 0;
}