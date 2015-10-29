#include <iostream>

#include <string>
using namespace std;
class Vehicle {
protected:
	string license;
	int year ; 
	
public:
	Vehicle(const string &myLicense, const int myYear)
		: license (myLicense) , year(myYear) {}
	const string getDesc() const
		{return license + " from " + stringify(year); }
	const string &getLicense() const {return license;}
	const int getYear() const {return year;}
	}; 	
	
class Car : public Vehicle { 
	string style ;

public:
	Car( const string & myLicense , const int myYear , const string &myStyle )
		:Vehicle ( myLicense , myYear ), style ( myStyle ) {}
	const string & getStyle () { return style ;}
};

class Truck : public Vehicle { 
	string style ;

public:
	Truck( const string & myLicense , const int myYear , const string &myStyle )
		:Vehicle ( myLicense , myYear ), style ( myStyle ) {}
	const string & getStyle () { return style ;}
};
