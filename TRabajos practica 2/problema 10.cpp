#include<iostream>
#include<stdlib.h>
#define lim (400000)

using namespace std;
int main(){
int lista[lim];
int numero, total=0;
	for (int i=0; i<lim; i++)
		lista[i]=rand()%100+1;
	cout<<"Que numero quieres buscar?"<<endl;
	cin>>numero;
	
	for (int i=0; i<lim; i++){
		if (numero==lista[i]){
			total+=1;
		}
	}
	cout <<"Se han encontrado "<<total<<" veces"<<endl;		
}
