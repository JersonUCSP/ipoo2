#include <iostream>
#include <cctype>
using namespace std;

int main() {
	char messyString[] = "t6H0I9s6.iS.999a9.STRING";

	char frase = messyString[0];
	for(int i = 0; frase != '\0'; frase = messyString[++i]) {
		if(isalpha(frase))
		cout << (char)(isupper(frase) ? tolower(frase) : frase);
	else if(ispunct(frase))
		cout << ' ';
	}

cout << endl;
return 0;
}
