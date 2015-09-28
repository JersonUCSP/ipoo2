#include<iostream>

using namespace std;

int main(){
	cout << "La suma de numeros pares de fibonacci hasta 4 millones " << endl;
	int x=1, y=2, z, total=0, result=2;
	while (total<=4000000){
		total=x+y;
		z=y;
		y=total;
		x=z;
		if (total%2==0)
				result+=total;
	}
	cout << result << endl;
	return 0;
}
