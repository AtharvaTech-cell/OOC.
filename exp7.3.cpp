#include<iostream>
using namespace std;

//Base class:person
class Person{
	public:
		Person(){
			cout<<"Person's constructor called "<<endl;
		}
};

//derived class1 : Faculty
class Faculty : public Person {
	public:
		Faculty()
		{
		cout<<"Faculty's constructor called "<<endl;
	}
};

//Derived class2:Student
class Student : public Person{
	public:
		Student()
		{
			cout<<"Students's constructor called "<<endl;
		}
};

//derived class3: TA(inherits from both Faculty and Student)
class TA: public Faculty,public Student{
	public:
		TA(){
			cout<<"TA's constructor called "<<endl;
		}
};

int main()
{
	cout<<"\nname = Atharva Kishor Sarnaik";
	cout<<"\nroll no. = 36";
	cout<<"\ndiv = B";
	cout<<"\nbatch =S2\n";
	TA ta; //creating an object TA
	return 0;
}