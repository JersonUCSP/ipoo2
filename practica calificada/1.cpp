#include <iostream>
using namespace std; 
int main (){ 
	int num[8]; 
	cout<<"Introduzca 8 numeros"<<endl; 
	for(int x=0;x<8;x++){ 
	cin>>num[x]; 
	} 
	cout<<"Orden inverso:"<<endl; 
	for(int x=7;x>=0;x--){ 
	cout<<num[x]<<endl; 
	} 
return 0; 
} 

