#include <iostream>
using namespace std;

int main(){
	int list[10], num;
	for (int i=0; i<10; i++){
		cout << " numero: " ;
		cin >> num;
		list[i]=num;
	}
	
	int *ptr, max=10, c;
	
	for (int i=0; i<max; i++){
		ptr=&list[0];
		for (int j=0; j<9; j++){
			if (*ptr>*(ptr+1)){
				c=*(ptr+1);
				*(ptr+1)=*ptr;
				*ptr=c;
			}
			ptr+=1;
		}
	}	
	
	
	cout << "\nlista ordenada:" << endl;
	for (int i=0; i<10; i++)
		cout << list[i] << " ";
		
	return 0;
}
