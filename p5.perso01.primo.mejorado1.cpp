#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int n, int &coste){
	int i;
	bool primo;
	float ra;
	
	if ((n == 1) || (n == 2)) {
		primo = true;
	}
	else if ( (n % 2) !=0 ){
		i = 3;
		ra = sqrt(n);
		while ( ((n % i) !=0) && (i <= ra) ){
			i++;
			coste++;
		}
		if ((n % i)==0) {
			primo = false;
		}
		else {
			primo = true;	
		}
	}
	else {
			primo = false;	
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




