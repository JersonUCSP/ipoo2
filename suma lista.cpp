 #include <iostream>
using namespace std;

int sum(const int array[], const int length) {
long sum = 0;
for(int i = 0; i < length; sum += array[i++]);
return sum;
}

int main() {
int arr[] = {2,4,8,7,6,9,5};
cout << "La suma de la lista es: " << sum(arr, 7) << endl;
return 0;
}
