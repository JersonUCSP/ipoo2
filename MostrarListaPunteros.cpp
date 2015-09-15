#include <iostream>
using  namespace std;
int main(){
	long arr[] = {6, 0, 9, 6};
	long *ptr = arr;
	for (int i=0 ; i<4 ; i++){
		cout << *ptr << endl ;
		ptr+=1;	}
}
