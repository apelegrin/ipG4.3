#include <iostream>

using namespace std;

int main(){
	/* lexico */
	const float SALDO_INICIAL = 125;
	const float APORTA = 180;
	int m, meses;
	float saldo, interes, anos;
	
	
	do{
		cout << "Cantidad a ahorrar ";
		cin >> m;
	}while (m < 125);
	
	saldo = SALDO_INICIAL;
	meses = 0;
	
	while (saldo < m){
		interes = saldo * (0.04/12); 
		saldo = saldo + interes + APORTA;
		meses++;
	}

	anos = meses/12;
	cout << "Para ahorrar " << m << endl;
	cout << "necesitas " << meses << " meses = " << anos << " años" << endl;
	
}




