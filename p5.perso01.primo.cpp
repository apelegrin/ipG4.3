#include <iostream>

using namespace std;

bool esPrimo(int n, int &coste){
	int i;
	bool primo;
	
	if (n == 1) {
		primo = true;
	}
	else {
		i = 2;
		while ( (n % i) !=0 ){
			i++;
			coste++;
		}
		if (n == i) {
			primo = true;
		}
		else {
			primo = false;	
		}
	}
	return primo;
}

int main(){
	/* lexico */
	int m;
	int coste;
	
	/* Algorito */ 
	m=1;
	coste = 0;
	do{
	   if (esPrimo(m,coste)){
			cout << m << " ";
		}
		m++;
	}while (m <= 10000);
	cout << endl;
	cout << "el computo ha costado " << coste;
	
}




