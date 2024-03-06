#include <iostream>
#include <string.h>
using namespace std;

struct renap {
    char nombre[80];
    int dia;
    int mes;
    int anio;
    int edad;
    char lugar[80];
} persona[50], persMenor[50], persMayor[50];

int main() {

    int i = 0, j = 0, k = 0;
    cout << ".:Registro:." << endl;

    for (i; i < 1; i++) {
        fflush(stdin);

        cout << i + 1 << ". Nombre: ";
        cin.getline(persona[i].nombre, 80, '\n');

        cout << "Lugar nacimiento: ";
        cin.getline(persona[i].lugar, 80, '\n');

        cout << "Dia nacimiento: ";
        cin >> persona[i].dia;

        cout << "Mes nacimiento: ";
        cin >> persona[i].mes;

        cout << "Anio nacimiento: ";
        cin >> persona[i].anio;
    }

    for (i = 0; i < 1; i++) {
        cout << "Nombre: " << persona[i].nombre << endl;
        cout << "Lugar de nacimiento: " << persona[i].lugar << endl;
        cout << "Fecha de nacimiento: " << persona[i].dia << "/" << persona[i].mes << "/" << persona[i].anio << endl;
        cout << "Edad: " << 2024 - persona[i].anio << " anios" << endl;
    }

    return 0;
}
