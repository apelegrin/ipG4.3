
#include <iostream>
#include <fstream>
#include <string>
#include <list>

using namespace std;

#include "Secuencias.cpp"

int main()
{
	/* Lexico */
	list<int> S1;
	list<int> S2;
	list<int> T;
	list<int>::iterator EA_S1;
	list<int>::iterator EA_S2;
	int  h1, h2;
	
	cout << "Cargando fichero" << endl;
	cargarFichero (S1, "entrada5_1.txt");
	cargarFichero (S2, "entrada5_2.txt");
	
	/* Primer esquema de recorrido del primer modelo de acceso secuencial*/
	// Inicializar variables
	T.clear();
	// Comenzar(S)
	EA_S1 = S1.begin();
	EA_S2 = S2.begin();
	// Mientras no fin de secuencia
	while ((EA_S1 != S1.end()) && (EA_S2 != S2.end()) ){
		h1 = *EA_S1;
		h2 = *EA_S2;
		// Si h1 == h2 guardamos h1 y avanzamos los 2
		if (h1 == h2) {
			cout << h1 << " ";
			T.push_back(h1);
			EA_S1++;
			EA_S2++;
		}
		// si h1 > h2 avanzar h2
		else if (h1 > h2) {
			EA_S2++;
		}
		else { // h2 > h1 avanzar h1
			EA_S1++;
		}
	}//end-while
	// Procesado final
	guardarFichero(T,"salida5.txt");
	return 0;
}
