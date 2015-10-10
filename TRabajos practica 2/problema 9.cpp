#include<iostream>
#define lim 25
#include<string.h>
#include<fstream>
using namespace std; 
int main(){
	char nombre[lim];
	int indice=0;
	int num;
	cout<<"Inserte su nombre completo"<<endl;
	cin.getline(nombre,lim,'\n');
	int z=strlen(nombre);
	cout<<z<<endl;
	cout<<"Inserte cuantas letras tiene su nombre "<<endl;
	cin>>num;
	if (z==num+1){
		for (int i=0;i<z;i++){
			if (nombre[i]!= '\n')
				cout<<"la letra "<<nombre[i]<<"  tiene el indice "<<indice<<endl;
				indice+=1;
		}
	}
	
	else {
		cout<<"Numero incorrecto \n";
		cin>>num;
	}
	return 0; 
;	}
