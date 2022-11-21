#include <iostream>

using namespace std;

#define TAM_HISTO 'Z' - 'A' + 1
#define elemHisto(h,c) h[(c) - 'A']

int main() {
	
	int frecLetras[TAM_HISTO];
	
	frecLetras[0] = 7;
	elemHisto(frecLetras,'H') = 2;
	
	cout << "Frecuencia de A = " << frecLetras[0] << endl;
	cout << "Frecuencia de H = " << elemHisto(frecLetras,'H') << endl;
}


