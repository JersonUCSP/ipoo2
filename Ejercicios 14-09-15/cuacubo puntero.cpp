#include <iostream>
#include "cabeceras.h"

using namespace std;

void cube(int *x){
	*x = *x * *x * *x;
	
}

void square(int *x){
	*x = *x * *x;
}

int main(){
	int operar;
	int x;
	
	cout << "Ingrese Numero por favor" << endl;
	cin >> x;
	
	while (x != 0){
		cout << "1. cuadrado, 2. cubo "<< endl;
		cin >> operar;
		if (operar==2){
			cube(&x);
			cout << x << endl;
		}			
		else if(operar==1){
			square(&x);
			cout << x << endl;
		}
	}
return 0;
}


