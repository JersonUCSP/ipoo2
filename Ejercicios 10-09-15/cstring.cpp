#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char parte1[] = "I'm a s";
	char parte2[] = "tring!";
	char parte3[20];
	char finalString[20] = "";

	strcpy(parte3, parte1);
	strcat(finalString, parte3);
	strcat(finalString, parte2);

cout << finalString;
return 0;
}
