#include <iostream>
#include <fstream>
#include <list>
#include <string>

#define ITERAR { do {
#define DETENER(C) { if (C) break; }
#define FIN_ITERAR } while(true); }

using namespace std;

#include "Secuencias.cpp"

bool esPar(int dato){
  return((dato % 2) == 0);
}

int main(){
	/* Lexico */
	list<int> S;
	list<int>::iterator EA;

	/* Comenzar; */
	cargarFichero(S,"entrada7.3.txt");
	EA = S.begin();
	
	/* SEGÚN FDS */
	if (EA == S.end()){ /* FDS : */
		/* {Tratamiento sec. vacía } */
		cout << "Fichero sin datos " << endl;
	}
	else { /* NO FDS : */
		/* MIENTRAS NO FDS Y DESPUÉS NO Pro(EA) HACER */
		while ((EA != S.end()) && (!esPar(*EA))) {
	        /* Avanzar */
	        cout << *EA << endl;
	        EA++;
	    }/* FIN_MIENTRAS */
	    /* SEGÚN FDS */
	    if (EA == S.end()) { /* FDS : */
	       /*{ Tratto. elemento no encontrado }*/
	       cout << "No se ha encontrado un número par" << endl;
	    }
	    else { /* NO FDS : */
		   /* { Tratamiento EA encontrado } */
		   cout << "Encontrado par " << *EA << endl;
		} /* FIN_SEGÚN; */	
    } /* FIN_SEGÚN NO FDS; */
}
	




