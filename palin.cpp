#include<iostream>
using namespace std;

int main(){
	int maximo;
	cout << "CANTIDAD DE LETRAS QUE TIENE LA PALABRA" << endl;
	cin >> maximo;
	char l[maximo], *puntero1, *puntero2;
	cout << "INGRESE LA PALABRA" << endl;
	cin >> l;
	puntero1=&l[0];
	puntero2=&l[maximo-1];
	for (int i=0; i<(maximo/2); i++){
		if (*puntero1!=*puntero2){
			cout << "No es palindromo" << endl;
			return 0;
		}
		puntero1++;
		puntero2--;
	}
		
	cout << "Si es palindromo" << endl;
	return 0;	
}
