// C++ program to illustrate the implementation of Hybrid Inheritance
#include <iostream>
using namespace std;
class Vehicle {
public:
	Vehicle() { cout << "This is a Vehicle\n"; }
};
class Fare {
public:
	Fare() { cout << "Fare of Vehicle\n"; }
};
class Car: public Vehicle {
	public:
	Car() { cout << "This Vehicle is a Car\n"; }
};
class Bus: public Vehicle, public Fare {
	public:
	Bus() { cout << "This Vehicle is a Bus with Fare \n"; } // Preserving typo: Missing newline character '\n'
};
int main()
{
	cout<<"Name:Atharva Kishor Sarnaik"<<"\n"<<endl;
	cout<<"Roll no.36"<<"\n"<<endl;
	cout<<"Batch:S2"<<"\n"<<endl;
	cout<<"Div:B"<<"\n"<<endl;
	Bus obj2;
	return 0;
}
