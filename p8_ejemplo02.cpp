#include <iostream>

using namespace std;

const int LMAX = 100;
typedef float Vector[LMAX];

void leerVector (Vector &a, int n) {
	int i;
	for (i = 0; i < n; i++) {
		cout << "Introduzca el componente " << i+1 << ": ";
		cin >> a[i];
	}
}

int main() {
	Vector a, b;
	float producto;
	int tama;
	
	cout << endl;
	cout << "*** Alg 6.6. Producto escalar de dos vectores ***" << endl;
	cout << "Introduzca la longitud de los vectores: ";
	cin >> tama;

	cout << endl << "Vector 1: " << endl;
	leerVector (a, tama); cout << endl;

	cout << "Vector 2: " << endl;
	leerVector (b, tama); cout << endl;producto = 0.0;

	for (int i = 0; i < tama; ++i) {
		producto = producto + a[i] * b[i];
	}
	/* INV producto = a[1]* b[1] + a[2]* b[2] + .. a[i] * b[i] */

	cout << endl;
	cout << "El producto escalar es: " << producto << endl;
	cout << endl;
}


