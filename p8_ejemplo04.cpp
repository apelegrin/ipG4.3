#include <iostream>
#include <map>

using namespace std;

typedef map<char, int> TipoHistograma;


int main() {
	
	TipoHistograma h;
	char op;
	
	for (char c='a'; c<= 'z'; c++){
		h[c] = 0;
	}
    h['m'] = 7;
    op = 'a';
    h[op] = 2; 
    
	cout << "Frecuencia de a = " << h[op] << endl;
	cout << "Frecuencia de m = " << h['m'] << endl;
}


