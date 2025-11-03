// C++ program to demonstrate how to overload relational operators.
#include <iostream>
using namespace std;
class MyClass {
private:
    int value; 
public:
    MyClass(int val) : value(val) {}

   
    bool operator==(const MyClass& other) const
    {
      
        return value == other.value;
    }

    bool operator!=(const MyClass& other) const
    {
        return !(*this == other);
    }
    bool operator<(const MyClass& other) const
    {
        return value < other.value;
    }

    bool operator>(const MyClass& other) const
    {
        return value > other.value;
    }
    bool operator<=(const MyClass& other) const
    {
        return !(*this > other);
    }

    bool operator>=(const MyClass& other) const
    {
        return !(*this < other);
    }
};

int main()
{
	cout<<"Name:Atharva Kishor Sarnaik"<<"\n"<<endl;
	cout<<"Roll no.36"<<"\n"<<endl;
	cout<<"Batch:S2"<<"\n"<<endl;
	cout<<"Div:B"<<"\n"<<endl;
    MyClass obj1(20);
    MyClass obj2(20);

    if (obj1 == obj2) {
        cout << "obj1 is equal to obj2" << endl;
    }
    else {
        cout << "obj1 is not equal to obj2" << endl;
    }

    if (obj1 < obj2) {
        cout << "obj1 is less than obj2" << endl;
    }
    else {
        cout << "obj1 is not less than obj2" << endl;
    }

    // Using overloaded '!=' operator
    if (obj1 != obj2) {
        cout << "obj1 is not equal to obj2" << endl;
    }
    else {
        cout << "obj1 is equal to obj2" << endl;
    }

    // Using overloaded '>' operator
    if (obj1 > obj2) {
        cout << "obj1 is greater than obj2" << endl;
    }
    else {
        cout << "obj1 is not greater than obj2" << endl;
    }

    // Using overloaded '<=' operator
    if (obj1 <= obj2) {
        cout << "obj1 is less than or equal to obj2" << endl;
    }
    else {
        cout << "obj1 is not less than or equal to obj2" << endl;
    }

    // Using overloaded '>=' operator
    if (obj1 >= obj2) {
        cout << "obj1 is greater than or equal to obj2" << endl;
    }
    else {
        cout << "obj1 is not greater than or equal to obj2" << endl;
    }

    return 0;
}
