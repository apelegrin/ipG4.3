#include <iostream>

using namespace std;

enum Meses {ENERO, FEBRERO, MARZO, ABRIL, MAYO, JUNIO, JULIO,
			AGOSTO, SEPTIEMBRE, OCTUBRE, NOVIEMBRE, DICIEMBRE};

int main(){
	Meses mes;
	int paga;
	
	paga = 1200;
	mes = JULIO;

	if ((mes == JULIO) || (mes == DICIEMBRE)) {
		paga = paga * 2;
	};
	
    cout << "Tu paga es de " << paga << endl;
 return 0;
}




