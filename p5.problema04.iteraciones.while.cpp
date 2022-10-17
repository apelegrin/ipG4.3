#include <iostream>

using namespace std;

int main(){
	/* lexico */
	int m, i;
	int an,a0,a1,a2;
	
	/* Algorito */ 
	do{
	   cout << "Introduce el valor de m >";
	   cin >> m;
	}while (m < 0);
	i = 0;
	an = 0;
	a0 = 1;
	a1 = 2;
	a2 = 3;
	while (an <= m){
		if (i > 3) {
			a0 = a1;
			a1 = a2;
			a2 = an;
		}
		switch (i){
			case 0:
				an = 1;
				break;
			case 1:
				an = 2;
				break;
			case 2:
				an = 3;
				break;
			default:
				an = (3*a2) - (2*a0);
		}	
		cout << "a(" << i << ")=" << an << endl;
		i++;
	};
}




