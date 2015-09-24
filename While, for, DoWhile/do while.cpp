#include <iostream>

using namespace std;

int main(){
	int num, i=1;
	cout << "HASTA QUE NUMERO QUIERES IMPRIMIR  " << endl;
	cin >> num;
	cout << "Los numeros son:" << endl;
	do{
		cout << i << endl;
		i++;
	}while(i<=num);
	return 0;
}
