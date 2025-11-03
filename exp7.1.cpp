// C++ program to illustrate multiple inheritance
#include <iostream>
using namespace std;
class Vehicle {
public:
    Vehicle() { cout << "This is a Vehicle\n"; }
};
class FourWheeler {
public:
    FourWheeler() { cout << "This is a 4 Wheeler\n"; }
};
class Car : public Vehicle, public FourWheeler {
public:
    Car() { cout << "Car Class\n"; }
};

int main() {
	cout<<"Name:Atharva Kishor Sarnaik"<<"\n"<<endl;
	cout<<"Roll no.36"<<"\n"<<endl;
	cout<<"Batch:S2"<<"\n"<<endl;
	cout<<"Div:B"<<"\n"<<endl;
    Car obj;
    return 0;
}

