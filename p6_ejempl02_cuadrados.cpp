#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;

void cargarFicheroInt (list<int> &S, string nombre) {
	ifstream f;
	int dato;
	
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

void guardarFicheroInt (list<int> S, string nombre) {
	ofstream f;
	list<int>::iterator EA;

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
	list<int> S, R;
	list<int>::iterator EA;
	
	int cuadrado;
	
	cout << "Cargando fichero" << endl;
	cargarFicheroInt (S, "entrada2.txt");
	/* Primer esquema de recorrido del primer modelo de acceso secuencial*/

	EA = S.begin();
	while (EA != S.end()) {
		cout << *EA << " ";
		cuadrado = (*EA) * (*EA);
		R.push_back (cuadrado); /* Registrar(R, c_conv) */
		EA++;
	}
	cout << endl;
	cout << "Salvando fichero" << endl;
	guardarFicheroInt (R, "salida2.txt");
	return 0;
}




