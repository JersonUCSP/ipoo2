#include<iostream>

using namespace std;

int main(){
	float Nmayor, Nmenor, num;
	cout << "Ingrese Valor" << endl;
	cin >> num;
	Nmayor=num;
	Nmenor=num;
	for (int i=1; i<7; i++){
		cout << "Ingrese Valor" << endl;
		cin >> num;
		if (num>Nmayor)
			Nmayor=num;
		if (num<Nmenor)
			Nmenor=num;
	}
	cout << " mayor " << Nmayor << endl;
	cout << " menor " << Nmenor << endl;	
	return 0;
}
