// C++ program to show unary operator overloading
#include <iostream>
using namespace std;
class Distance {
public:
    int feet, inch;
    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }
    void operator-()
    {
        feet--;
        inch--;
        cout << "\nFeet & Inches(Decrement): " << feet << "'" << inch;
    }
};
int main()
{
	cout<<"Name:Atharva Kishor Sarnaik"<<"\n"<<endl;
	cout<<"Roll no.36"<<"\n"<<endl;
	cout<<"Batch:S2"<<"\n"<<endl;
	cout<<"Div:B"<<"\n"<<endl;
    Distance d1(8, 9);
    -d1;
    return 0;
}
