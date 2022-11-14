const char MARCA_FIN_LINEA = '\n';

void guardarFichero (list<int> S, string nombre) {
	ofstream f;
	list<int>::iterator EA;

	f.open (nombre);
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

void cargarFichero (list<int> &S, string nombre) {
	ifstream f;
    int dato;
    
	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}
	else {
		S.clear(); // Borra el contenido previo de la lista
		while (f >> dato) {
			S.push_back (dato);
		}
		f.close();
	}//end-if
};

///////////////////////////////////////////

void guardarFichero (list<char> S, string nombre) {
	ofstream f;
	list<char>::iterator EA;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero resultado" << endl;
	}
	else
	{
		EA = S.begin();
		while (EA != S.end()) {
			if (*EA == MARCA_FIN_LINEA) {
				f << endl;
			} else {
				f << *EA;
			}
			EA++;
		}//end-while
		f.close();
	}
};

void cargarFichero (list<char> &S, string nombre) {
	ifstream f;
	string cadena;
	unsigned int i;

	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}
	else {
		S.clear(); // Borra el contenido previo de la lista
		while (getline(f, cadena)) {
			for (i=0; i<cadena.length(); i++) {
				S.push_back (cadena[i]);
			}
		S.push_back (MARCA_FIN_LINEA);
		}//end-while
		f.close();
	}//end-if
};

///////////////////////////////////////////

void guardarFichero (list<float> S, string nombre) {
	ofstream f;
	list<float>::iterator EA;

	f.open (nombre);
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

void cargarFichero (list<float> &S, string nombre) {
	ifstream f;
    float dato;
    
	f.open (nombre);
	if (!f) {
		cout << "Error abriendo el fichero de datos" << endl;
	}
	else {
		S.clear(); // Borra el contenido previo de la lista
		while (f >> dato) {
			S.push_back (dato);
		}
		f.close();
	}//end-if
};
