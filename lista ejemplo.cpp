 #include <iostream>
using namespace std;
int main() {

int arr[4];
cout << "Ingrese cuatro numeros:" << endl;

	for(int i = 0; i < 4; i++)
		cin >> arr[i];
		cout << "los valores en conjunto son ahora:";
	for(int i = 0; i < 4; i++)
		cout << "  " << arr[i];
		cout << endl;

return 0;
}
