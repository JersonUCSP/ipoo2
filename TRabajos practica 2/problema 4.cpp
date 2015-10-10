#include<iostream>
using namespace std;
int factorial (int a){
	int res=1;
	for (int k=a ; k>0 ; k--){
		res=res*k;
	}
	return res;
}
int main(){
	int a,res;
	cout<<"inserte un numero "<<endl;
	cin>>a;
	res=factorial(a);
	cout<<"El factorial es ---> "<< res <<endl;
	return 0;
}
