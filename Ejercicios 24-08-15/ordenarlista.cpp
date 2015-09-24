#include<iostream>
using namespace std;
void ordenar(int arr[], int n){
	for(int i=0; i<10; i++){
		for (int j=1;j<n; j++){
			if (arr[j] < arr[j-1]){
				int tmp=arr[j];
					arr[j]=arr[j-1];
					arr[j-1]=tmp;
				
			}
		}
	}
}
int main()
{
	int a[10];
	for (int i=0; i<10; i++){
		cin>> a[i];		
	}
	ordenar(a,10);
	
	for (int i=0; i<10; i++){
		cout <<a[i] <<" " ;
	}
	cout << endl;
	
	return 0;
}
