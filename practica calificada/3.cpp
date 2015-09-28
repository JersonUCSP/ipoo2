#include<iostream>

using namespace std;

int main(){
	cout << "El numero que divide a los numeros del 1 al 20: " << endl;
	
	int valor=0;
	bool x=false;
	while (x==false){
		valor+=20;
		for (int i=1; i<=20; i++){
			if (valor%i==0)
				x=true;
			if (valor%i!=0){
				x=false;
				break;
			}
		}
		
	}
	
	cout << valor << endl;;
	
	return 0;
}
