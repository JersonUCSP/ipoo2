#include"vector.h"
#include <iostream>
#include<math.h>

using namespace std;

double Vec::distancia(){
	return sqrt(pow((start.x-end.x),2)+pow((start.y-end.y),2));
}

void Vec::print(){
	cout << "La coordenada x del primer punto es: " << start.x << endl;
	cout << "La coordenada y del primer punto es: " << start.y << endl;
	cout << "La coordenada x del segundo punto es: " << end.x << endl;
	cout << "La coordenada y del segundo punto es: " << end.y << endl;
}


