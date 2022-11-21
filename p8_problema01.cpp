#include <iostream>
#include <fstream>
#include <list>
#include <map>

using namespace std;

#include "Secuencias.cpp"

typedef map<char,int>  TipoHistograma;

int main () {
    /* Lexico */	
    list<char> S;
    list<char>::iterator EA;
    
    TipoHistograma histo;
    
    float nElementos;
    float nPor;
    
    /* inicializar histograma */
    for (char op ='a';op <= 'z';op++){
		histo[op] = 0;
	}
	/* esquema recorrido primer modelo de acceso secuencial */
	cargarFichero(S,"entrada8.1.txt");
	nElementos = 0;
	
	EA = S.begin();
	
	while (EA != S.end()){
		/* Tratamiento */
		if (*EA != ' '){
			histo[*EA]++;
			nElementos++;
		}
		/* Avanzar */
		EA++;
	}	
	
	/* Imprimir */
	
    for (char op ='a';op <= 'z';op++){
		nPor = histo[op] * 100 / nElementos;
		cout << op << " - " << histo[op]  <<
			 " -" << nPor << endl;
	}
}


