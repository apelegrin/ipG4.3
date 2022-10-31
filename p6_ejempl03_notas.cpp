#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;

void cargarFicheroFloat (list<float> &S, string nombre) {
	ifstream f;
	float dato;
	
	f.open (nombre.c_str());
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}
	else {
		S.clear(); // Borra el contenido previo de la lista
		while (f >> dato) {
			S.push_back(dato);
		}
	}
	f.close();
};

void guardarFicheroFloat (list<float> S, string nombre) {
	ofstream f;
	list<float>::iterator EA;

	f.open (nombre.c_str());
	if (!f) {
		cout << "Error abriendo el fichero resultado" << endl;
	}
	else
	{
		EA = S.begin();
		while (EA != S.end()) {
			f << *EA << " ";
			EA++;
		}//end-while
		f.close();
	}
};

int main(){
	list<float> S;
	list<float>::iterator EA;
	
	int numeroAprobados;
	
	cout << "Cargando fichero" << endl;
	cargarFicheroFloat (S, "entrada3.txt");
	/* Primer esquema de recorrido del primer modelo de acceso secuencial*/
	numeroAprobados = 0;
	EA = S.begin();
	while (EA != S.end()) {
		cout << *EA << " ";
		if (*EA >= 5.0) {
			numeroAprobados++;
		}
		EA++;
	}
	cout << endl;
	cout << "EL número de aprobados es " <<  numeroAprobados << endl;
	
	return 0;
}




