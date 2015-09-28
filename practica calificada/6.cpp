#include <iostream>
using namespace std;
int main(){
int a;	
	for (int i; i<1000; i++){
		a=0;
		if (i%3==0 or i%5==0)
			a+=1;
	}
	cout<<"La suma de los multiplos de 3 y 5 es "<< a <<endl;
	return 0;
}
