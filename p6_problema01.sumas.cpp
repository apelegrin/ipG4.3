
#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

#include "Secuencias.cpp"

int main()
{
	/* Lexico */
	list<int> S;
	list<int> T;
	list<int>::iterator EA;
	int sumas;
	
	cout << "Cargando fichero" << endl;
	cargarFichero (S, "entrada3.txt");
	
	/* Primer esquema de recorrido del primer modelo de acceso secuencial*/
	// Inicializar variables
	sumas = 0;
	T.clear();
	// Comenzar(S)
	EA = S.begin();
	// Mientras no fin de secuencia
	while (EA != S.end()) {
		// Procesar EA
		sumas = sumas + *EA;
		T.push_back(sumas);
		cout << sumas << " ";
	    // Avanzar
		EA++;
	}//end-while
	// Procesado final
	guardarFichero(T,"salida3.txt");
	return 0;
}
