#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    int roll;
    string name;
public:
    void getdata() {
        cout << "\n----------------------------------------";
        cout << "\nEnter Roll No.: ";
        cin >> roll; 
        cout << "Enter Student Name: ";
       	cin>>name;
    }

    void putdata() {
        cout << "\n----------------------------------------";
        cout << "\n********** Student Marklist **********";
        cout << "\n----------------------------------------";
        cout << "\nRoll No.: " << roll;
        cout << "\nStudent Name: " << name;
    }
};

class StudentExam : public Student {
public:
    int sub1,sub2,sub3,sub4,sub5,sub6;
    float per;
public:
    void accept_data() {
        getdata();
        cout<<"enter marks of subject1:";
        cin>>sub1;
        cout<<"enter marks of subject2:";
        cin>>sub2;
        cout<<"enter marks of subject3:";
        cin>>sub3;
        cout<<"enter marks of subject4:";
        cin>>sub4;
        cout<<"enter marks of subject5:";
        cin>>sub5;
        cout<<"enter marks of subject6:";
        cin>>sub6;
            }
        
    

    void display_data()
{

putdata();
cout<<"\n Marks of Subject 1: "<<sub1;
cout<<"\n Marks of Subject 2: "<<sub2;
cout<<"\n Marks of Subject 3: "<<sub3;
cout<<"\n Marks of Subject 4: "<<sub4;
cout<<"\n Marks of Subject 5: "<<sub5;
cout<<"\n Marks of Subject 6: "<<sub6;
}
};
class StudentResult: public StudentExam //Class Student Result derived from Class StudentExam
{
public:
void calculate ()
{
per =(sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
cout<<"\n\n Total Percentage "<<per;
cout<<"\n-------------------------- \n";
}
};

int main()
{
	cout<<"Name:Atharva Kishor Sarnaik"<<"\n"<<endl;
	cout<<"Roll no.36"<<"\n"<<endl;
	cout<<"Batch:S2"<<"\n"<<endl;
	cout<<"Div:B"<<"\n"<<endl;
	StudentResult str; 
	int cnt, i;
	cout<<"\n Enter No. of Students You Want?: ";
	cin>>cnt;
	for(i=0; i<cnt; i++)
	{
	
	str.accept_data();
	str.display_data();
	str.calculate();
	
	}
	return 0;
};




