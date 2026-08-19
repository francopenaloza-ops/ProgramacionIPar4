// Materia: Programación I, Paralelo 4
// Autor: Tu Nombre
// Carrera del estudiante: Ingeniería en Innovación Empresarial
// Fecha creación: 10/08/2026
#include <iostream>
using namespace std;
int main() {
    int n, temp, contador = 0, suma = 0;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    temp = n;
    while (temp > 0) {
        int digito = temp % 10;
        suma += digito;
        contador++;
        temp /= 10;
    }
    cout << "Cantidad de digitos: " << contador << endl;
    cout << "Suma de los digitos: " << suma << endl;
    return 0;
}