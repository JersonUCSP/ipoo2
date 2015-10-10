#include<iostream>
#include<string.h>
#define lim 100
void UnirListas(char listaA[], char listaB[], char completo[]);
void Longitud (char lista[]);
using namespace std;
int main(){
	char listaX[lim];
	char listaY[lim];
	char completo[lim];
	int a;
	cout<<"Ingrese la lista numero 1"<<endl;
	cin>>listaX;
	cout<<"Ingrese la lista numero 2"<<endl;
	cin>>listaY;
	cout <<" Que desea hacer? \n 1. copiar el contenido de una cadena a otra \n 2. juntar dos cadenas \n 3. devolver la longitud de una cadena \n 4. comparar si dos cadenas son iguales "<<endl;
	cin>>a;
	if (a==1){
		int b;
		cout<<"de que cadena a que cadena desea copiar \n 1. COPIAR LISTA 1 A LISTA 2 \n 2. COPIAR LISTA 2 A LISTA 1 "<<endl;
		cin>>b;
		if (b==1)
			UnirListas(listaY, listaX ,completo);			
		if (b==2)
			UnirListas(listaX, listaY ,completo);
			return 0;
	
	}
	
	if (a==2){
		UnirListas(listaX, listaY, completo);
		return 0;
		
	}
	
	if (a==3){
		int b;
		cout<<"Selecciona que longitud quieres saber \n 1. Lista 1 \n 2. Lista 2"<<endl;
		cin>>b;
		if(b==1)
		Longitud(listaX);
		if(b==2)
		Longitud(listaY);
		return 0;
		
	}
	
	if (a==4){
		if (strcmp(listaX, listaY)==0)
			cout<<"Son iguales"<<endl;
		if (strcmp(listaX, listaY)!=0)
			cout<<"No son iguales"<<endl;
		return 0;
		
	}
		
	return 0;
}

void UnirListas(char listaA[], char listaB[], char completo[])
{
	
	strcpy ( completo, listaA);
	strcat ( completo, " ");
	strcat ( completo, listaB);
	cout<<completo <<endl;
}

void Longitud(char lista[])
{
	int z=strlen(lista);
	cout<< z  <<endl;
}
