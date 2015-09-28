#include<iostream>

using namespace std;

int main(){
	float ValorAlto, ValorBajo, vacio;
	cout << "Ingrese Valor" << endl;
	cin >> vacio;
	ValorAlto=vacio;
	ValorBajo=vacio;
	for (int i=1; i<7; i++){
		cout << "Ingrese Valor" << endl;
		cin >> vacio;
		if (vacio>ValorAlto)
			ValorAlto=vacio;
		if (vacio<ValorBajo)
			ValorBajo=vacio;
	}
	cout << " mayor " << ValorAlto << endl;
	cout << " menor " << ValorBajo << endl;	
	return 0;
}
