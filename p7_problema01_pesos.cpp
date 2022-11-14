#include <iostream>
#include <fstream>
#include <list>
#include <string>

using namespace std;

#include "Secuencias.cpp"

int main(){
	/* Lexico */
	list<float> S;
	list<float>::iterator EA;
	float media, suma;
	int numeroAlumnos;
	int menor40, entre40_50, mayor50;
	bool esUltimo;
	
    /* Iniciar;*/
    cargarFichero(S,"entrada7.1.txt");
    EA = S.begin();
    
    /* SEGÚN EsVacía */
    if (EA == S.end()){ /* EsVacía : */
		/* {Tratamiento sec. vacía } */
		cout << "Fichero sin datos " << endl;
	}
	else { /* NO EsVacía : */
		 /* { Inic. del tratamiento } */
		 media = 0.0;
		 suma  = 0.0;
	     numeroAlumnos = 0;
	     menor40    = 0;
	     entre40_50 = 0;
	     mayor50    = 0;
	     esUltimo   = false;
	     /* Tratar el primer elemento */
	  
		 if (*EA < 40) { 
		    menor40++;
		 }
		 else if (*EA <= 50) {
		    entre40_50++;
		     }
		 else {
		    mayor50++;
		 }
		 numeroAlumnos++;
		 suma = suma + *EA;
		 cout << *EA << endl;
		
	     do { /* REPETIR */
			 EA++; /* Avanzar */
			 /* { Tratamiento de EA } */
			 if (EA != S.end()){
				 if (*EA < 40) { 
					 menor40++;
			     }
			     else if (*EA <= 50) {
			         entre40_50++;
			     }
			     else {
					 mayor50++;
			     }
			     numeroAlumnos++;
			     suma = suma + *EA;
			     cout << *EA << endl;
		     }
			 else {
				esUltimo = true;
			 }
		 }while (!esUltimo); /* HASTA EsÚltimo; */
		 /* { Terminación del tratto. } */
		 cout << "Hay " << menor40    << " alumnos menores a 40kg " << endl;
		 cout << "Hay " << entre40_50 << " alumnos entre 40 y 50kg " << endl;
		 cout << "Hay " << mayor50    << " alumnos mayores a 50kg " << endl;
		 media = suma / numeroAlumnos; 
		 cout << "El peso medio es " << media << endl;
	} /* FIN_SEGUN; */


 return 0;
}




