#include <iostream>
#include "cabeceras.h"

using namespace std;

int main(){
	int operar;
	int x;
	
	cout << "Ingrese Numero" << endl;
	cin >> x;
	
	while (x != 0){
		cout << "1. cuadrado, 2. cubo, 3. fibonacci" << endl;
		cin >> operar;
		if (operar==2){
			cout << "El cubo es: ";
			cout << cube(x) << endl;
		}			
		else if(operar==1){
			cout << "El cuadrado es: ";
			cout << square(x) << endl;
		}
		else if (operar==3){
			cout << "El " << x << " num de la serie fibonacci es: ";
			cout << fibonacci(x-1) << endl;
		}
		
		cout << "\n\n\nIngrese Numero" << endl;
		cin >> x;
	}
	return 0;
}

int cube(int x){
	int result;
	result = x*x*x;
	return result;
}

int square(int x){
	int result;
	result = x*x;
	return result;
}

int fibonacci(int x){
	if (x==0 || x==1){
		return 1;
	}else {
		return fibonacci(x-2)+fibonacci(x-1);
	}
}
