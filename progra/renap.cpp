#include<iostream>
#include<vector>
#include<limits>
using namespace std;

void pedirDatos();
void mostrarDatos();
void buscarPersona();
bool validarMes(int);

vector<string> nombres;
vector<string> ciudades;
vector<int> anios;
vector<int> meses;
vector<int> dias;
vector<string>edades;

int main() {
    int opcion;
    bool continuarPrograma = true;

    while (continuarPrograma) {
        cout << "1. Registro" << endl;
        cout << "2. Datos guardados" << endl;
        cout << "3. buscar" << endl;
         cout << "4. Salir" << endl;
        cout << "elige opcion: ";
        cin >> opcion;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opcion) {
            case 1: pedirDatos(); break;
            case 2: mostrarDatos(); break;
            case 3: buscarPersona(); break;
            case 4: continuarPrograma = false; break;
            default: cout << "Opción inválida. Intenta de nuevo." << endl;
        }
    }

    return 0;
}

void pedirDatos() {
    char rpt;
    do {
        string nombre, ciudad,inf;
        int anio, mes, dia;
        cout << "\n.:Renap:." << endl;

        cout << "Nombre: "; getline(cin, nombre);
        cout << "Ciudad: "; getline(cin, ciudad);

        cout << "\nFecha de nacimiento: " << endl;
        cout << "Anio: "; cin >> anio;
        cout << "mes: "; cin >> mes;
        cout << "dia: "; cin >> dia;
		  if (!validarMes(mes)) {
            cout << "Mes no valido. Intente de nuevo.\n";
            continue;
        }
		
		int edad = 2024 - anio;
		if(edad > 18){
			 inf = "Mayor de edad";
		}
		else{
			inf = "Menor de edad"; 
		}
        nombres.push_back(nombre);
        ciudades.push_back(ciudad);
        anios.push_back(anio);
        meses.push_back(mes);
        dias.push_back(dia);
        edades.push_back(inf);
        

        cout << "\ndesea continuar(S|N): ";
        cin >> rpt;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<endl;
    } while ((rpt == 's') || (rpt == 'S'));
}

void mostrarDatos() {
	cout<<"\nRegistro ingresados";
    for(size_t i=0; i<nombres.size();i++){
    	cout<< "Persona " << i + 1 << ":\n";
        cout<< "Nombre: " << nombres[i] << "\n";
        cout<< "Ciudad: " << ciudades[i] << "\n";
        cout<< "Fecha nacimiento: " << dias[i] << "/ "<<meses[i]<<" /"<<anios[i]<<endl;
        cout<< edades[i];
	}
    
    cin.ignore(); // Espera a que el usuario presione Enter
    cout<<endl;
}

void buscarPersona(){
	string objetivo;
	cout<<"\nIngrese nombre: ";
	getline(cin,objetivo);
	
	bool encontrado = false;
	for(size_t i=0; i<nombres.size();i++){
    	if(nombres[i] == objetivo){
    		cout << "Persona " << i + 1 << ":\n";
	        cout << "Nombre: " << nombres[i] << "\n";
	        cout << "Ciudad: " << ciudades[i] << "\n";
	        cout << "Fecha nacimiento: " << dias[i] << "/ "<<meses[i]<<" /"<<anios[i];
	        encontrado =true;
	        break;
		}	
	}
	
	if(!encontrado){
		cout<<"upps objeto perdedor no identificado";
	} 
	
	cin.ignore();
}

bool validarMes(int mes) {
    // Validar mes
    return mes >= 1 && mes <= 12;
}

