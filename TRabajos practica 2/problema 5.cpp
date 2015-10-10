#include<iostream>
#include<fstream>
#define lim 1000
using namespace std;
int main(){
	char cadena[lim], texto[lim];
	cout<<"Ingrese el nombre del archivo "<<endl;
	cin.getline(texto, lim,'\n') ; //si es que el nombre del archivo es una frase 
	ifstream fx(texto); //el fx es el nombre que quiero asignarle 
	while (fx.getline(cadena, lim, '\n'))
		cout<<cadena<<endl; 
	return 0;
}	
