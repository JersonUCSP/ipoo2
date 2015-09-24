#include<iostream>
using namespace std;
int main(){
	int a;
	cin>> a;
	int arr[]= {1,2,3,4,5,6,7,8,9};
	for (int i=0;i<10;i++){
	if (a==arr[i]){
		cout<<"YES"<<endl;
		return 0;
	}
	cout<<"no"<<endl;
	return 0;
}
}
