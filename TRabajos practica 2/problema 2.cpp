#include <stdio.h>
#include <string.h>
#include <iostream>
#define lim 50
using namespace std;
void no_repetitions(char palabr[lim]);

int main()
{
	char lista[lim];
	cout<<"ingresa una frase"<<endl;
	cin.getline(lista, lim, '\n');
	no_repetitions(lista);
	return 0 ;
}

void no_repetitions(char palabr[lim])
{
	char resultado[lim];
	int i=0, j=0;
	while(palabr[i]){
		if (!strchr(resultado,palabr[i])) //strchr devuelve null si no encuentra un valor
		resultado[j++]=palabr[i];
		i++;		
	}
	resultado[j]='\0';
	cout<<"El resultado es "<<resultado; 
}
